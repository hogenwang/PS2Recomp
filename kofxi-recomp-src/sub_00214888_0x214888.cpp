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

// Function: sub_00214888
// Address: 0x214888 - 0x214a98
void sub_00214888_0x214888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214888_0x214888");
#endif

    switch (ctx->pc) {
        case 0x2148a4u: goto label_2148a4;
        case 0x2148b4u: goto label_2148b4;
        case 0x2148c4u: goto label_2148c4;
        case 0x2148d4u: goto label_2148d4;
        case 0x2148e4u: goto label_2148e4;
        case 0x21494cu: goto label_21494c;
        case 0x214960u: goto label_214960;
        case 0x214974u: goto label_214974;
        case 0x214988u: goto label_214988;
        case 0x21499cu: goto label_21499c;
        case 0x2149acu: goto label_2149ac;
        case 0x214a14u: goto label_214a14;
        case 0x214a28u: goto label_214a28;
        case 0x214a3cu: goto label_214a3c;
        case 0x214a50u: goto label_214a50;
        case 0x214a64u: goto label_214a64;
        case 0x214a6cu: goto label_214a6c;
        default: break;
    }

    ctx->pc = 0x214888u;

label_214888:
    // 0x214888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21488c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214890: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x214890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x214894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214898: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x214898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21489c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21489Cu;
    SET_GPR_U32(ctx, 31, 0x2148A4u);
    ctx->pc = 0x2148A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21489Cu;
    // 0x2148a0: 0x24840938  addiu       $a0, $a0, 0x938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21489Cu, 0x2148A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148A4u;
label_2148a4:
    // 0x2148a4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2148a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2148a8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2148a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2148ac: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2148ACu;
    SET_GPR_U32(ctx, 31, 0x2148B4u);
    ctx->pc = 0x2148B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148ACu;
    // 0x2148b0: 0x24840928  addiu       $a0, $a0, 0x928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2148ACu, 0x2148B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148B4u;
label_2148b4:
    // 0x2148b4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2148b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2148b8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2148b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2148bc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2148BCu;
    SET_GPR_U32(ctx, 31, 0x2148C4u);
    ctx->pc = 0x2148C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148BCu;
    // 0x2148c0: 0x24840958  addiu       $a0, $a0, 0x958 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2148BCu, 0x2148C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148C4u;
label_2148c4:
    // 0x2148c4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2148c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2148c8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2148c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2148cc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2148CCu;
    SET_GPR_U32(ctx, 31, 0x2148D4u);
    ctx->pc = 0x2148D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148CCu;
    // 0x2148d0: 0x248408d8  addiu       $a0, $a0, 0x8D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2148CCu, 0x2148D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148D4u;
label_2148d4:
    // 0x2148d4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2148d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2148d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2148d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2148dc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2148DCu;
    SET_GPR_U32(ctx, 31, 0x2148E4u);
    ctx->pc = 0x2148E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148DCu;
    // 0x2148e0: 0x248408e8  addiu       $a0, $a0, 0x8E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2148DCu, 0x2148E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148E4u;
label_2148e4:
    // 0x2148e4: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x2148e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2148e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2148e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2148ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2148f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2148f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2148f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2148f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2148f8: 0x248408f8  addiu       $a0, $a0, 0x8F8
    ctx->pc = 0x2148f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2296));
    // 0x2148fc: 0x8043e52  j           func_10F948
    ctx->pc = 0x2148FCu;
    ctx->pc = 0x214900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148FCu;
    // 0x214900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x214904u;
    // 0x214904: 0x0  nop
    ctx->pc = 0x214904u;
    // NOP
    // 0x214908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21490c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21490cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x214910: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x214910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x214914: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x214914u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x214918: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21491c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21491cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214920: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214924: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x214924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214928: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21492c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21492cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214930: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x214930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x214934: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x214934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214938: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21493c: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x21493cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214940: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x214940u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214944: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214944u;
    SET_GPR_U32(ctx, 31, 0x21494Cu);
    ctx->pc = 0x214948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214944u;
    // 0x214948: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x214944u, 0x21494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21494Cu;
label_21494c:
    // 0x21494c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21494cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214954: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214958: 0xc08449a  jal         func_211268
    ctx->pc = 0x214958u;
    SET_GPR_U32(ctx, 31, 0x214960u);
    ctx->pc = 0x21495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214958u;
    // 0x21495c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x214958u, 0x214960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214960u;
