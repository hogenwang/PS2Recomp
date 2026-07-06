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

// Function: sub_0021C880
// Address: 0x21c880 - 0x21cd30
void sub_0021C880_0x21c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C880_0x21c880");
#endif

    switch (ctx->pc) {
        case 0x21c89cu: goto label_21c89c;
        case 0x21c8acu: goto label_21c8ac;
        case 0x21c8bcu: goto label_21c8bc;
        case 0x21c8ccu: goto label_21c8cc;
        case 0x21c92cu: goto label_21c92c;
        case 0x21c940u: goto label_21c940;
        case 0x21c954u: goto label_21c954;
        case 0x21c968u: goto label_21c968;
        case 0x21c978u: goto label_21c978;
        case 0x21c9e4u: goto label_21c9e4;
        case 0x21c9f8u: goto label_21c9f8;
        case 0x21ca0cu: goto label_21ca0c;
        case 0x21ca20u: goto label_21ca20;
        case 0x21ca28u: goto label_21ca28;
        case 0x21cab4u: goto label_21cab4;
        case 0x21caccu: goto label_21cacc;
        case 0x21cb08u: goto label_21cb08;
        case 0x21cb18u: goto label_21cb18;
        case 0x21cb58u: goto label_21cb58;
        case 0x21cb68u: goto label_21cb68;
        case 0x21cbb4u: goto label_21cbb4;
        case 0x21cbf0u: goto label_21cbf0;
        case 0x21cc84u: goto label_21cc84;
        case 0x21cc9cu: goto label_21cc9c;
        case 0x21ccc8u: goto label_21ccc8;
        case 0x21ccd4u: goto label_21ccd4;
        case 0x21ccfcu: goto label_21ccfc;
        case 0x21cd04u: goto label_21cd04;
        default: break;
    }

    ctx->pc = 0x21c880u;

label_21c880:
    // 0x21c880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c888: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21c88c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c890: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c894: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C894u;
    SET_GPR_U32(ctx, 31, 0x21C89Cu);
    ctx->pc = 0x21C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C894u;
    // 0x21c898: 0x248417a0  addiu       $a0, $a0, 0x17A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21C894u, 0x21C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C89Cu;
label_21c89c:
    // 0x21c89c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c8a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c8a4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C8A4u;
    SET_GPR_U32(ctx, 31, 0x21C8ACu);
    ctx->pc = 0x21C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8A4u;
    // 0x21c8a8: 0x24841050  addiu       $a0, $a0, 0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21C8A4u, 0x21C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C8ACu;
label_21c8ac:
    // 0x21c8ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c8b0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x21c8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x21c8b4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C8B4u;
    SET_GPR_U32(ctx, 31, 0x21C8BCu);
    ctx->pc = 0x21C8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8B4u;
    // 0x21c8b8: 0x24841010  addiu       $a0, $a0, 0x1010 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21C8B4u, 0x21C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C8BCu;
label_21c8bc:
    // 0x21c8bc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x21c8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x21c8c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c8c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21C8C4u;
    SET_GPR_U32(ctx, 31, 0x21C8CCu);
    ctx->pc = 0x21C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8C4u;
    // 0x21c8c8: 0x248410e0  addiu       $a0, $a0, 0x10E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21C8C4u, 0x21C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C8CCu;
label_21c8cc:
    // 0x21c8cc: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x21c8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21c8d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21c8d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21c8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c8d8: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x21c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x21c8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c8e0: 0x8043e52  j           func_10F948
    ctx->pc = 0x21C8E0u;
    ctx->pc = 0x21C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8E0u;
    // 0x21c8e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21C8E8u;
    // 0x21c8e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21c8ec: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21c8ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21c8f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21c8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21c8f4: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21c8f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c8fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c900: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c904: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21c904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c908: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21c908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21c90c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21c90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c910: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21c914: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21c914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c918: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21c918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c91c: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21c91cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21c920: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x21c920u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c924: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21C924u;
    SET_GPR_U32(ctx, 31, 0x21C92Cu);
    ctx->pc = 0x21C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C924u;
    // 0x21c928: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21C924u, 0x21C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C92Cu;
label_21c92c:
    // 0x21c92c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c930: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c934: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21c934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c938: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21C938u;
    SET_GPR_U32(ctx, 31, 0x21C940u);
    ctx->pc = 0x21C93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C938u;
    // 0x21c93c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x21C938u, 0x21C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C940u;
