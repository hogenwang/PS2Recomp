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

// Function: sub_002183A0
// Address: 0x2183a0 - 0x218508
void sub_002183A0_0x2183a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002183A0_0x2183a0");
#endif

    switch (ctx->pc) {
        case 0x2183bcu: goto label_2183bc;
        case 0x2183ccu: goto label_2183cc;
        case 0x218434u: goto label_218434;
        case 0x218448u: goto label_218448;
        case 0x218458u: goto label_218458;
        case 0x2184c4u: goto label_2184c4;
        case 0x2184d8u: goto label_2184d8;
        case 0x2184e0u: goto label_2184e0;
        default: break;
    }

    ctx->pc = 0x2183a0u;

label_2183a0:
    // 0x2183a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2183a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2183a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2183a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2183a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2183a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2183ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2183acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2183b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2183b4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2183B4u;
    SET_GPR_U32(ctx, 31, 0x2183BCu);
    ctx->pc = 0x2183B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183B4u;
    // 0x2183b8: 0x24841030  addiu       $a0, $a0, 0x1030 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2183B4u, 0x2183BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183BCu;
label_2183bc:
    // 0x2183bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2183bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2183c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2183c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2183c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2183C4u;
    SET_GPR_U32(ctx, 31, 0x2183CCu);
    ctx->pc = 0x2183C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183C4u;
    // 0x2183c8: 0x24841050  addiu       $a0, $a0, 0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2183C4u, 0x2183CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183CCu;
label_2183cc:
    // 0x2183cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2183ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2183d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2183d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2183d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2183d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2183d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2183dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2183dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2183e0: 0x24841020  addiu       $a0, $a0, 0x1020
    ctx->pc = 0x2183e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4128));
    // 0x2183e4: 0x8043e52  j           func_10F948
    ctx->pc = 0x2183E4u;
    ctx->pc = 0x2183E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183E4u;
    // 0x2183e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2183ECu;
    // 0x2183ec: 0x0  nop
    ctx->pc = 0x2183ecu;
    // NOP
    // 0x2183f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2183f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2183f4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2183f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2183f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2183f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2183fc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2183fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x218400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218404: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x218404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218408: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x218408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21840c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21840cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218410: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218418: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x218418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21841c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21841cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218420: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x218420u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x218424: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x218424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x218428: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x218428u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21842c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21842Cu;
    SET_GPR_U32(ctx, 31, 0x218434u);
    ctx->pc = 0x218430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21842Cu;
    // 0x218430: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21842Cu, 0x218434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218434u;
label_218434:
    // 0x218434: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x218434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218438: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21843c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218440: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x218440u;
    SET_GPR_U32(ctx, 31, 0x218448u);
    ctx->pc = 0x218444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218440u;
    // 0x218444: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x218440u, 0x218448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218448u;
label_218448:
    // 0x218448: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x218448u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21844c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21844cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218450: 0xc0860e8  jal         func_2183A0
    ctx->pc = 0x218450u;
    SET_GPR_U32(ctx, 31, 0x218458u);
    ctx->pc = 0x218454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218450u;
    // 0x218454: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2183A0u;
    goto label_2183a0;
    ctx->pc = 0x218458u;
label_218458:
    // 0x218458: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x218458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21845c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21845cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218460: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x218460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218464: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x218464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218468: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x218468u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21846c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21846cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218470: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218474: 0x3e00008  jr          $ra
    ctx->pc = 0x218474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218474u;
        // 0x218478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21847Cu;
    // 0x21847c: 0x0  nop
    ctx->pc = 0x21847cu;
    // NOP
    // 0x218480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218484: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x218484u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218488: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21848c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218494: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218498: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x218498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21849c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2184a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2184a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2184a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2184a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2184a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184ac: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2184acu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x2184b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2184b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184b4: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2184b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2184b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2184b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2184bc: 0xc084612  jal         func_211848
    ctx->pc = 0x2184BCu;
    SET_GPR_U32(ctx, 31, 0x2184C4u);
    ctx->pc = 0x2184C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184BCu;
    // 0x2184c0: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2184BCu, 0x2184C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184C4u;
label_2184c4:
    // 0x2184c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2184c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2184c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2184ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184d0: 0xc084582  jal         func_211608
    ctx->pc = 0x2184D0u;
    SET_GPR_U32(ctx, 31, 0x2184D8u);
    ctx->pc = 0x2184D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184D0u;
    // 0x2184d4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x2184D0u, 0x2184D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184D8u;
label_2184d8:
    // 0x2184d8: 0xc0860e8  jal         func_2183A0
    ctx->pc = 0x2184D8u;
    SET_GPR_U32(ctx, 31, 0x2184E0u);
    ctx->pc = 0x2184DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2184D8u;
    // 0x2184dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2183A0u;
    goto label_2183a0;
    ctx->pc = 0x2184E0u;
label_2184e0:
    // 0x2184e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2184e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2184e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2184e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2184e8: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2184e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2184ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2184ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2184f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2184f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2184f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2184f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2184f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2184f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2184fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2184fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218500: 0x3e00008  jr          $ra
    ctx->pc = 0x218500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218500u;
        // 0x218504: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218508u;
}
