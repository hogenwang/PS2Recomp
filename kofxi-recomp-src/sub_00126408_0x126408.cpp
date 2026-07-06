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

// Function: sub_00126408
// Address: 0x126408 - 0x1265f8
void sub_00126408_0x126408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126408_0x126408");
#endif

    switch (ctx->pc) {
        case 0x1264a8u: goto label_1264a8;
        case 0x1264b8u: goto label_1264b8;
        case 0x1264d0u: goto label_1264d0;
        case 0x1264e0u: goto label_1264e0;
        case 0x126554u: goto label_126554;
        case 0x12657cu: goto label_12657c;
        case 0x1265b4u: goto label_1265b4;
        case 0x1265bcu: goto label_1265bc;
        default: break;
    }

    ctx->pc = 0x126408u;

    // 0x126408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12640c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x12640cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126414: 0x3c0e0036  lui         $t6, 0x36
    ctx->pc = 0x126414u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)54 << 16));
    // 0x126418: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x126418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12641c: 0x8dc4bde8  lw          $a0, -0x4218($t6)
    ctx->pc = 0x12641cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294950376)));
    // 0x126420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126424: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x126424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126428: 0x804990c  j           func_126430
    ctx->pc = 0x126428u;
    ctx->pc = 0x12642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126428u;
    // 0x12642c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126430u;
    goto label_126430;
    ctx->pc = 0x126430u;
label_126430:
    // 0x126430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x126434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126438: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x126438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12643c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12643cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126444: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x126444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x126448: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x126448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12644c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12644cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x126450: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x126450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x126454: 0x2e2f0011  sltiu       $t7, $s1, 0x11
    ctx->pc = 0x126454u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x126458: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x126458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12645c: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12645Cu;
    {
        const bool branch_taken_0x12645c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12645Cu;
        // 0x126460: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12645c) {
            ctx->pc = 0x126488u;
            goto label_126488;
        }
    }
    ctx->pc = 0x126464u;
    // 0x126464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12646c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12646cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126470: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x126470u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126474: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x126474u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126478: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x126478u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12647c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12647cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126480: 0x8049a24  j           func_126890
    ctx->pc = 0x126480u;
    ctx->pc = 0x126484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126480u;
    // 0x126484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126890u;
    sub_00126890_0x126890(rdram, ctx, runtime); return;
    ctx->pc = 0x126488u;
label_126488:
    // 0x126488: 0x24c50013  addiu       $a1, $a2, 0x13
    ctx->pc = 0x126488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 19));
    // 0x12648c: 0x2e2f0010  sltiu       $t7, $s1, 0x10
    ctx->pc = 0x12648cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x126490: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x126490u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x126494: 0x2cad001f  sltiu       $t5, $a1, 0x1F
    ctx->pc = 0x126494u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x126498: 0x15a00055  bnez        $t5, . + 4 + (0x55 << 2)
    ctx->pc = 0x126498u;
    {
        const bool branch_taken_0x126498 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126498u;
        // 0x12649c: 0x1cf880b  movn        $s1, $t6, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126498) {
            ctx->pc = 0x1265F0u;
            goto label_1265f0;
        }
    }
    ctx->pc = 0x1264A0u;
    // 0x1264a0: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x1264a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1264a4: 0xafa024  and         $s4, $a1, $t7
    ctx->pc = 0x1264a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & GPR_U64(ctx, 15));
label_1264a8:
    // 0x1264a8: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x1264a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1264ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1264acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264b0: 0xc049a24  jal         func_126890
    ctx->pc = 0x1264B0u;
    SET_GPR_U32(ctx, 31, 0x1264B8u);
    ctx->pc = 0x1264B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1264B0u;
    // 0x1264b4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126890u, 0x1264B0u, 0x1264B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1264B8u;
label_1264b8:
    // 0x1264b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1264b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264bc: 0x12400040  beqz        $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x1264BCu;
    {
        const bool branch_taken_0x1264bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264BCu;
        // 0x1264c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264bc) {
            ctx->pc = 0x1265C0u;
            goto label_1265c0;
        }
    }
    ctx->pc = 0x1264C4u;
    // 0x1264c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1264c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264c8: 0xc049ce6  jal         func_127398
    ctx->pc = 0x1264C8u;
    SET_GPR_U32(ctx, 31, 0x1264D0u);
    ctx->pc = 0x1264CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1264C8u;
    // 0x1264cc: 0x2653fff8  addiu       $s3, $s2, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127398u, 0x1264C8u, 0x1264D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1264D0u;
label_1264d0:
    // 0x1264d0: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x1264d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1264d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1264d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264d8: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x1264D8u;
    SET_GPR_U32(ctx, 31, 0x1264E0u);
    ctx->pc = 0x1264DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1264D8u;
    // 0x1264dc: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x1264D8u, 0x1264E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1264E0u;