label_21c940:
    // 0x21c940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c948: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21c948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c94c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21C94Cu;
    SET_GPR_U32(ctx, 31, 0x21C954u);
    ctx->pc = 0x21C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C94Cu;
    // 0x21c950: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21C94Cu, 0x21C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C954u;
label_21c954:
    // 0x21c954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c958: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21c958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c95c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21c95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c960: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21C960u;
    SET_GPR_U32(ctx, 31, 0x21C968u);
    ctx->pc = 0x21C964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C960u;
    // 0x21c964: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21C960u, 0x21C968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C968u;
label_21c968:
    // 0x21c968: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21c968u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c96c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21c96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c970: 0xc087220  jal         func_21C880
    ctx->pc = 0x21C970u;
    SET_GPR_U32(ctx, 31, 0x21C978u);
    ctx->pc = 0x21C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C970u;
    // 0x21c974: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C880u;
    goto label_21c880;
    ctx->pc = 0x21C978u;
label_21c978:
    // 0x21c978: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x21c978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c97c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c984: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c988: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21c988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c98c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21c98cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c990: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21c990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21c994: 0x3e00008  jr          $ra
    ctx->pc = 0x21C994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C994u;
        // 0x21c998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C99Cu;
    // 0x21c99c: 0x0  nop
    ctx->pc = 0x21c99cu;
    // NOP
    // 0x21c9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21c9a4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21c9a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21c9a8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21c9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21c9ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c9b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c9b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c9b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21c9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21c9c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21c9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21c9c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21c9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9cc: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21c9d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c9d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9d4: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21c9d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21c9d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21c9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c9dc: 0xc084612  jal         func_211848
    ctx->pc = 0x21C9DCu;
    SET_GPR_U32(ctx, 31, 0x21C9E4u);
    ctx->pc = 0x21C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C9DCu;
    // 0x21c9e0: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21C9DCu, 0x21C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C9E4u;
label_21c9e4:
    // 0x21c9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21c9ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9f0: 0xc084582  jal         func_211608
    ctx->pc = 0x21C9F0u;
    SET_GPR_U32(ctx, 31, 0x21C9F8u);
    ctx->pc = 0x21C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C9F0u;
    // 0x21c9f4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x21C9F0u, 0x21C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C9F8u;
label_21c9f8:
    // 0x21c9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c9fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21ca00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca04: 0xc084612  jal         func_211848
    ctx->pc = 0x21CA04u;
    SET_GPR_U32(ctx, 31, 0x21CA0Cu);
    ctx->pc = 0x21CA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA04u;
    // 0x21ca08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21CA04u, 0x21CA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA0Cu;
label_21ca0c:
    // 0x21ca0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21ca0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca10: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21ca10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca18: 0xc084612  jal         func_211848
    ctx->pc = 0x21CA18u;
    SET_GPR_U32(ctx, 31, 0x21CA20u);
    ctx->pc = 0x21CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA18u;
    // 0x21ca1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21CA18u, 0x21CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA20u;
label_21ca20:
    // 0x21ca20: 0xc087220  jal         func_21C880
    ctx->pc = 0x21CA20u;
    SET_GPR_U32(ctx, 31, 0x21CA28u);
    ctx->pc = 0x21CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA20u;
    // 0x21ca24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C880u;
    goto label_21c880;
    ctx->pc = 0x21CA28u;
label_21ca28:
    // 0x21ca28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21ca2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ca2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ca30: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x21ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21ca34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ca34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ca38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21ca38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ca3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21ca3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21ca40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21ca40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ca44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21ca44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21ca48: 0x3e00008  jr          $ra
    ctx->pc = 0x21CA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA48u;
        // 0x21ca4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CA50u;
    // 0x21ca50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21ca54: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21ca54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21ca58: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21ca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21ca5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21ca60: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x21ca60u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21ca64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21ca68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21ca6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21ca6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca70: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21ca74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21ca74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca78: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x21ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x21ca7c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21ca7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca80: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21ca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21ca84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21ca84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ca88: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x21ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x21ca8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21ca8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca90: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x21ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x21ca94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21ca94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca98: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x21ca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x21ca9c: 0xae80ab58  sw          $zero, -0x54A8($s4)
    ctx->pc = 0x21ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945624), GPR_U32(ctx, 0));
    // 0x21caa0: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x21caa0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21caa4: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21caa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21caa8: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x21caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x21caac: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21CAACu;
    SET_GPR_U32(ctx, 31, 0x21CAB4u);
    ctx->pc = 0x21CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAACu;
    // 0x21cab0: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21CAACu, 0x21CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAB4u;
