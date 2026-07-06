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

// Function: sub_001A0630
// Address: 0x1a0630 - 0x1a0790
void sub_001A0630_0x1a0630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0630_0x1a0630");
#endif

    switch (ctx->pc) {
        case 0x1a0674u: goto label_1a0674;
        case 0x1a067cu: goto label_1a067c;
        case 0x1a068cu: goto label_1a068c;
        case 0x1a0694u: goto label_1a0694;
        case 0x1a06a4u: goto label_1a06a4;
        case 0x1a06d4u: goto label_1a06d4;
        case 0x1a06dcu: goto label_1a06dc;
        case 0x1a06ecu: goto label_1a06ec;
        case 0x1a0714u: goto label_1a0714;
        case 0x1a071cu: goto label_1a071c;
        case 0x1a072cu: goto label_1a072c;
        case 0x1a0734u: goto label_1a0734;
        case 0x1a073cu: goto label_1a073c;
        case 0x1a074cu: goto label_1a074c;
        case 0x1a0770u: goto label_1a0770;
        case 0x1a0784u: goto label_1a0784;
        default: break;
    }

    ctx->pc = 0x1a0630u;

    // 0x1a0630: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a0630u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0634: 0x3c024780  lui         $v0, 0x4780
    ctx->pc = 0x1a0634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18304 << 16));
    // 0x1a0638: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a0638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a063c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a063cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0640: 0x0  nop
    ctx->pc = 0x1a0640u;
    // NOP
    // 0x1a0644: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a0644u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1a0648: 0x0  nop
    ctx->pc = 0x1a0648u;
    // NOP
    // 0x1a064c: 0x0  nop
    ctx->pc = 0x1a064cu;
    // NOP
    // 0x1a0650: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0658u;
    // 0x1a0658: 0x0  nop
    ctx->pc = 0x1a0658u;
    // NOP
    // 0x1a065c: 0x0  nop
    ctx->pc = 0x1a065cu;
    // NOP
    // 0x1a0660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a066c: 0xc055684  jal         func_155A10
    ctx->pc = 0x1A066Cu;
    SET_GPR_U32(ctx, 31, 0x1A0674u);
    ctx->pc = 0x1A0670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A066Cu;
    // 0x1a0670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x1A066Cu, 0x1A0674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0674u;
label_1a0674:
    // 0x1a0674: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x1A0674u;
    SET_GPR_U32(ctx, 31, 0x1A067Cu);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x1A0674u, 0x1A067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A067Cu;
label_1a067c:
    // 0x1a067c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a067cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0684: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x1A0684u;
    SET_GPR_U32(ctx, 31, 0x1A068Cu);
    ctx->pc = 0x1A0688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0684u;
    // 0x1a0688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x1A0684u, 0x1A068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A068Cu;
label_1a068c:
    // 0x1a068c: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x1A068Cu;
    SET_GPR_U32(ctx, 31, 0x1A0694u);
    ctx->pc = 0x1A0690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A068Cu;
    // 0x1a0690: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x1A068Cu, 0x1A0694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0694u;
label_1a0694:
    // 0x1a0694: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x1a0694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x1a0698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a069c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x1A069Cu;
    SET_GPR_U32(ctx, 31, 0x1A06A4u);
    ctx->pc = 0x1A06A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A069Cu;
    // 0x1a06a0: 0x248406c0  addiu       $a0, $a0, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x1A069Cu, 0x1A06A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06A4u;
label_1a06a4:
    // 0x1a06a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a06a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a06a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a06a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a06ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A06ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06ACu;
        // 0x1a06b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A06ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A06B4u;
    // 0x1a06b4: 0x0  nop
    ctx->pc = 0x1a06b4u;
    // NOP
    // 0x1a06b8: 0x0  nop
    ctx->pc = 0x1a06b8u;
    // NOP
    // 0x1a06bc: 0x0  nop
    ctx->pc = 0x1a06bcu;
    // NOP
    // 0x1a06c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a06c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a06c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a06c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a06c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a06c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a06cc: 0xc067dcc  jal         func_19F730
    ctx->pc = 0x1A06CCu;
    SET_GPR_U32(ctx, 31, 0x1A06D4u);
    ctx->pc = 0x1A06D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06CCu;
    // 0x1a06d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F730u, 0x1A06CCu, 0x1A06D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06D4u;
