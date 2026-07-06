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

// Function: sub_0030D680
// Address: 0x30d680 - 0x30d7d0
void sub_0030D680_0x30d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D680_0x30d680");
#endif

    switch (ctx->pc) {
        case 0x30d694u: goto label_30d694;
        case 0x30d6d8u: goto label_30d6d8;
        case 0x30d6e4u: goto label_30d6e4;
        case 0x30d6f0u: goto label_30d6f0;
        case 0x30d70cu: goto label_30d70c;
        case 0x30d728u: goto label_30d728;
        case 0x30d738u: goto label_30d738;
        case 0x30d768u: goto label_30d768;
        case 0x30d774u: goto label_30d774;
        case 0x30d79cu: goto label_30d79c;
        case 0x30d7a8u: goto label_30d7a8;
        case 0x30d7b8u: goto label_30d7b8;
        default: break;
    }

    ctx->pc = 0x30d680u;

    // 0x30d680: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30d680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30d684: 0x8c664778  lw          $a2, 0x4778($v1)
    ctx->pc = 0x30d684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18296)));
    // 0x30d688: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x30D688u;
    {
        const bool branch_taken_0x30d688 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d688) {
            ctx->pc = 0x30D6B0u;
            goto label_30d6b0;
        }
    }
    ctx->pc = 0x30D690u;
    // 0x30d690: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30d690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_30d694:
    // 0x30d694: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x30d694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x30d698: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x30d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x30d69c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30d69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30d6a0: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x30d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x30d6a4: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x30d6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x30d6a8: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30D6A8u;
    {
        const bool branch_taken_0x30d6a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d6a8) {
            ctx->pc = 0x30D694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30d694;
        }
    }
    ctx->pc = 0x30D6B0u;
label_30d6b0:
    // 0x30d6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x30D6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D6B8u;
    // 0x30d6b8: 0x0  nop
    ctx->pc = 0x30d6b8u;
    // NOP
    // 0x30d6bc: 0x0  nop
    ctx->pc = 0x30d6bcu;
    // NOP
    // 0x30d6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30d6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30d6c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d6cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30d6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6d0: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x30D6D0u;
    SET_GPR_U32(ctx, 31, 0x30D6D8u);
    ctx->pc = 0x30D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D6D0u;
    // 0x30d6d4: 0x24040102  addiu       $a0, $zero, 0x102 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x30D6D0u, 0x30D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D6D8u;
label_30d6d8:
    // 0x30d6d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30d6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d6dc: 0xc04c1f8  jal         func_1307E0
    ctx->pc = 0x30D6DCu;
    SET_GPR_U32(ctx, 31, 0x30D6E4u);
    ctx->pc = 0x30D6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D6DCu;
    // 0x30d6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307E0u, 0x30D6DCu, 0x30D6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D6E4u;
label_30d6e4:
    // 0x30d6e4: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x30d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x30d6e8: 0xc0558d0  jal         func_156340
    ctx->pc = 0x30D6E8u;
    SET_GPR_U32(ctx, 31, 0x30D6F0u);
    ctx->pc = 0x30D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D6E8u;
    // 0x30d6ec: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x30D6E8u, 0x30D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D6F0u;
label_30d6f0:
    // 0x30d6f0: 0x240304b0  addiu       $v1, $zero, 0x4B0
    ctx->pc = 0x30d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x30d6f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30d6f8: 0xac43da38  sw          $v1, -0x25C8($v0)
    ctx->pc = 0x30d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957624), GPR_U32(ctx, 3));
    // 0x30d6fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30d6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30d700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d704: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x30D704u;
    SET_GPR_U32(ctx, 31, 0x30D70Cu);
    ctx->pc = 0x30D708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D704u;
    // 0x30d708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x30D704u, 0x30D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D70Cu;