label_21cab4:
    // 0x21cab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21cab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cab8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cabc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21cabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21cac0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21cac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cac4: 0xc084520  jal         func_211480
    ctx->pc = 0x21CAC4u;
    SET_GPR_U32(ctx, 31, 0x21CACCu);
    ctx->pc = 0x21CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAC4u;
    // 0x21cac8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211480u, 0x21CAC4u, 0x21CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CACCu;
label_21cacc:
    // 0x21cacc: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21caccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cad0: 0x29cf0006  slti        $t7, $t6, 0x6
    ctx->pc = 0x21cad0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21cad4: 0x11e00047  beqz        $t7, . + 4 + (0x47 << 2)
    ctx->pc = 0x21CAD4u;
    {
        const bool branch_taken_0x21cad4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAD4u;
        // 0x21cad8: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cad4) {
            ctx->pc = 0x21CBF4u;
            goto label_21cbf4;
        }
    }
    ctx->pc = 0x21CADCu;
    // 0x21cadc: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CADCu;
    {
        const bool branch_taken_0x21cadc = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21cadc) {
            ctx->pc = 0x21CAECu;
            goto label_21caec;
        }
    }
    ctx->pc = 0x21CAE4u;
    // 0x21cae4: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x21cae4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21cae8: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21caec:
    // 0x21caec: 0x19c0002c  blez        $t6, . + 4 + (0x2C << 2)
    ctx->pc = 0x21CAECu;
    {
        const bool branch_taken_0x21caec = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAECu;
        // 0x21caf0: 0x29cf0005  slti        $t7, $t6, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21caec) {
            ctx->pc = 0x21CBA0u;
            goto label_21cba0;
        }
    }
    ctx->pc = 0x21CAF4u;
    // 0x21caf4: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x21caf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21caf8: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x21caf8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cafc: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x21cafcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21cb00: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x21cb00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb04: 0xae80ab60  sw          $zero, -0x54A0($s4)
    ctx->pc = 0x21cb04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
label_21cb08:
    // 0x21cb08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21cb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21cb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cb10: 0xc0849ec  jal         func_2127B0
    ctx->pc = 0x21CB10u;
    SET_GPR_U32(ctx, 31, 0x21CB18u);
    ctx->pc = 0x21CB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB10u;
    // 0x21cb14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2127B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2127B0u, 0x21CB10u, 0x21CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB18u;
label_21cb18:
    // 0x21cb18: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x21CB18u;
    {
        const bool branch_taken_0x21cb18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB18u;
        // 0x21cb1c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb18) {
            ctx->pc = 0x21CBF4u;
            goto label_21cbf4;
        }
    }
    ctx->pc = 0x21CB20u;
    // 0x21cb20: 0x8e8fab60  lw          $t7, -0x54A0($s4)
    ctx->pc = 0x21cb20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945632)));
    // 0x21cb24: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x21CB24u;
    {
        const bool branch_taken_0x21cb24 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB24u;
        // 0x21cb28: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb24) {
            ctx->pc = 0x21CB8Cu;
            goto label_21cb8c;
        }
    }
    ctx->pc = 0x21CB2Cu;
    // 0x21cb2c: 0x8ecdab58  lw          $t5, -0x54A8($s6)
    ctx->pc = 0x21cb2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
    // 0x21cb30: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x21cb30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x21cb34: 0x11e0003c  beqz        $t7, . + 4 + (0x3C << 2)
    ctx->pc = 0x21CB34u;
    {
        const bool branch_taken_0x21cb34 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB34u;
        // 0x21cb38: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb34) {
            ctx->pc = 0x21CC28u;
            goto label_21cc28;
        }
    }
    ctx->pc = 0x21CB3Cu;
    // 0x21cb3c: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x21cb3cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21cb40: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x21cb40u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x21cb44: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x21cb44u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x21cb48: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x21cb48u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x21cb4c: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x21cb4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x21cb50: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x21cb50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21cb54: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x21cb54u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_21cb58:
    // 0x21cb58: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x21cb58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21cb5c: 0x51de000a  beql        $t6, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x21CB5Cu;
    {
        const bool branch_taken_0x21cb5c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 30));
        if (branch_taken_0x21cb5c) {
            ctx->pc = 0x21CB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CB5Cu;
            // 0x21cb60: 0xaee0ab58  sw          $zero, -0x54A8($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CB88u;
            goto label_21cb88;
        }
    }
    ctx->pc = 0x21CB64u;
    // 0x21cb64: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x21cb64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21cb68:
    // 0x21cb68: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21cb68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21cb6c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x21cb6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21cb70: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x21cb70u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cb74: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x21cb74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x21cb78: 0x0  nop
    ctx->pc = 0x21cb78u;
    // NOP
    // 0x21cb7c: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21CB7Cu;
    {
        const bool branch_taken_0x21cb7c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x21CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB7Cu;
        // 0x21cb80: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb7c) {
            ctx->pc = 0x21CB68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21cb68;
        }
    }
    ctx->pc = 0x21CB84u;
    // 0x21cb84: 0xaee0ab58  sw          $zero, -0x54A8($s7)
    ctx->pc = 0x21cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
