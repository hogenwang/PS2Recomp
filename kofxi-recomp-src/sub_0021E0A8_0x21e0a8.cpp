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

// Function: sub_0021E0A8
// Address: 0x21e0a8 - 0x21e210
void sub_0021E0A8_0x21e0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E0A8_0x21e0a8");
#endif

    switch (ctx->pc) {
        case 0x21e0c4u: goto label_21e0c4;
        case 0x21e114u: goto label_21e114;
        case 0x21e124u: goto label_21e124;
        case 0x21e174u: goto label_21e174;
        case 0x21e17cu: goto label_21e17c;
        case 0x21e1b8u: goto label_21e1b8;
        case 0x21e1f0u: goto label_21e1f0;
        default: break;
    }

    ctx->pc = 0x21e0a8u;

label_21e0a8:
    // 0x21e0a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e0ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e0b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21e0b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0b8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e0bc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21E0BCu;
    SET_GPR_U32(ctx, 31, 0x21E0C4u);
    ctx->pc = 0x21E0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0BCu;
    // 0x21e0c0: 0x24841b28  addiu       $a0, $a0, 0x1B28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21E0BCu, 0x21E0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0C4u;
label_21e0c4:
    // 0x21e0c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21e0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21e0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e0cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21e0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21e0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e0d4: 0x24841ab8  addiu       $a0, $a0, 0x1AB8
    ctx->pc = 0x21e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6840));
    // 0x21e0d8: 0x8043e52  j           func_10F948
    ctx->pc = 0x21E0D8u;
    ctx->pc = 0x21E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0D8u;
    // 0x21e0dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21E0E0u;
    // 0x21e0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e0e4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21e0e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21e0e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e0ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21e0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21e0f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21e0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21e0f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21e0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e0fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21e0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e100: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21e100u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21e104: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21e104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21e108: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x21e108u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e10c: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21E10Cu;
    SET_GPR_U32(ctx, 31, 0x21E114u);
    ctx->pc = 0x21E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E10Cu;
    // 0x21e110: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x21E10Cu, 0x21E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E114u;
label_21e114:
    // 0x21e114: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21e114u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21e118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e11c: 0xc08782a  jal         func_21E0A8
    ctx->pc = 0x21E11Cu;
    SET_GPR_U32(ctx, 31, 0x21E124u);
    ctx->pc = 0x21E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E11Cu;
    // 0x21e120: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E0A8u;
    goto label_21e0a8;
    ctx->pc = 0x21E124u;
label_21e124:
    // 0x21e124: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21e124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e128: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e12c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e130: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e134: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21e134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e138: 0x3e00008  jr          $ra
    ctx->pc = 0x21E138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E138u;
        // 0x21e13c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E140u;
    // 0x21e140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e144: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21e144u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21e148: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21e148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21e14c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21e14cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e154: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x21e154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x21e158: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21e158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21e15c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e160: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x21e160u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e164: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21e164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e168: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21e168u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21e16c: 0xc084582  jal         func_211608
    ctx->pc = 0x21E16Cu;
    SET_GPR_U32(ctx, 31, 0x21E174u);
    ctx->pc = 0x21E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E16Cu;
    // 0x21e170: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x21E16Cu, 0x21E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E174u;
label_21e174:
    // 0x21e174: 0xc08782a  jal         func_21E0A8
    ctx->pc = 0x21E174u;
    SET_GPR_U32(ctx, 31, 0x21E17Cu);
    ctx->pc = 0x21E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E174u;
    // 0x21e178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E0A8u;
    goto label_21e0a8;
    ctx->pc = 0x21E17Cu;
label_21e17c:
    // 0x21e17c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21e180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e184: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x21e184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21e188: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e188u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e18c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e18cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e190: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21e190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e194: 0x3e00008  jr          $ra
    ctx->pc = 0x21E194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E194u;
        // 0x21e198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E19Cu;
    // 0x21e19c: 0x0  nop
    ctx->pc = 0x21e19cu;
    // NOP
    // 0x21e1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e1a4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e1a8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21e1a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21e1ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e1b0: 0xc087884  jal         func_21E210
    ctx->pc = 0x21E1B0u;
    SET_GPR_U32(ctx, 31, 0x21E1B8u);
    ctx->pc = 0x21E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1B0u;
    // 0x21e1b4: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E210u, 0x21E1B0u, 0x21E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1B8u;
label_21e1b8:
    // 0x21e1b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e1bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e1bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x21E1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1C0u;
        // 0x21e1c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E1C8u;
    // 0x21e1c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e1cc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21e1ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21e1d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e1d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e1d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21e1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21e1dc: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21e1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e1e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21e1e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1e4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e1e8: 0xc087884  jal         func_21E210
    ctx->pc = 0x21E1E8u;
    SET_GPR_U32(ctx, 31, 0x21E1F0u);
    ctx->pc = 0x21E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1E8u;
    // 0x21e1ec: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E210u, 0x21E1E8u, 0x21E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1F0u;
label_21e1f0:
    // 0x21e1f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21e1f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e1f8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x21e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21e1fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e1fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e204: 0x3e00008  jr          $ra
    ctx->pc = 0x21E204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E204u;
        // 0x21e208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E20Cu;
    // 0x21e20c: 0x0  nop
    ctx->pc = 0x21e20cu;
    // NOP
    if (ctx->pc == 0x21e20cu) { ctx->pc = 0x21e210u; }
}