label_30d70c:
    // 0x30d70c: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x30d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x30d710: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30d710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30d714: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x30d714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x30d718: 0xac60d910  sw          $zero, -0x26F0($v1)
    ctx->pc = 0x30d718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957328), GPR_U32(ctx, 0));
    // 0x30d71c: 0x248435f8  addiu       $a0, $a0, 0x35F8
    ctx->pc = 0x30d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13816));
    // 0x30d720: 0xc0558e4  jal         func_156390
    ctx->pc = 0x30D720u;
    SET_GPR_U32(ctx, 31, 0x30D728u);
    ctx->pc = 0x30D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D720u;
    // 0x30d724: 0xac40da48  sw          $zero, -0x25B8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957640), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156390u, 0x30D720u, 0x30D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D728u;
label_30d728:
    // 0x30d728: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30d728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30d72c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d730: 0xc055768  jal         func_155DA0
    ctx->pc = 0x30D730u;
    SET_GPR_U32(ctx, 31, 0x30D738u);
    ctx->pc = 0x30D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D730u;
    // 0x30d734: 0x2484d830  addiu       $a0, $a0, -0x27D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x30D730u, 0x30D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D738u;
label_30d738:
    // 0x30d738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d73c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d740: 0x3e00008  jr          $ra
    ctx->pc = 0x30D740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D740u;
        // 0x30d744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D748u;
    // 0x30d748: 0x0  nop
    ctx->pc = 0x30d748u;
    // NOP
    // 0x30d74c: 0x0  nop
    ctx->pc = 0x30d74cu;
    // NOP
    // 0x30d750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30d754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30d75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d760: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x30D760u;
    SET_GPR_U32(ctx, 31, 0x30D768u);
    ctx->pc = 0x30D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D760u;
    // 0x30d764: 0x24040303  addiu       $a0, $zero, 0x303 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x30D760u, 0x30D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D768u;
label_30d768:
    // 0x30d768: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x30d768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x30d76c: 0xc0558d0  jal         func_156340
    ctx->pc = 0x30D76Cu;
    SET_GPR_U32(ctx, 31, 0x30D774u);
    ctx->pc = 0x30D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D76Cu;
    // 0x30d770: 0x2484d430  addiu       $a0, $a0, -0x2BD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x30D76Cu, 0x30D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D774u;
label_30d774:
    // 0x30d774: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30d778: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x30d778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x30d77c: 0xac40da38  sw          $zero, -0x25C8($v0)
    ctx->pc = 0x30d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957624), GPR_U32(ctx, 0));
    // 0x30d780: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30d780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d784: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30d784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30d788: 0xac60d910  sw          $zero, -0x26F0($v1)
    ctx->pc = 0x30d788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957328), GPR_U32(ctx, 0));
    // 0x30d78c: 0xac40da48  sw          $zero, -0x25B8($v0)
    ctx->pc = 0x30d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957640), GPR_U32(ctx, 0));
    // 0x30d790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30d790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d794: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x30D794u;
    SET_GPR_U32(ctx, 31, 0x30D79Cu);
    ctx->pc = 0x30D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D794u;
    // 0x30d798: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x30D794u, 0x30D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D79Cu;
label_30d79c:
    // 0x30d79c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x30d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x30d7a0: 0xc0558e4  jal         func_156390
    ctx->pc = 0x30D7A0u;
    SET_GPR_U32(ctx, 31, 0x30D7A8u);
    ctx->pc = 0x30D7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D7A0u;
    // 0x30d7a4: 0x24843608  addiu       $a0, $a0, 0x3608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156390u, 0x30D7A0u, 0x30D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7A8u;
label_30d7a8:
    // 0x30d7a8: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x30d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x30d7ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7b0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x30D7B0u;
    SET_GPR_U32(ctx, 31, 0x30D7B8u);
    ctx->pc = 0x30D7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D7B0u;
    // 0x30d7b4: 0x2484d830  addiu       $a0, $a0, -0x27D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x30D7B0u, 0x30D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7B8u;
label_30d7b8:
    // 0x30d7b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d7bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x30D7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7C0u;
        // 0x30d7c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D7C8u;
    // 0x30d7c8: 0x0  nop
    ctx->pc = 0x30d7c8u;
    // NOP
    // 0x30d7cc: 0x0  nop
    ctx->pc = 0x30d7ccu;
    // NOP
    if (ctx->pc == 0x30d7ccu) { ctx->pc = 0x30d7d0u; }
}