label_21cb88:
    // 0x21cb88: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21cb88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21cb8c:
    // 0x21cb8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21cb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21cb90: 0x22e782a  slt         $t7, $s1, $t6
    ctx->pc = 0x21cb90u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x21cb94: 0x55e0ffdc  bnel        $t7, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x21CB94u;
    {
        const bool branch_taken_0x21cb94 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x21cb94) {
            ctx->pc = 0x21CB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CB94u;
            // 0x21cb98: 0xae80ab60  sw          $zero, -0x54A0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21cb08;
        }
    }
    ctx->pc = 0x21CB9Cu;
    // 0x21cb9c: 0x29cf0005  slti        $t7, $t6, 0x5
    ctx->pc = 0x21cb9cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)5) ? 1 : 0);
label_21cba0:
    // 0x21cba0: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x21CBA0u;
    {
        const bool branch_taken_0x21cba0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBA0u;
        // 0x21cba4: 0x1c0882d  daddu       $s1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cba0) {
            ctx->pc = 0x21CBD8u;
            goto label_21cbd8;
        }
    }
    ctx->pc = 0x21CBA8u;
    // 0x21cba8: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x21cba8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x21cbac: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x21cbacu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21cbb0: 0x8d8eab58  lw          $t6, -0x54A8($t4)
    ctx->pc = 0x21cbb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294945624)));
label_21cbb4:
    // 0x21cbb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21cbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21cbb8: 0x25ad0330  addiu       $t5, $t5, 0x330
    ctx->pc = 0x21cbb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 816));
    // 0x21cbbc: 0x2a2f0005  slti        $t7, $s1, 0x5
    ctx->pc = 0x21cbbcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x21cbc0: 0x0  nop
    ctx->pc = 0x21cbc0u;
    // NOP
    // 0x21cbc4: 0x0  nop
    ctx->pc = 0x21cbc4u;
    // NOP
    // 0x21cbc8: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21CBC8u;
    {
        const bool branch_taken_0x21cbc8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBC8u;
        // 0x21cbcc: 0x25ce0330  addiu       $t6, $t6, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cbc8) {
            ctx->pc = 0x21CBB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21cbb4;
        }
    }
    ctx->pc = 0x21CBD0u;
    // 0x21cbd0: 0xad8eab58  sw          $t6, -0x54A8($t4)
    ctx->pc = 0x21cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294945624), GPR_U32(ctx, 14));
    // 0x21cbd4: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x21cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_21cbd8:
    // 0x21cbd8: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x21cbd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21cbdc: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21cbdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cbe0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x21cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21cbe4: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21cbe8: 0xc08734c  jal         func_21CD30
    ctx->pc = 0x21CBE8u;
    SET_GPR_U32(ctx, 31, 0x21CBF0u);
    ctx->pc = 0x21CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBE8u;
    // 0x21cbec: 0x2afa823  subu        $s5, $s5, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CD30u, 0x21CBE8u, 0x21CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBF0u;
label_21cbf0:
    // 0x21cbf0: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x21cbf0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21cbf4:
    // 0x21cbf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21cbf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cbf8: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x21cbf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cbfc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21cbfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21cc00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21cc00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cc04: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21cc04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21cc08: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21cc08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cc0c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21cc0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21cc10: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x21cc10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21cc14: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x21cc14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21cc18: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x21cc18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21cc1c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x21cc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21cc20: 0x3e00008  jr          $ra
    ctx->pc = 0x21CC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC20u;
        // 0x21cc24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CC28u;
