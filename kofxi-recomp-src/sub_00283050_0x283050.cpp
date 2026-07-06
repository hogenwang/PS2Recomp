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

// Function: sub_00283050
// Address: 0x283050 - 0x283100
void sub_00283050_0x283050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283050_0x283050");
#endif

    switch (ctx->pc) {
        case 0x28306cu: goto label_28306c;
        case 0x2830e0u: goto label_2830e0;
        default: break;
    }

    ctx->pc = 0x283050u;

    // 0x283050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28305c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28305Cu;
    {
        const bool branch_taken_0x28305c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x283060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28305Cu;
        // 0x283060: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28305c) {
            ctx->pc = 0x283080u;
            goto label_283080;
        }
    }
    ctx->pc = 0x283064u;
    // 0x283064: 0xc0a0c40  jal         func_283100
    ctx->pc = 0x283064u;
    SET_GPR_U32(ctx, 31, 0x28306Cu);
    ctx->pc = 0x283100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283100u, 0x283064u, 0x28306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28306Cu;
label_28306c:
    // 0x28306c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28306cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283078: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x283078u;
    ctx->pc = 0x28307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283078u;
    // 0x28307c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    ctx->pc = 0x283080u;
label_283080:
    // 0x283080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283088: 0x3e00008  jr          $ra
    ctx->pc = 0x283088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283088u;
        // 0x28308c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283090u;
    // 0x283090: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x283090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x283094: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283094u;
    {
        const bool branch_taken_0x283094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283094) {
            ctx->pc = 0x2830A4u;
            goto label_2830a4;
        }
    }
    ctx->pc = 0x28309Cu;
    // 0x28309c: 0x3e00008  jr          $ra
    ctx->pc = 0x28309Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2830A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28309Cu;
        // 0x2830a0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28309Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2830A4u;
label_2830a4:
    // 0x2830a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2830A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2830A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830A4u;
        // 0x2830a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2830A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2830ACu;
    // 0x2830ac: 0x0  nop
    ctx->pc = 0x2830acu;
    // NOP
    // 0x2830b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2830b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2830b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2830b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2830b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2830b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2830bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2830bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2830c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2830c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2830c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2830c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2830c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2830c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2830cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2830ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2830d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2830D0u;
    {
        const bool branch_taken_0x2830d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2830D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830D0u;
        // 0x2830d4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2830d0) {
            ctx->pc = 0x2830E0u;
            goto label_2830e0;
        }
    }
    ctx->pc = 0x2830D8u;
    // 0x2830d8: 0xc0a0c40  jal         func_283100
    ctx->pc = 0x2830D8u;
    SET_GPR_U32(ctx, 31, 0x2830E0u);
    ctx->pc = 0x283100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283100u, 0x2830D8u, 0x2830E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2830E0u;
label_2830e0:
    // 0x2830e0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2830e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x2830e4: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2830e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2830e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2830e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2830ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2830ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2830f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2830f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2830f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2830f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2830f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2830F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2830FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830F8u;
        // 0x2830fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2830F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283100u;
}
