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

// Function: sub_00213300
// Address: 0x213300 - 0x2133d0
void sub_00213300_0x213300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213300_0x213300");
#endif

    switch (ctx->pc) {
        case 0x21333cu: goto label_21333c;
        case 0x213350u: goto label_213350;
        case 0x213364u: goto label_213364;
        case 0x213378u: goto label_213378;
        case 0x21338cu: goto label_21338c;
        case 0x2133a0u: goto label_2133a0;
        case 0x2133a8u: goto label_2133a8;
        default: break;
    }

    ctx->pc = 0x213300u;

    // 0x213300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213304: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x213304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x213308: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21330c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21330cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213310: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213314: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x213314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213318: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21331c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21331cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213320: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x213320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x213324: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x213324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213328: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x213328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21332c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21332cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x213330: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x213330u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x213334: 0xc084612  jal         func_211848
    ctx->pc = 0x213334u;
    SET_GPR_U32(ctx, 31, 0x21333Cu);
    ctx->pc = 0x213338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213334u;
    // 0x213338: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213334u, 0x21333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21333Cu;
label_21333c:
    // 0x21333c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21333cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213344: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x213344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213348: 0xc084612  jal         func_211848
    ctx->pc = 0x213348u;
    SET_GPR_U32(ctx, 31, 0x213350u);
    ctx->pc = 0x21334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213348u;
    // 0x21334c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x213348u, 0x213350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213350u;
label_213350:
    // 0x213350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213354: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213358: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x213358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21335c: 0xc084582  jal         func_211608
    ctx->pc = 0x21335Cu;
    SET_GPR_U32(ctx, 31, 0x213364u);
    ctx->pc = 0x213360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21335Cu;
    // 0x213360: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x21335Cu, 0x213364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213364u;
label_213364:
    // 0x213364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x213368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21336c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21336cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213370: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213370u;
    SET_GPR_U32(ctx, 31, 0x213378u);
    ctx->pc = 0x213374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213370u;
    // 0x213374: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x213370u, 0x213378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213378u;
label_213378:
    // 0x213378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21337c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21337cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213380: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x213380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213384: 0xc0845c2  jal         func_211708
    ctx->pc = 0x213384u;
    SET_GPR_U32(ctx, 31, 0x21338Cu);
    ctx->pc = 0x213388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213384u;
    // 0x213388: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x213384u, 0x21338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21338Cu;
label_21338c:
    // 0x21338c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21338cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213390: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x213390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213398: 0xc084582  jal         func_211608
    ctx->pc = 0x213398u;
    SET_GPR_U32(ctx, 31, 0x2133A0u);
    ctx->pc = 0x21339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213398u;
    // 0x21339c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x213398u, 0x2133A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2133A0u;
label_2133a0:
    // 0x2133a0: 0xc084c66  jal         func_213198
    ctx->pc = 0x2133A0u;
    SET_GPR_U32(ctx, 31, 0x2133A8u);
    ctx->pc = 0x2133A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2133A0u;
    // 0x2133a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213198u, 0x2133A0u, 0x2133A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2133A8u;
label_2133a8:
    // 0x2133a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2133a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2133ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2133acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2133b0: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2133b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2133b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2133b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2133b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2133b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2133bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2133bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2133c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2133c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2133c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2133c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2133c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2133C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2133CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133C8u;
        // 0x2133cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2133C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2133D0u;
}
