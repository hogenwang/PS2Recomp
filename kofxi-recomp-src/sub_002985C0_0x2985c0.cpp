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

// Function: sub_002985C0
// Address: 0x2985c0 - 0x2986e8
void sub_002985C0_0x2985c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002985C0_0x2985c0");
#endif

    switch (ctx->pc) {
        case 0x2985e4u: goto label_2985e4;
        case 0x2985f8u: goto label_2985f8;
        case 0x298608u: goto label_298608;
        case 0x2986c8u: goto label_2986c8;
        default: break;
    }

    ctx->pc = 0x2985c0u;

    // 0x2985c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2985c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2985c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2985c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2985c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2985c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2985cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2985ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2985d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2985d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2985d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2985d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2985dc: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2985DCu;
    SET_GPR_U32(ctx, 31, 0x2985E4u);
    ctx->pc = 0x2985E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985DCu;
    // 0x2985e0: 0x240400a8  addiu       $a0, $zero, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2985DCu, 0x2985E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985E4u;
label_2985e4:
    // 0x2985e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2985e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985e8: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2985E8u;
    {
        const bool branch_taken_0x2985e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2985ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985E8u;
        // 0x2985ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985e8) {
            ctx->pc = 0x2986CCu;
            goto label_2986cc;
        }
    }
    ctx->pc = 0x2985F0u;
    // 0x2985f0: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2985F0u;
    SET_GPR_U32(ctx, 31, 0x2985F8u);
    ctx->pc = 0x2985F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2985F0u;
    // 0x2985f4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2985F0u, 0x2985F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2985F8u;
label_2985f8:
    // 0x2985f8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2985F8u;
    {
        const bool branch_taken_0x2985f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2985FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2985F8u;
        // 0x2985fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2985f8) {
            ctx->pc = 0x2986C0u;
            goto label_2986c0;
        }
    }
    ctx->pc = 0x298600u;
    // 0x298600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298604: 0x0  nop
    ctx->pc = 0x298604u;
    // NOP
label_298608:
    // 0x298608: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x298608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29860c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29860cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x298610: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x298610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x298614: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x298614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x298618: 0x28a40010  slti        $a0, $a1, 0x10
    ctx->pc = 0x298618u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x29861c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x29861cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x298620: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x298620u;
    {
        const bool branch_taken_0x298620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x298620) {
            ctx->pc = 0x298608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298608;
        }
    }
    ctx->pc = 0x298628u;
    // 0x298628: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x298628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29862c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29862Cu;
    {
        const bool branch_taken_0x29862c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x298630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29862Cu;
        // 0x298630: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29862c) {
            ctx->pc = 0x298640u;
            goto label_298640;
        }
    }
    ctx->pc = 0x298634u;
    // 0x298634: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x298634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x298638: 0x24459e28  addiu       $a1, $v0, -0x61D8
    ctx->pc = 0x298638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942248));
    // 0x29863c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29863cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_298640:
    // 0x298640: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298640u;
    {
        const bool branch_taken_0x298640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298640u;
        // 0x298644: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298640) {
            ctx->pc = 0x298650u;
            goto label_298650;
        }
    }
    ctx->pc = 0x298648u;
    // 0x298648: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x298648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29864c: 0x24428db8  addiu       $v0, $v0, -0x7248
    ctx->pc = 0x29864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938040));
label_298650:
    // 0x298650: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x298650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x298654: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x298654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x298658: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x298658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x29865c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x29865cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x298660: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x298660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x298664: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298668: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x298668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x29866c: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x29866cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x298670: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x298670u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x298674: 0xfe050028  sd          $a1, 0x28($s0)
    ctx->pc = 0x298674u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 5));
    // 0x298678: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x298678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x29867c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x29867cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x298680: 0xfe000030  sd          $zero, 0x30($s0)
    ctx->pc = 0x298680u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 0));
    // 0x298684: 0xfe000038  sd          $zero, 0x38($s0)
    ctx->pc = 0x298684u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 0));
    // 0x298688: 0xfe000040  sd          $zero, 0x40($s0)
    ctx->pc = 0x298688u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 0));
    // 0x29868c: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x29868cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x298690: 0xfe000050  sd          $zero, 0x50($s0)
    ctx->pc = 0x298690u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 0));
    // 0x298694: 0xfe000058  sd          $zero, 0x58($s0)
    ctx->pc = 0x298694u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 0));
    // 0x298698: 0xfe000060  sd          $zero, 0x60($s0)
    ctx->pc = 0x298698u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 0));
    // 0x29869c: 0xfe000068  sd          $zero, 0x68($s0)
    ctx->pc = 0x29869cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 0));
    // 0x2986a0: 0xfe000070  sd          $zero, 0x70($s0)
    ctx->pc = 0x2986a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 0));
    // 0x2986a4: 0xfe000078  sd          $zero, 0x78($s0)
    ctx->pc = 0x2986a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 0));
    // 0x2986a8: 0xfe000080  sd          $zero, 0x80($s0)
    ctx->pc = 0x2986a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 0));
    // 0x2986ac: 0xfe000088  sd          $zero, 0x88($s0)
    ctx->pc = 0x2986acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 0));
    // 0x2986b0: 0xfe000090  sd          $zero, 0x90($s0)
    ctx->pc = 0x2986b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 0));
    // 0x2986b4: 0xfe000098  sd          $zero, 0x98($s0)
    ctx->pc = 0x2986b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 152), GPR_U64(ctx, 0));
    // 0x2986b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2986B8u;
    {
        const bool branch_taken_0x2986b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2986BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986B8u;
        // 0x2986bc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986b8) {
            ctx->pc = 0x2986CCu;
            goto label_2986cc;
        }
    }
    ctx->pc = 0x2986C0u;
label_2986c0:
    // 0x2986c0: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2986C0u;
    SET_GPR_U32(ctx, 31, 0x2986C8u);
    ctx->pc = 0x2986C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2986C0u;
    // 0x2986c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2986C0u, 0x2986C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986C8u;
label_2986c8:
    // 0x2986c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2986c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2986cc:
    // 0x2986cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2986ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2986d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2986d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2986d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2986d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2986d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2986d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2986dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2986DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2986E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986DCu;
        // 0x2986e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2986DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2986E4u;
    // 0x2986e4: 0x0  nop
    ctx->pc = 0x2986e4u;
    // NOP
    if (ctx->pc == 0x2986e4u) { ctx->pc = 0x2986e8u; }
}