label_214960:
    // 0x214960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214968: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x214968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21496c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21496Cu;
    SET_GPR_U32(ctx, 31, 0x214974u);
    ctx->pc = 0x214970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21496Cu;
    // 0x214970: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21496Cu, 0x214974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214974u;
label_214974:
    // 0x214974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214978: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21497c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21497cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214980: 0xc0844dc  jal         func_211370
    ctx->pc = 0x214980u;
    SET_GPR_U32(ctx, 31, 0x214988u);
    ctx->pc = 0x214984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214980u;
    // 0x214984: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x214980u, 0x214988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214988u;
label_214988:
    // 0x214988: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21498c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21498cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214994: 0xc08449a  jal         func_211268
    ctx->pc = 0x214994u;
    SET_GPR_U32(ctx, 31, 0x21499Cu);
    ctx->pc = 0x214998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214994u;
    // 0x214998: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211268u, 0x214994u, 0x21499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21499Cu;
label_21499c:
    // 0x21499c: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21499cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2149a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2149a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149a4: 0xc085222  jal         func_214888
    ctx->pc = 0x2149A4u;
    SET_GPR_U32(ctx, 31, 0x2149ACu);
    ctx->pc = 0x2149A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2149A4u;
    // 0x2149a8: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214888u;
    goto label_214888;
    ctx->pc = 0x2149ACu;
label_2149ac:
    // 0x2149ac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2149acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2149b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2149b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2149b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2149b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2149b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2149bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2149bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2149c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2149c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2149c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2149c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2149c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2149C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2149CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149C8u;
        // 0x2149cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2149C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2149D0u;
    // 0x2149d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2149d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2149d4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2149d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2149d8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2149d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2149dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2149dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2149e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2149e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2149e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2149e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2149e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2149e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2149ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2149f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2149f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2149f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2149f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2149f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2149fc: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2149fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x214a00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214a00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a04: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x214a04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214a08: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x214a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x214a0c: 0xc084612  jal         func_211848
    ctx->pc = 0x214A0Cu;
    SET_GPR_U32(ctx, 31, 0x214A14u);
    ctx->pc = 0x214A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A0Cu;
    // 0x214a10: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x214A0Cu, 0x214A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A14u;
label_214a14:
    // 0x214a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a1c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a20: 0xc0845c2  jal         func_211708
    ctx->pc = 0x214A20u;
    SET_GPR_U32(ctx, 31, 0x214A28u);
    ctx->pc = 0x214A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A20u;
    // 0x214a24: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x214A20u, 0x214A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A28u;
label_214a28:
    // 0x214a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214a30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a34: 0xc084612  jal         func_211848
    ctx->pc = 0x214A34u;
    SET_GPR_U32(ctx, 31, 0x214A3Cu);
    ctx->pc = 0x214A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A34u;
    // 0x214a38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x214A34u, 0x214A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A3Cu;
label_214a3c:
    // 0x214a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a48: 0xc084612  jal         func_211848
    ctx->pc = 0x214A48u;
    SET_GPR_U32(ctx, 31, 0x214A50u);
    ctx->pc = 0x214A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A48u;
    // 0x214a4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x214A48u, 0x214A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A50u;
label_214a50:
    // 0x214a50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x214a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a5c: 0xc0845c2  jal         func_211708
    ctx->pc = 0x214A5Cu;
    SET_GPR_U32(ctx, 31, 0x214A64u);
    ctx->pc = 0x214A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A5Cu;
    // 0x214a60: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211708u, 0x214A5Cu, 0x214A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214A64u;
label_214a64:
    // 0x214a64: 0xc085222  jal         func_214888
    ctx->pc = 0x214A64u;
    SET_GPR_U32(ctx, 31, 0x214A6Cu);
    ctx->pc = 0x214A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214A64u;
    // 0x214a68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214888u;
    goto label_214888;
    ctx->pc = 0x214A6Cu;
label_214a6c:
    // 0x214a6c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x214a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x214a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214a74: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x214a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x214a78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214a7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214a80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214a80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214a84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x214a84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214a88: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x214a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x214a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x214A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A8Cu;
        // 0x214a90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214A94u;
    // 0x214a94: 0x0  nop
    ctx->pc = 0x214a94u;
    // NOP
}
