#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030A620
// Address: 0x30a620 - 0x30a730
void sub_0030A620_0x30a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A620_0x30a620");
#endif

    switch (ctx->pc) {
        case 0x30a6f4u: goto label_30a6f4;
        case 0x30a70cu: goto label_30a70c;
        default: break;
    }

    ctx->pc = 0x30a620u;

label_30a620:
    // 0x30a620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30a620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30a624: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30a628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30a62c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a630: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30a630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a634: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30a634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30a638: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x30a638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30a63c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30a63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a640: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x30a640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x30a644: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x30a644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x30a648: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x30A648u;
    {
        const bool branch_taken_0x30a648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A648u;
        // 0x30a64c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a648) {
            ctx->pc = 0x30A6DCu;
            goto label_30a6dc;
        }
    }
    ctx->pc = 0x30A650u;
    // 0x30a650: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x30a650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x30a654: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x30a654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x30a658: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30a658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30a65c: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x30A65Cu;
    {
        const bool branch_taken_0x30a65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a65c) {
            ctx->pc = 0x30A660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A65Cu;
            // 0x30a660: 0x41a3c  dsll32      $v1, $a0, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A6B0u;
            goto label_30a6b0;
        }
    }
    ctx->pc = 0x30A664u;
    // 0x30a664: 0x41a3c  dsll32      $v1, $a0, 8
    ctx->pc = 0x30a664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 8));
    // 0x30a668: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x30a668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x30a66c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30a670: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x30a670u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30a674: 0x24844520  addiu       $a0, $a0, 0x4520
    ctx->pc = 0x30a674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17696));
    // 0x30a678: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a67c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x30a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x30a680: 0x8c6520c0  lw          $a1, 0x20C0($v1)
    ctx->pc = 0x30a680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8384)));
    // 0x30a684: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x30a684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x30a688: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30a688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30a68c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a690: 0x8c843bb0  lw          $a0, 0x3BB0($a0)
    ctx->pc = 0x30a690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15280)));
    // 0x30a694: 0x24633bc0  addiu       $v1, $v1, 0x3BC0
    ctx->pc = 0x30a694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15296));
    // 0x30a698: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30a698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30a69c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x30a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x30a6a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30a6a4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a6a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30A6A8u;
    {
        const bool branch_taken_0x30a6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A6A8u;
        // 0x30a6ac: 0xac643bb0  sw          $a0, 0x3BB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 15280), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6a8) {
            ctx->pc = 0x30A6DCu;
            goto label_30a6dc;
        }
    }
    ctx->pc = 0x30A6B0u;
label_30a6b0:
    // 0x30a6b0: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x30a6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x30a6b4: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30a6b8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x30a6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30a6bc: 0x24843dc0  addiu       $a0, $a0, 0x3DC0
    ctx->pc = 0x30a6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15808));
    // 0x30a6c0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x30a6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30a6c4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a6c8: 0x8c643ba8  lw          $a0, 0x3BA8($v1)
    ctx->pc = 0x30a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15272)));
    // 0x30a6cc: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x30a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x30a6d0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a6d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30a6d8: 0xac643ba8  sw          $a0, 0x3BA8($v1)
    ctx->pc = 0x30a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15272), GPR_U32(ctx, 4));
label_30a6dc:
    // 0x30a6dc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30a6e0: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A6E0u;
    {
        const bool branch_taken_0x30a6e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a6e0) {
            ctx->pc = 0x30A6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A6E0u;
            // 0x30a6e4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A6F8u;
            goto label_30a6f8;
        }
    }
    ctx->pc = 0x30A6E8u;
    // 0x30a6e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a6ec: 0xc0c2944  jal         func_30A510
    ctx->pc = 0x30A6ECu;
    SET_GPR_U32(ctx, 31, 0x30A6F4u);
    ctx->pc = 0x30A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A6ECu;
    // 0x30a6f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A510u, 0x30A6ECu, 0x30A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A6F4u;
label_30a6f4:
    // 0x30a6f4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x30a6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30a6f8:
    // 0x30a6f8: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A6F8u;
    {
        const bool branch_taken_0x30a6f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a6f8) {
            ctx->pc = 0x30A6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A6F8u;
            // 0x30a6fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A710u;
            goto label_30a710;
        }
    }
    ctx->pc = 0x30A700u;
    // 0x30a700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a704: 0xc0c2988  jal         func_30A620
    ctx->pc = 0x30A704u;
    SET_GPR_U32(ctx, 31, 0x30A70Cu);
    ctx->pc = 0x30A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A704u;
    // 0x30a708: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A620u;
    goto label_30a620;
    ctx->pc = 0x30A70Cu;
label_30a70c:
    // 0x30a70c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30a70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30a710:
    // 0x30a710: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30a710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a71c: 0x3e00008  jr          $ra
    ctx->pc = 0x30A71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A71Cu;
        // 0x30a720: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A724u;
    // 0x30a724: 0x0  nop
    ctx->pc = 0x30a724u;
    // NOP
    // 0x30a728: 0x0  nop
    ctx->pc = 0x30a728u;
    // NOP
    // 0x30a72c: 0x0  nop
    ctx->pc = 0x30a72cu;
    // NOP
}