label_1264e0:
    // 0x1264e0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1264E0u;
    {
        const bool branch_taken_0x1264e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1264E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1264E0u;
        // 0x1264e4: 0x117823  negu        $t7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1264e0) {
            ctx->pc = 0x126554u;
            goto label_126554;
        }
    }
    ctx->pc = 0x1264E8u;
    // 0x1264e8: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x1264e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1264ec: 0x8e6d0004  lw          $t5, 0x4($s3)
    ctx->pc = 0x1264ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1264f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1264f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1264f4: 0x20f8024  and         $s0, $s0, $t7
    ctx->pc = 0x1264f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x1264f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1264f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1264fc: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x1264fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x126500: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x126500u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x126504: 0x2137023  subu        $t6, $s0, $s3
    ctx->pc = 0x126504u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x126508: 0x1af6824  and         $t5, $t5, $t7
    ctx->pc = 0x126508u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x12650c: 0x2117821  addu        $t7, $s0, $s1
    ctx->pc = 0x12650cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x126510: 0x29ce0010  slti        $t6, $t6, 0x10
    ctx->pc = 0x126510u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x126514: 0x1ee800b  movn        $s0, $t7, $t6
    ctx->pc = 0x126514u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
    // 0x126518: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12651c: 0x2136023  subu        $t4, $s0, $s3
    ctx->pc = 0x12651cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x126520: 0x1ac6823  subu        $t5, $t5, $t4
    ctx->pc = 0x126520u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x126524: 0x35ae0001  ori         $t6, $t5, 0x1
    ctx->pc = 0x126524u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1);
    // 0x126528: 0xae0e0004  sw          $t6, 0x4($s0)
    ctx->pc = 0x126528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 14));
    // 0x12652c: 0x20d6821  addu        $t5, $s0, $t5
    ctx->pc = 0x12652cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x126530: 0x8daf0004  lw          $t7, 0x4($t5)
    ctx->pc = 0x126530u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x126534: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x126534u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x126538: 0xadaf0004  sw          $t7, 0x4($t5)
    ctx->pc = 0x126538u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    // 0x12653c: 0x8e6e0004  lw          $t6, 0x4($s3)
    ctx->pc = 0x12653cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x126540: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x126540u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x126544: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x126544u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x126548: 0xae6e0004  sw          $t6, 0x4($s3)
    ctx->pc = 0x126548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 14));
    // 0x12654c: 0xc04943c  jal         func_1250F0
    ctx->pc = 0x12654Cu;
    SET_GPR_U32(ctx, 31, 0x126554u);
    ctx->pc = 0x126550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12654Cu;
    // 0x126550: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1250F0u, 0x12654Cu, 0x126554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126554u;
label_126554:
    // 0x126554: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x126554u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x126558: 0x240efffc  addiu       $t6, $zero, -0x4
    ctx->pc = 0x126558u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x12655c: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x12655cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x126560: 0x1f4682b  sltu        $t5, $t7, $s4
    ctx->pc = 0x126560u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x126564: 0x51a0001f  beql        $t5, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x126564u;
    {
        const bool branch_taken_0x126564 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x126564) {
            ctx->pc = 0x126568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126564u;
            // 0x126568: 0x1f47823  subu        $t7, $t7, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1265E4u;
            goto label_1265e4;
        }
    }
    ctx->pc = 0x12656Cu;
    // 0x12656c: 0x28f7823  subu        $t7, $s4, $t7
    ctx->pc = 0x12656cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
    // 0x126570: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x126570u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126574: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x126574u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x126578: 0xf682f  dsubu       $t5, $zero, $t7
    ctx->pc = 0x126578u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 15));
label_12657c:
    // 0x12657c: 0x29af0010  slti        $t7, $t5, 0x10
    ctx->pc = 0x12657cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x126580: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x126580u;
    {
        const bool branch_taken_0x126580 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126580u;
        // 0x126584: 0x35af0001  ori         $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126580) {
            ctx->pc = 0x1265B4u;
            goto label_1265b4;
        }
    }
    ctx->pc = 0x126588u;
    // 0x126588: 0x2747021  addu        $t6, $s3, $s4
    ctx->pc = 0x126588u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x12658c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12658cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x126590: 0x25c50008  addiu       $a1, $t6, 0x8
    ctx->pc = 0x126590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x126594: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x126594u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x126598: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x126598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12659c: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x12659cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
    // 0x1265a0: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1265a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1265a4: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x1265a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x1265a8: 0x1f47825  or          $t7, $t7, $s4
    ctx->pc = 0x1265a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 20));
    // 0x1265ac: 0xc04943c  jal         func_1250F0
    ctx->pc = 0x1265ACu;
    SET_GPR_U32(ctx, 31, 0x1265B4u);
    ctx->pc = 0x1265B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265ACu;
    // 0x1265b0: 0xae6f0004  sw          $t7, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1250F0u, 0x1265ACu, 0x1265B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265B4u;
label_1265b4:
    // 0x1265b4: 0xc049cfc  jal         func_1273F0
    ctx->pc = 0x1265B4u;
    SET_GPR_U32(ctx, 31, 0x1265BCu);
    ctx->pc = 0x1265B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265B4u;
    // 0x1265b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273F0u, 0x1265B4u, 0x1265BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265BCu;
label_1265bc:
    // 0x1265bc: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x1265bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1265c0:
    // 0x1265c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1265c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1265c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1265c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1265c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1265c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1265cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1265ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1265d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1265d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1265d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1265d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1265d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1265d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1265dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1265DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1265E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265DCu;
        // 0x1265e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1265DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1265E4u;
label_1265e4:
    // 0x1265e4: 0xf683c  dsll32      $t5, $t7, 0
    ctx->pc = 0x1265e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1265e8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1265E8u;
    {
        const bool branch_taken_0x1265e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1265ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265E8u;
        // 0x1265ec: 0xd683e  dsrl32      $t5, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265e8) {
            ctx->pc = 0x12657Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12657c;
        }
    }
    ctx->pc = 0x1265F0u;
label_1265f0:
    // 0x1265f0: 0x1000ffad  b           . + 4 + (-0x53 << 2)
    ctx->pc = 0x1265F0u;
    {
        const bool branch_taken_0x1265f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1265F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265F0u;
        // 0x1265f4: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1265f0) {
            ctx->pc = 0x1264A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1264a8;
        }
    }
    ctx->pc = 0x1265F8u;
}