label_21cc28:
    // 0x21cc28: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x21CC28u;
    {
        const bool branch_taken_0x21cc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC28u;
        // 0x21cc2c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc28) {
            ctx->pc = 0x21CB58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21cb58;
        }
    }
    ctx->pc = 0x21CC30u;
    // 0x21cc30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21cc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21cc34: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21cc34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cc38: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21cc3c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21cc3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21cc40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21cc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21cc44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21cc48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21cc48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc4c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21cc50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21cc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21cc54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21cc58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21cc58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc5c: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21cc60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21cc60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc64: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21cc68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21cc68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc6c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21cc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21cc70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21cc70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc74: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21cc78: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x21cc78u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21cc7c: 0xc084612  jal         func_211848
    ctx->pc = 0x21CC7Cu;
    SET_GPR_U32(ctx, 31, 0x21CC84u);
    ctx->pc = 0x21CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CC7Cu;
    // 0x21cc80: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21CC7Cu, 0x21CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC84u;
label_21cc84:
    // 0x21cc84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21cc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21cc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc8c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21cc90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21cc90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc94: 0xc084654  jal         func_211950
    ctx->pc = 0x21CC94u;
    SET_GPR_U32(ctx, 31, 0x21CC9Cu);
    ctx->pc = 0x21CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CC94u;
    // 0x21cc98: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211950u, 0x21CC94u, 0x21CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC9Cu;
label_21cc9c:
    // 0x21cc9c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21cc9cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cca0: 0x29cf0006  slti        $t7, $t6, 0x6
    ctx->pc = 0x21cca0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21cca4: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x21CCA4u;
    {
        const bool branch_taken_0x21cca4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCA4u;
        // 0x21cca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cca4) {
            ctx->pc = 0x21CD04u;
            goto label_21cd04;
        }
    }
    ctx->pc = 0x21CCACu;
    // 0x21ccac: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CCACu;
    {
        const bool branch_taken_0x21ccac = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21ccac) {
            ctx->pc = 0x21CCBCu;
            goto label_21ccbc;
        }
    }
    ctx->pc = 0x21CCB4u;
    // 0x21ccb4: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x21ccb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21ccb8: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21ccbc:
    // 0x21ccbc: 0x19c0000c  blez        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x21CCBCu;
    {
        const bool branch_taken_0x21ccbc = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCBCu;
        // 0x21ccc0: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccbc) {
            ctx->pc = 0x21CCF0u;
            goto label_21ccf0;
        }
    }
    ctx->pc = 0x21CCC4u;
    // 0x21ccc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ccc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21ccc8:
    // 0x21ccc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21ccc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cccc: 0xc084a6a  jal         func_2129A8
    ctx->pc = 0x21CCCCu;
    SET_GPR_U32(ctx, 31, 0x21CCD4u);
    ctx->pc = 0x21CCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CCCCu;
    // 0x21ccd0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129A8u, 0x21CCCCu, 0x21CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CCD4u;
label_21ccd4:
    // 0x21ccd4: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21CCD4u;
    {
        const bool branch_taken_0x21ccd4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCD4u;
        // 0x21ccd8: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccd4) {
            ctx->pc = 0x21CD28u;
            goto label_21cd28;
        }
    }
    ctx->pc = 0x21CCDCu;
    // 0x21ccdc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21ccdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21cce0: 0x22f782a  slt         $t7, $s1, $t7
    ctx->pc = 0x21cce0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x21cce4: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21CCE4u;
    {
        const bool branch_taken_0x21cce4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCE4u;
        // 0x21cce8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cce4) {
            ctx->pc = 0x21CCC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ccc8;
        }
    }
    ctx->pc = 0x21CCECu;
    // 0x21ccec: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21ccecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21ccf0:
    // 0x21ccf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21ccf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ccf4: 0xc08734c  jal         func_21CD30
    ctx->pc = 0x21CCF4u;
    SET_GPR_U32(ctx, 31, 0x21CCFCu);
    ctx->pc = 0x21CCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CCF4u;
    // 0x21ccf8: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CD30u, 0x21CCF4u, 0x21CCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CCFCu;
label_21ccfc:
    // 0x21ccfc: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x21ccfcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21cd00: 0x1f41023  subu        $v0, $t7, $s4
    ctx->pc = 0x21cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_21cd04:
    // 0x21cd04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21cd04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cd08: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21cd08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21cd0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21cd0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cd10: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21cd10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21cd14: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21cd14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cd18: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21cd18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21cd1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21cd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21cd20: 0x3e00008  jr          $ra
    ctx->pc = 0x21CD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD20u;
        // 0x21cd24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CD28u;
label_21cd28:
    // 0x21cd28: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x21CD28u;
    {
        const bool branch_taken_0x21cd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD28u;
        // 0x21cd2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd28) {
            ctx->pc = 0x21CD04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21cd04;
        }
    }
    ctx->pc = 0x21CD30u;
}
