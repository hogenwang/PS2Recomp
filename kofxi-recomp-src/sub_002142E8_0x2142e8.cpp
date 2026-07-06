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

// Function: sub_002142E8
// Address: 0x2142e8 - 0x214488
void sub_002142E8_0x2142e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002142E8_0x2142e8");
#endif

    switch (ctx->pc) {
        case 0x214304u: goto label_214304;
        case 0x214314u: goto label_214314;
        case 0x214328u: goto label_214328;
        case 0x21438cu: goto label_21438c;
        case 0x2143a0u: goto label_2143a0;
        case 0x2143b4u: goto label_2143b4;
        case 0x2143c4u: goto label_2143c4;
        case 0x21442cu: goto label_21442c;
        case 0x214440u: goto label_214440;
        case 0x214454u: goto label_214454;
        case 0x21445cu: goto label_21445c;
        default: break;
    }

    ctx->pc = 0x2142e8u;

label_2142e8:
    // 0x2142e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2142e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2142ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2142ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2142f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2142f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2142f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2142f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2142f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2142f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2142fc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2142FCu;
    SET_GPR_U32(ctx, 31, 0x214304u);
    ctx->pc = 0x214300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142FCu;
    // 0x214300: 0x24840838  addiu       $a0, $a0, 0x838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2142FCu, 0x214304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214304u;
label_214304:
    // 0x214304: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x214304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214308: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21430c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21430Cu;
    SET_GPR_U32(ctx, 31, 0x214314u);
    ctx->pc = 0x214310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21430Cu;
    // 0x214310: 0x24840858  addiu       $a0, $a0, 0x858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21430Cu, 0x214314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214314u;
label_214314:
    // 0x214314: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214318: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x214318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x21431c: 0x24840868  addiu       $a0, $a0, 0x868
    ctx->pc = 0x21431cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2152));
    // 0x214320: 0xc043e52  jal         func_10F948
    ctx->pc = 0x214320u;
    SET_GPR_U32(ctx, 31, 0x214328u);
    ctx->pc = 0x214324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214320u;
    // 0x214324: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x214320u, 0x214328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214328u;
label_214328:
    // 0x214328: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21432c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21432cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214330: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x214334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214338: 0x24840878  addiu       $a0, $a0, 0x878
    ctx->pc = 0x214338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2168));
    // 0x21433c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21433Cu;
    ctx->pc = 0x214340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21433Cu;
    // 0x214340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x214344u;
    // 0x214344: 0x0  nop
    ctx->pc = 0x214344u;
    // NOP
    // 0x214348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21434c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21434cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x214350: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x214350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x214354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214358: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21435c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21435cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214360: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x214360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214364: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x214364u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x214368: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x214368u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21436c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214370: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x214370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214374: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x214374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x214378: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21437c: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x21437cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214380: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x214380u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214384: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214384u;
    SET_GPR_U32(ctx, 31, 0x21438Cu);
    ctx->pc = 0x214388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214384u;
    // 0x214388: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x214384u, 0x21438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21438Cu;
label_21438c:
    // 0x21438c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21438cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214390: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x214390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214394: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214398: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x214398u;
    SET_GPR_U32(ctx, 31, 0x2143A0u);
    ctx->pc = 0x21439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214398u;
    // 0x21439c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x214398u, 0x2143A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2143A0u;
label_2143a0:
    // 0x2143a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2143a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2143a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2143a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143ac: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x2143ACu;
    SET_GPR_U32(ctx, 31, 0x2143B4u);
    ctx->pc = 0x2143B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2143ACu;
    // 0x2143b0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x2143ACu, 0x2143B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2143B4u;
label_2143b4:
    // 0x2143b4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2143b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2143b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2143b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143bc: 0xc0850ba  jal         func_2142E8
    ctx->pc = 0x2143BCu;
    SET_GPR_U32(ctx, 31, 0x2143C4u);
    ctx->pc = 0x2143C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2143BCu;
    // 0x2143c0: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2142E8u;
    goto label_2142e8;
    ctx->pc = 0x2143C4u;
label_2143c4:
    // 0x2143c4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2143c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2143c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2143cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2143ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2143d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2143d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2143d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2143d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2143d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2143d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2143dc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2143dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2143e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2143E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2143E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143E0u;
        // 0x2143e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2143E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2143E8u;
    // 0x2143e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2143e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2143ec: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2143ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2143f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2143f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2143f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2143f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2143f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2143f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2143fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2143fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214404: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214408: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x214408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21440c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21440cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x214410: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x214410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214414: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x214414u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x214418: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21441c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21441cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214420: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x214420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214424: 0xc084612  jal         func_211848
    ctx->pc = 0x214424u;
    SET_GPR_U32(ctx, 31, 0x21442Cu);
    ctx->pc = 0x214428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214424u;
    // 0x214428: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x214424u, 0x21442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21442Cu;
label_21442c:
    // 0x21442c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21442cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214430: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214434: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214438: 0xc084582  jal         func_211608
    ctx->pc = 0x214438u;
    SET_GPR_U32(ctx, 31, 0x214440u);
    ctx->pc = 0x21443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214438u;
    // 0x21443c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x214438u, 0x214440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214440u;
label_214440:
    // 0x214440: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214444: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21444c: 0xc084582  jal         func_211608
    ctx->pc = 0x21444Cu;
    SET_GPR_U32(ctx, 31, 0x214454u);
    ctx->pc = 0x214450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21444Cu;
    // 0x214450: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x21444Cu, 0x214454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214454u;
label_214454:
    // 0x214454: 0xc0850ba  jal         func_2142E8
    ctx->pc = 0x214454u;
    SET_GPR_U32(ctx, 31, 0x21445Cu);
    ctx->pc = 0x214458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214454u;
    // 0x214458: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2142E8u;
    goto label_2142e8;
    ctx->pc = 0x21445Cu;
label_21445c:
    // 0x21445c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x214460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214464: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x214464u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x214468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21446c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21446cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214470: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214470u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214474: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x214474u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214478: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x214478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21447c: 0x3e00008  jr          $ra
    ctx->pc = 0x21447Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21447Cu;
        // 0x214480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21447Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214484u;
    // 0x214484: 0x0  nop
    ctx->pc = 0x214484u;
    // NOP
}
