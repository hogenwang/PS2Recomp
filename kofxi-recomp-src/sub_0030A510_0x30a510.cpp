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

// Function: sub_0030A510
// Address: 0x30a510 - 0x30a620
void sub_0030A510_0x30a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A510_0x30a510");
#endif

    switch (ctx->pc) {
        case 0x30a5e4u: goto label_30a5e4;
        case 0x30a5fcu: goto label_30a5fc;
        default: break;
    }

    ctx->pc = 0x30a510u;

label_30a510:
    // 0x30a510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30a514: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30a518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30a51c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a520: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30a520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30a524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30a528: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x30a528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30a52c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30a52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a530: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x30a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x30a534: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x30a534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x30a538: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x30A538u;
    {
        const bool branch_taken_0x30a538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A538u;
        // 0x30a53c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a538) {
            ctx->pc = 0x30A5CCu;
            goto label_30a5cc;
        }
    }
    ctx->pc = 0x30A540u;
    // 0x30a540: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x30a540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x30a544: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x30a544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x30a548: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30a548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30a54c: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x30A54Cu;
    {
        const bool branch_taken_0x30a54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a54c) {
            ctx->pc = 0x30A550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A54Cu;
            // 0x30a550: 0x41a3c  dsll32      $v1, $a0, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A5A0u;
            goto label_30a5a0;
        }
    }
    ctx->pc = 0x30A554u;
    // 0x30a554: 0x41a3c  dsll32      $v1, $a0, 8
    ctx->pc = 0x30a554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 8));
    // 0x30a558: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x30a558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x30a55c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30a560: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x30a560u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30a564: 0x24844520  addiu       $a0, $a0, 0x4520
    ctx->pc = 0x30a564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17696));
    // 0x30a568: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a56c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x30a56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x30a570: 0x8c6520c0  lw          $a1, 0x20C0($v1)
    ctx->pc = 0x30a570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8384)));
    // 0x30a574: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x30a574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x30a578: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30a578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30a57c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a580: 0x8c843bb0  lw          $a0, 0x3BB0($a0)
    ctx->pc = 0x30a580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15280)));
    // 0x30a584: 0x24633bc0  addiu       $v1, $v1, 0x3BC0
    ctx->pc = 0x30a584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15296));
    // 0x30a588: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30a58c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x30a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x30a590: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30a590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30a594: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a598: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30A598u;
    {
        const bool branch_taken_0x30a598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A598u;
        // 0x30a59c: 0xac643bb0  sw          $a0, 0x3BB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 15280), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a598) {
            ctx->pc = 0x30A5CCu;
            goto label_30a5cc;
        }
    }
    ctx->pc = 0x30A5A0u;
label_30a5a0:
    // 0x30a5a0: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x30a5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x30a5a4: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30a5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30a5a8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x30a5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30a5ac: 0x24843dc0  addiu       $a0, $a0, 0x3DC0
    ctx->pc = 0x30a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15808));
    // 0x30a5b0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x30a5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30a5b4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a5b8: 0x8c643ba8  lw          $a0, 0x3BA8($v1)
    ctx->pc = 0x30a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15272)));
    // 0x30a5bc: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x30a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x30a5c0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a5c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30a5c8: 0xac643ba8  sw          $a0, 0x3BA8($v1)
    ctx->pc = 0x30a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15272), GPR_U32(ctx, 4));
label_30a5cc:
    // 0x30a5cc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30a5d0: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A5D0u;
    {
        const bool branch_taken_0x30a5d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a5d0) {
            ctx->pc = 0x30A5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A5D0u;
            // 0x30a5d4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A5E8u;
            goto label_30a5e8;
        }
    }
    ctx->pc = 0x30A5D8u;
    // 0x30a5d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5dc: 0xc0c2944  jal         func_30A510
    ctx->pc = 0x30A5DCu;
    SET_GPR_U32(ctx, 31, 0x30A5E4u);
    ctx->pc = 0x30A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5DCu;
    // 0x30a5e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A510u;
    goto label_30a510;
    ctx->pc = 0x30A5E4u;
label_30a5e4:
    // 0x30a5e4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x30a5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_30a5e8:
    // 0x30a5e8: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A5E8u;
    {
        const bool branch_taken_0x30a5e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a5e8) {
            ctx->pc = 0x30A5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A5E8u;
            // 0x30a5ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A600u;
            goto label_30a600;
        }
    }
    ctx->pc = 0x30A5F0u;
    // 0x30a5f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5f4: 0xc0c2944  jal         func_30A510
    ctx->pc = 0x30A5F4u;
    SET_GPR_U32(ctx, 31, 0x30A5FCu);
    ctx->pc = 0x30A5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5F4u;
    // 0x30a5f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A510u;
    goto label_30a510;
    ctx->pc = 0x30A5FCu;
label_30a5fc:
    // 0x30a5fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30a5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30a600:
    // 0x30a600: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30a600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a60c: 0x3e00008  jr          $ra
    ctx->pc = 0x30A60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A60Cu;
        // 0x30a610: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A614u;
    // 0x30a614: 0x0  nop
    ctx->pc = 0x30a614u;
    // NOP
    // 0x30a618: 0x0  nop
    ctx->pc = 0x30a618u;
    // NOP
    // 0x30a61c: 0x0  nop
    ctx->pc = 0x30a61cu;
    // NOP
    if (ctx->pc == 0x30a61cu) { ctx->pc = 0x30a620u; }
}
