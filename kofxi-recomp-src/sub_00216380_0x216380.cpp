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

// Function: sub_00216380
// Address: 0x216380 - 0x216478
void sub_00216380_0x216380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216380_0x216380");
#endif

    switch (ctx->pc) {
        case 0x21639cu: goto label_21639c;
        case 0x2163ecu: goto label_2163ec;
        case 0x2163fcu: goto label_2163fc;
        case 0x21644cu: goto label_21644c;
        case 0x216454u: goto label_216454;
        default: break;
    }

    ctx->pc = 0x216380u;

label_216380:
    // 0x216380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216388: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x216388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21638c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21638cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216390: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x216390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x216394: 0xc043e52  jal         func_10F948
    ctx->pc = 0x216394u;
    SET_GPR_U32(ctx, 31, 0x21639Cu);
    ctx->pc = 0x216398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216394u;
    // 0x216398: 0x24840cb8  addiu       $a0, $a0, 0xCB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x216394u, 0x21639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21639Cu;
label_21639c:
    // 0x21639c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21639cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2163a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2163a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2163a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2163a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2163a8: 0x24840928  addiu       $a0, $a0, 0x928
    ctx->pc = 0x2163a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    // 0x2163ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2163acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2163b0: 0x8043e52  j           func_10F948
    ctx->pc = 0x2163B0u;
    ctx->pc = 0x2163B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163B0u;
    // 0x2163b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2163B8u;
    // 0x2163b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2163b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2163bc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2163bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2163c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2163c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2163c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2163c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2163c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2163c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2163cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2163ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2163d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2163d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2163d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163d8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2163d8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2163dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2163dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2163e0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x2163e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2163e4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2163E4u;
    SET_GPR_U32(ctx, 31, 0x2163ECu);
    ctx->pc = 0x2163E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163E4u;
    // 0x2163e8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2163E4u, 0x2163ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163ECu;
label_2163ec:
    // 0x2163ec: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2163ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2163f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2163f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163f4: 0xc0858e0  jal         func_216380
    ctx->pc = 0x2163F4u;
    SET_GPR_U32(ctx, 31, 0x2163FCu);
    ctx->pc = 0x2163F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163F4u;
    // 0x2163f8: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216380u;
    goto label_216380;
    ctx->pc = 0x2163FCu;
label_2163fc:
    // 0x2163fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2163fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216408: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21640c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21640cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216410: 0x3e00008  jr          $ra
    ctx->pc = 0x216410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216410u;
        // 0x216414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216418u;
    // 0x216418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21641c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21641cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216420: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x216420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x216424: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x216424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216428: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21642c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21642cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x216430: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216438: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x216438u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21643c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21643cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216440: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x216440u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x216444: 0xc084612  jal         func_211848
    ctx->pc = 0x216444u;
    SET_GPR_U32(ctx, 31, 0x21644Cu);
    ctx->pc = 0x216448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216444u;
    // 0x216448: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x216444u, 0x21644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21644Cu;
label_21644c:
    // 0x21644c: 0xc0858e0  jal         func_216380
    ctx->pc = 0x21644Cu;
    SET_GPR_U32(ctx, 31, 0x216454u);
    ctx->pc = 0x216450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21644Cu;
    // 0x216450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216380u;
    goto label_216380;
    ctx->pc = 0x216454u;
label_216454:
    // 0x216454: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x216454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x216458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21645c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x21645cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x216460: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216468: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x216468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21646c: 0x3e00008  jr          $ra
    ctx->pc = 0x21646Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21646Cu;
        // 0x216470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21646Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216474u;
    // 0x216474: 0x0  nop
    ctx->pc = 0x216474u;
    // NOP
    if (ctx->pc == 0x216474u) { ctx->pc = 0x216478u; }
}
