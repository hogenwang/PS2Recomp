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

// Function: sub_00219F70
// Address: 0x219f70 - 0x21a068
void sub_00219F70_0x219f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219F70_0x219f70");
#endif

    switch (ctx->pc) {
        case 0x219f8cu: goto label_219f8c;
        case 0x219fdcu: goto label_219fdc;
        case 0x219fecu: goto label_219fec;
        case 0x21a03cu: goto label_21a03c;
        case 0x21a044u: goto label_21a044;
        default: break;
    }

    ctx->pc = 0x219f70u;

label_219f70:
    // 0x219f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219f78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x219f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x219f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f80: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219f84: 0xc043e52  jal         func_10F948
    ctx->pc = 0x219F84u;
    SET_GPR_U32(ctx, 31, 0x219F8Cu);
    ctx->pc = 0x219F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F84u;
    // 0x219f88: 0x24841370  addiu       $a0, $a0, 0x1370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x219F84u, 0x219F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F8Cu;
label_219f8c:
    // 0x219f8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x219f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219f94: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219f9c: 0x248412c0  addiu       $a0, $a0, 0x12C0
    ctx->pc = 0x219f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x219fa0: 0x8043e52  j           func_10F948
    ctx->pc = 0x219FA0u;
    ctx->pc = 0x219FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219FA0u;
    // 0x219fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x219FA8u;
    // 0x219fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219fac: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x219facu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x219fb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219fb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x219fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x219fb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219fbc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x219fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219fc4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x219fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fc8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x219fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x219fcc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x219fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x219fd0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x219fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x219fd4: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x219FD4u;
    SET_GPR_U32(ctx, 31, 0x219FDCu);
    ctx->pc = 0x219FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219FD4u;
    // 0x219fd8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x219FD4u, 0x219FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219FDCu;
label_219fdc:
    // 0x219fdc: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x219fdcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x219fe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fe4: 0xc0867dc  jal         func_219F70
    ctx->pc = 0x219FE4u;
    SET_GPR_U32(ctx, 31, 0x219FECu);
    ctx->pc = 0x219FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219FE4u;
    // 0x219fe8: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F70u;
    goto label_219f70;
    ctx->pc = 0x219FECu;
label_219fec:
    // 0x219fec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x219fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ff0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219ff8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219ff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219ffc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x219ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a000: 0x3e00008  jr          $ra
    ctx->pc = 0x21A000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A000u;
        // 0x21a004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A008u;
    // 0x21a008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a00c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21a00cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21a010: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21a010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21a014: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21a014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a01c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21a01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21a020: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a028: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x21a028u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a02c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21a02cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a030: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21a030u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21a034: 0xc084582  jal         func_211608
    ctx->pc = 0x21A034u;
    SET_GPR_U32(ctx, 31, 0x21A03Cu);
    ctx->pc = 0x21A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A034u;
    // 0x21a038: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x21A034u, 0x21A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A03Cu;
label_21a03c:
    // 0x21a03c: 0xc0867dc  jal         func_219F70
    ctx->pc = 0x21A03Cu;
    SET_GPR_U32(ctx, 31, 0x21A044u);
    ctx->pc = 0x21A040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A03Cu;
    // 0x21a040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F70u;
    goto label_219f70;
    ctx->pc = 0x21A044u;
label_21a044:
    // 0x21a044: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21a044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a04c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x21a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21a050: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a058: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21a058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a05c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A05Cu;
        // 0x21a060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A064u;
    // 0x21a064: 0x0  nop
    ctx->pc = 0x21a064u;
    // NOP
    if (ctx->pc == 0x21a064u) { ctx->pc = 0x21a068u; }
}
