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

// Function: sub_00214790
// Address: 0x214790 - 0x214888
void sub_00214790_0x214790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214790_0x214790");
#endif

    switch (ctx->pc) {
        case 0x2147acu: goto label_2147ac;
        case 0x2147fcu: goto label_2147fc;
        case 0x21480cu: goto label_21480c;
        case 0x21485cu: goto label_21485c;
        case 0x214864u: goto label_214864;
        default: break;
    }

    ctx->pc = 0x214790u;

label_214790:
    // 0x214790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214798: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21479c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21479cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2147a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2147a4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2147A4u;
    SET_GPR_U32(ctx, 31, 0x2147ACu);
    ctx->pc = 0x2147A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2147A4u;
    // 0x2147a8: 0x24840908  addiu       $a0, $a0, 0x908 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2147A4u, 0x2147ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2147ACu;
label_2147ac:
    // 0x2147ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2147acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2147b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2147b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2147b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2147b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2147b8: 0x24840928  addiu       $a0, $a0, 0x928
    ctx->pc = 0x2147b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    // 0x2147bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2147bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2147c0: 0x8043e52  j           func_10F948
    ctx->pc = 0x2147C0u;
    ctx->pc = 0x2147C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2147C0u;
    // 0x2147c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2147C8u;
    // 0x2147c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2147c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2147cc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2147ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2147d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2147d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2147d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2147d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2147d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2147d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2147dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2147dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2147e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2147e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2147e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147e8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2147e8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2147ec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2147ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2147f0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x2147f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2147f4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2147F4u;
    SET_GPR_U32(ctx, 31, 0x2147FCu);
    ctx->pc = 0x2147F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2147F4u;
    // 0x2147f8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2147F4u, 0x2147FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2147FCu;
label_2147fc:
    // 0x2147fc: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2147fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x214800: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214804: 0xc0851e4  jal         func_214790
    ctx->pc = 0x214804u;
    SET_GPR_U32(ctx, 31, 0x21480Cu);
    ctx->pc = 0x214808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214804u;
    // 0x214808: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214790u;
    goto label_214790;
    ctx->pc = 0x21480Cu;
label_21480c:
    // 0x21480c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21480cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214818: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21481c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21481cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214820: 0x3e00008  jr          $ra
    ctx->pc = 0x214820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214820u;
        // 0x214824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214828u;
    // 0x214828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21482c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21482cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x214830: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x214830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x214834: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x214834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214838: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21483c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21483cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214840: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214848: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x214848u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21484c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21484cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214850: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x214850u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x214854: 0xc084612  jal         func_211848
    ctx->pc = 0x214854u;
    SET_GPR_U32(ctx, 31, 0x21485Cu);
    ctx->pc = 0x214858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214854u;
    // 0x214858: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x214854u, 0x21485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21485Cu;
label_21485c:
    // 0x21485c: 0xc0851e4  jal         func_214790
    ctx->pc = 0x21485Cu;
    SET_GPR_U32(ctx, 31, 0x214864u);
    ctx->pc = 0x214860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21485Cu;
    // 0x214860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214790u;
    goto label_214790;
    ctx->pc = 0x214864u;
label_214864:
    // 0x214864: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x214864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x214868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21486c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x21486cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x214870: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214878: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x214878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21487c: 0x3e00008  jr          $ra
    ctx->pc = 0x21487Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21487Cu;
        // 0x214880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21487Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214884u;
    // 0x214884: 0x0  nop
    ctx->pc = 0x214884u;
    // NOP
    if (ctx->pc == 0x214884u) { ctx->pc = 0x214888u; }
}
