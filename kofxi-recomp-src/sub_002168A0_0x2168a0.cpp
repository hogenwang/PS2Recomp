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

// Function: sub_002168A0
// Address: 0x2168a0 - 0x216a38
void sub_002168A0_0x2168a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002168A0_0x2168a0");
#endif

    switch (ctx->pc) {
        case 0x2168bcu: goto label_2168bc;
        case 0x2168ccu: goto label_2168cc;
        case 0x2168dcu: goto label_2168dc;
        case 0x21693cu: goto label_21693c;
        case 0x216950u: goto label_216950;
        case 0x216964u: goto label_216964;
        case 0x216974u: goto label_216974;
        case 0x2169dcu: goto label_2169dc;
        case 0x2169f0u: goto label_2169f0;
        case 0x216a04u: goto label_216a04;
        case 0x216a0cu: goto label_216a0c;
        default: break;
    }

    ctx->pc = 0x2168a0u;

label_2168a0:
    // 0x2168a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2168a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2168a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2168a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2168a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2168a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2168ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2168acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2168b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2168b4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2168B4u;
    SET_GPR_U32(ctx, 31, 0x2168BCu);
    ctx->pc = 0x2168B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168B4u;
    // 0x2168b8: 0x24840d68  addiu       $a0, $a0, 0xD68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2168B4u, 0x2168BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168BCu;
label_2168bc:
    // 0x2168bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2168bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2168c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2168c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2168c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2168C4u;
    SET_GPR_U32(ctx, 31, 0x2168CCu);
    ctx->pc = 0x2168C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168C4u;
    // 0x2168c8: 0x24840928  addiu       $a0, $a0, 0x928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2168C4u, 0x2168CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168CCu;
label_2168cc:
    // 0x2168cc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2168ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2168d0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2168d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2168d4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2168D4u;
    SET_GPR_U32(ctx, 31, 0x2168DCu);
    ctx->pc = 0x2168D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168D4u;
    // 0x2168d8: 0x24840868  addiu       $a0, $a0, 0x868 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2168D4u, 0x2168DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168DCu;
label_2168dc:
    // 0x2168dc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2168dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2168e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2168e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2168e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2168e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2168e8: 0x24840d88  addiu       $a0, $a0, 0xD88
    ctx->pc = 0x2168e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3464));
    // 0x2168ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2168ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2168f0: 0x8043e52  j           func_10F948
    ctx->pc = 0x2168F0u;
    ctx->pc = 0x2168F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168F0u;
    // 0x2168f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x2168F8u;
    // 0x2168f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2168f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2168fc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2168fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x216900: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x216900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x216904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21690c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21690cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x216910: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x216910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216914: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x216914u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x216918: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x216918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21691c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21691cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216920: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x216920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216924: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x216924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x216928: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21692c: 0x8cd20000  lw          $s2, 0x0($a2)
    ctx->pc = 0x21692cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x216930: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x216930u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216934: 0xc0844dc  jal         func_211370
    ctx->pc = 0x216934u;
    SET_GPR_U32(ctx, 31, 0x21693Cu);
    ctx->pc = 0x216938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216934u;
    // 0x216938: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x216934u, 0x21693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21693Cu;
label_21693c:
    // 0x21693c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21693cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216944: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216948: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x216948u;
    SET_GPR_U32(ctx, 31, 0x216950u);
    ctx->pc = 0x21694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216948u;
    // 0x21694c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x216948u, 0x216950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216950u;
label_216950:
    // 0x216950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216954: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x216954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x216958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21695c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21695Cu;
    SET_GPR_U32(ctx, 31, 0x216964u);
    ctx->pc = 0x216960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21695Cu;
    // 0x216960: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21695Cu, 0x216964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216964u;
label_216964:
    // 0x216964: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x216964u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216968: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x216968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21696c: 0xc085a28  jal         func_2168A0
    ctx->pc = 0x21696Cu;
    SET_GPR_U32(ctx, 31, 0x216974u);
    ctx->pc = 0x216970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21696Cu;
    // 0x216970: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2168A0u;
    goto label_2168a0;
    ctx->pc = 0x216974u;
label_216974:
    // 0x216974: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x216974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21697c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21697cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216980: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216980u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216984: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x216984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216988: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x216988u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21698c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21698cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216990: 0x3e00008  jr          $ra
    ctx->pc = 0x216990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216990u;
        // 0x216994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216998u;
    // 0x216998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21699c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21699cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2169a0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2169a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2169a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2169a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2169a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2169a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2169ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2169acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2169b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2169b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2169b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2169b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2169b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2169bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2169c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2169c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169c4: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2169c4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x2169c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2169c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169cc: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2169ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2169d0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2169d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2169d4: 0xc084612  jal         func_211848
    ctx->pc = 0x2169D4u;
    SET_GPR_U32(ctx, 31, 0x2169DCu);
    ctx->pc = 0x2169D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169D4u;
    // 0x2169d8: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2169D4u, 0x2169DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169DCu;
label_2169dc:
    // 0x2169dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2169dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2169e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2169e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169e8: 0xc084582  jal         func_211608
    ctx->pc = 0x2169E8u;
    SET_GPR_U32(ctx, 31, 0x2169F0u);
    ctx->pc = 0x2169ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169E8u;
    // 0x2169ec: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x2169E8u, 0x2169F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169F0u;
label_2169f0:
    // 0x2169f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2169f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2169f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2169f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169fc: 0xc084612  jal         func_211848
    ctx->pc = 0x2169FCu;
    SET_GPR_U32(ctx, 31, 0x216A04u);
    ctx->pc = 0x216A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169FCu;
    // 0x216a00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2169FCu, 0x216A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A04u;
label_216a04:
    // 0x216a04: 0xc085a28  jal         func_2168A0
    ctx->pc = 0x216A04u;
    SET_GPR_U32(ctx, 31, 0x216A0Cu);
    ctx->pc = 0x216A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A04u;
    // 0x216a08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2168A0u;
    goto label_2168a0;
    ctx->pc = 0x216A0Cu;
label_216a0c:
    // 0x216a0c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x216a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x216a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216a14: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x216a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x216a18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x216a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216a1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216a1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216a20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x216a20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216a24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x216a24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216a28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x216a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x216a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x216A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A2Cu;
        // 0x216a30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216A34u;
    // 0x216a34: 0x0  nop
    ctx->pc = 0x216a34u;
    // NOP
    if (ctx->pc == 0x216a34u) { ctx->pc = 0x216a38u; }
}
