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

// Function: sub_00213910
// Address: 0x213910 - 0x213a38
void sub_00213910_0x213910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213910_0x213910");
#endif

    switch (ctx->pc) {
        case 0x21394cu: goto label_21394c;
        case 0x213960u: goto label_213960;
        case 0x213974u: goto label_213974;
        case 0x213988u: goto label_213988;
        case 0x21399cu: goto label_21399c;
        case 0x2139b0u: goto label_2139b0;
        case 0x2139c4u: goto label_2139c4;
        case 0x2139d8u: goto label_2139d8;
        case 0x2139ecu: goto label_2139ec;
        case 0x213a00u: goto label_213a00;
        case 0x213a10u: goto label_213a10;
        default: break;
    }

    ctx->pc = 0x213910u;

    // 0x213910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213914: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x213914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x213918: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21391c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213920: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213924: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x213924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x213928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21392c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21392cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213930: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x213930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x213934: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x213934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213938: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21393c: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21393cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x213940: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x213940u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x213944: 0xc0844dc  jal         func_211370
    ctx->pc = 0x213944u;
    SET_GPR_U32(ctx, 31, 0x21394Cu);
    ctx->pc = 0x213948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213944u;
    // 0x213948: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x213944u, 0x21394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21394Cu;
label_21394c:
    // 0x21394c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213954: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213958: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x213958u;
    SET_GPR_U32(ctx, 31, 0x213960u);
    ctx->pc = 0x21395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213958u;
    // 0x21395c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x213958u, 0x213960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213960u;
label_213960:
    // 0x213960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213968: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21396c: 0xc08449a  jal         func_211268
    ctx->pc = 0x21396Cu;
    SET_GPR_U32(ctx, 31, 0x213974u);
    ctx->pc = 0x213970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21396Cu;
    // 0x213970: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x21396Cu, 0x213974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213974u;
label_213974:
    // 0x213974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213978: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x213978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21397c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21397cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213980: 0xc0844dc  jal         func_211370
    ctx->pc = 0x213980u;
    SET_GPR_U32(ctx, 31, 0x213988u);
    ctx->pc = 0x213984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213980u;
    // 0x213984: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x213980u, 0x213988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213988u;
label_213988:
    // 0x213988: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x213988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21398c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21398cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213990: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x213990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213994: 0xc0844dc  jal         func_211370
    ctx->pc = 0x213994u;
    SET_GPR_U32(ctx, 31, 0x21399Cu);
    ctx->pc = 0x213998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213994u;
    // 0x213998: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x213994u, 0x21399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21399Cu;
label_21399c:
    // 0x21399c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21399cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2139a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2139a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139a8: 0xc08449a  jal         func_211268
    ctx->pc = 0x2139A8u;
    SET_GPR_U32(ctx, 31, 0x2139B0u);
    ctx->pc = 0x2139ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139A8u;
    // 0x2139ac: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x2139A8u, 0x2139B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139B0u;
label_2139b0:
    // 0x2139b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2139b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2139b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2139b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139bc: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x2139BCu;
    SET_GPR_U32(ctx, 31, 0x2139C4u);
    ctx->pc = 0x2139C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139BCu;
    // 0x2139c0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x2139BCu, 0x2139C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139C4u;
label_2139c4:
    // 0x2139c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2139c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2139c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2139ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139d0: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2139D0u;
    SET_GPR_U32(ctx, 31, 0x2139D8u);
    ctx->pc = 0x2139D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139D0u;
    // 0x2139d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2139D0u, 0x2139D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139D8u;
label_2139d8:
    // 0x2139d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2139d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2139dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2139e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139e4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x2139E4u;
    SET_GPR_U32(ctx, 31, 0x2139ECu);
    ctx->pc = 0x2139E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139E4u;
    // 0x2139e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x2139E4u, 0x2139ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139ECu;
label_2139ec:
    // 0x2139ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2139ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2139f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2139f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2139f8: 0xc08449a  jal         func_211268
    ctx->pc = 0x2139F8u;
    SET_GPR_U32(ctx, 31, 0x213A00u);
    ctx->pc = 0x2139FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2139F8u;
    // 0x2139fc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x2139F8u, 0x213A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A00u;
label_213a00:
    // 0x213a00: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x213a00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213a04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x213a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a08: 0xc084e10  jal         func_213840
    ctx->pc = 0x213A08u;
    SET_GPR_U32(ctx, 31, 0x213A10u);
    ctx->pc = 0x213A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213A08u;
    // 0x213a0c: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213840u, 0x213A08u, 0x213A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213A10u;
label_213a10:
    // 0x213a10: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x213a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213a18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213a1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213a1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213a20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x213a20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213a24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x213a24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213a28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x213a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x213a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x213A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A2Cu;
        // 0x213a30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213A34u;
    // 0x213a34: 0x0  nop
    ctx->pc = 0x213a34u;
    // NOP
}