label_1a06d4:
    // 0x1a06d4: 0xc055200  jal         func_154800
    ctx->pc = 0x1A06D4u;
    SET_GPR_U32(ctx, 31, 0x1A06DCu);
    ctx->pc = 0x154800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154800u, 0x1A06D4u, 0x1A06DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06DCu;
label_1a06dc:
    // 0x1a06dc: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x1a06dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x1a06e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a06e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06e4: 0xc055768  jal         func_155DA0
    ctx->pc = 0x1A06E4u;
    SET_GPR_U32(ctx, 31, 0x1A06ECu);
    ctx->pc = 0x1A06E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06E4u;
    // 0x1a06e8: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x1A06E4u, 0x1A06ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06ECu;
label_1a06ec:
    // 0x1a06ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a06ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a06f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a06f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a06f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A06F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06F4u;
        // 0x1a06f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A06F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A06FCu;
    // 0x1a06fc: 0x0  nop
    ctx->pc = 0x1a06fcu;
    // NOP
    // 0x1a0700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a070c: 0xc055684  jal         func_155A10
    ctx->pc = 0x1A070Cu;
    SET_GPR_U32(ctx, 31, 0x1A0714u);
    ctx->pc = 0x1A0710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A070Cu;
    // 0x1a0710: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x1A070Cu, 0x1A0714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0714u;
label_1a0714:
    // 0x1a0714: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x1A0714u;
    SET_GPR_U32(ctx, 31, 0x1A071Cu);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x1A0714u, 0x1A071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A071Cu;
label_1a071c:
    // 0x1a071c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a071cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0724: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x1A0724u;
    SET_GPR_U32(ctx, 31, 0x1A072Cu);
    ctx->pc = 0x1A0728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0724u;
    // 0x1a0728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x1A0724u, 0x1A072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A072Cu;
label_1a072c:
    // 0x1a072c: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x1A072Cu;
    SET_GPR_U32(ctx, 31, 0x1A0734u);
    ctx->pc = 0x1A0730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A072Cu;
    // 0x1a0730: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x1A072Cu, 0x1A0734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0734u;
label_1a0734:
    // 0x1a0734: 0xc066de4  jal         func_19B790
    ctx->pc = 0x1A0734u;
    SET_GPR_U32(ctx, 31, 0x1A073Cu);
    ctx->pc = 0x19B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B790u, 0x1A0734u, 0x1A073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A073Cu;
label_1a073c:
    // 0x1a073c: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x1a073cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x1a0740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0744: 0xc055768  jal         func_155DA0
    ctx->pc = 0x1A0744u;
    SET_GPR_U32(ctx, 31, 0x1A074Cu);
    ctx->pc = 0x1A0748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0744u;
    // 0x1a0748: 0x24840760  addiu       $a0, $a0, 0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x1A0744u, 0x1A074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A074Cu;
label_1a074c:
    // 0x1a074c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a074cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0754: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0754u;
        // 0x1a0758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A075Cu;
    // 0x1a075c: 0x0  nop
    ctx->pc = 0x1a075cu;
    // NOP
    // 0x1a0760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0768: 0xc066e00  jal         func_19B800
    ctx->pc = 0x1A0768u;
    SET_GPR_U32(ctx, 31, 0x1A0770u);
    ctx->pc = 0x1A076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0768u;
    // 0x1a076c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B800u, 0x1A0768u, 0x1A0770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0770u;
label_1a0770:
    // 0x1a0770: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x1a0770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x1a0774: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1a0774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a0778: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1a0778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a077c: 0xc066e04  jal         func_19B810
    ctx->pc = 0x1A077Cu;
    SET_GPR_U32(ctx, 31, 0x1A0784u);
    ctx->pc = 0x1A0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A077Cu;
    // 0x1a0780: 0x24c6f370  addiu       $a2, $a2, -0xC90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B810u, 0x1A077Cu, 0x1A0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0784u;
label_1a0784:
    // 0x1a0784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0788: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0788u;
        // 0x1a078c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0790u;
}
