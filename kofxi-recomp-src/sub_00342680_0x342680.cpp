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

// Function: sub_00342680
// Address: 0x342680 - 0x342770
void sub_00342680_0x342680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342680_0x342680");
#endif

    switch (ctx->pc) {
        case 0x342690u: goto label_342690;
        case 0x342698u: goto label_342698;
        case 0x3426a4u: goto label_3426a4;
        case 0x3426b0u: goto label_3426b0;
        case 0x3426ccu: goto label_3426cc;
        case 0x3426d4u: goto label_3426d4;
        case 0x342718u: goto label_342718;
        case 0x34274cu: goto label_34274c;
        default: break;
    }

    ctx->pc = 0x342680u;

    // 0x342680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342688: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x342688u;
    SET_GPR_U32(ctx, 31, 0x342690u);
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x342688u, 0x342690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342690u;
label_342690:
    // 0x342690: 0xc0cb1f4  jal         func_32C7D0
    ctx->pc = 0x342690u;
    SET_GPR_U32(ctx, 31, 0x342698u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x342690u, 0x342698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342698u;
label_342698:
    // 0x342698: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x342698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34269c: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x34269Cu;
    SET_GPR_U32(ctx, 31, 0x3426A4u);
    ctx->pc = 0x3426A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34269Cu;
    // 0x3426a0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x34269Cu, 0x3426A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426A4u;
label_3426a4:
    // 0x3426a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3426a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3426a8: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x3426A8u;
    SET_GPR_U32(ctx, 31, 0x3426B0u);
    ctx->pc = 0x3426ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3426A8u;
    // 0x3426ac: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x3426A8u, 0x3426B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426B0u;
label_3426b0:
    // 0x3426b0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3426b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3426b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3426b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426b8: 0x2484f2c0  addiu       $a0, $a0, -0xD40
    ctx->pc = 0x3426b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963904));
    // 0x3426bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3426bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3426c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426c4: 0xc0558a0  jal         func_156280
    ctx->pc = 0x3426C4u;
    SET_GPR_U32(ctx, 31, 0x3426CCu);
    ctx->pc = 0x3426C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3426C4u;
    // 0x3426c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156280u, 0x3426C4u, 0x3426CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426CCu;
label_3426cc:
    // 0x3426cc: 0xc055684  jal         func_155A10
    ctx->pc = 0x3426CCu;
    SET_GPR_U32(ctx, 31, 0x3426D4u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x3426CCu, 0x3426D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426D4u;
label_3426d4:
    // 0x3426d4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3426d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3426d8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3426d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3426dc: 0xac43e7e8  sw          $v1, -0x1818($v0)
    ctx->pc = 0x3426dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 3));
    // 0x3426e0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3426e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3426e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3426e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3426e8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3426e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3426ec: 0xac44ea60  sw          $a0, -0x15A0($v0)
    ctx->pc = 0x3426ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961760), GPR_U32(ctx, 4));
    // 0x3426f0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3426f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3426f4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3426f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3426f8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3426f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3426fc: 0xa043e820  sb          $v1, -0x17E0($v0)
    ctx->pc = 0x3426fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 3));
    // 0x342700: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x342700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x342704: 0x24a54f08  addiu       $a1, $a1, 0x4F08
    ctx->pc = 0x342704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20232));
    // 0x342708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x342708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34270c: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x34270cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x342710: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x342710u;
    SET_GPR_U32(ctx, 31, 0x342718u);
    ctx->pc = 0x342714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342710u;
    // 0x342714: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x342710u, 0x342718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342718u;
label_342718:
    // 0x342718: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x342718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34271c: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x34271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x342720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x342720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342724: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342728: 0x8c45ea78  lw          $a1, -0x1588($v0)
    ctx->pc = 0x342728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x34272c: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x34272cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x342730: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342734: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x342734u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x342738: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x342738u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x34273c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x34273cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x342740: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x342740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x342744: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x342744u;
    SET_GPR_U32(ctx, 31, 0x34274Cu);
    ctx->pc = 0x342748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342744u;
    // 0x342748: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x342744u, 0x34274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34274Cu;
label_34274c:
    // 0x34274c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x34274cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x342750: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x342750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x342754: 0x9084dae0  lbu         $a0, -0x2520($a0)
    ctx->pc = 0x342754u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294957792)));
    // 0x342758: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x342758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x34275c: 0xa064dae0  sb          $a0, -0x2520($v1)
    ctx->pc = 0x34275cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957792), (uint8_t)GPR_U32(ctx, 4));
    // 0x342760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342764: 0x3e00008  jr          $ra
    ctx->pc = 0x342764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342764u;
        // 0x342768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34276Cu;
    // 0x34276c: 0x0  nop
    ctx->pc = 0x34276cu;
    // NOP
    if (ctx->pc == 0x34276cu) { ctx->pc = 0x342770u; }
}
