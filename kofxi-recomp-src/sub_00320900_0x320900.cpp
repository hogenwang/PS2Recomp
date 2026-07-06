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

// Function: sub_00320900
// Address: 0x320900 - 0x320d60
void sub_00320900_0x320900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320900_0x320900");
#endif

    switch (ctx->pc) {
        case 0x32092cu: goto label_32092c;
        case 0x320954u: goto label_320954;
        case 0x320984u: goto label_320984;
        case 0x3209ccu: goto label_3209cc;
        case 0x3209d4u: goto label_3209d4;
        case 0x3209dcu: goto label_3209dc;
        case 0x3209e4u: goto label_3209e4;
        case 0x3209ecu: goto label_3209ec;
        case 0x3209f4u: goto label_3209f4;
        case 0x3209fcu: goto label_3209fc;
        case 0x320a04u: goto label_320a04;
        case 0x320a0cu: goto label_320a0c;
        case 0x320a50u: goto label_320a50;
        case 0x320a58u: goto label_320a58;
        case 0x320a8cu: goto label_320a8c;
        case 0x320ad0u: goto label_320ad0;
        case 0x320ad8u: goto label_320ad8;
        case 0x320b04u: goto label_320b04;
        case 0x320b24u: goto label_320b24;
        case 0x320b34u: goto label_320b34;
        case 0x320b44u: goto label_320b44;
        case 0x320b64u: goto label_320b64;
        case 0x320b84u: goto label_320b84;
        case 0x320b8cu: goto label_320b8c;
        case 0x320bacu: goto label_320bac;
        case 0x320bd4u: goto label_320bd4;
        case 0x320bfcu: goto label_320bfc;
        case 0x320c24u: goto label_320c24;
        case 0x320c4cu: goto label_320c4c;
        case 0x320c78u: goto label_320c78;
        case 0x320ca8u: goto label_320ca8;
        case 0x320cccu: goto label_320ccc;
        case 0x320cf8u: goto label_320cf8;
        case 0x320d0cu: goto label_320d0c;
        case 0x320d20u: goto label_320d20;
        default: break;
    }

    ctx->pc = 0x320900u;

    // 0x320900: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x320900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x320904: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x320904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x320908: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x320908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32090c: 0x24a50c70  addiu       $a1, $a1, 0xC70
    ctx->pc = 0x32090cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3184));
    // 0x320910: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x320910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x320914: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x320914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x320918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x320918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32091c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x32091cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x320920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x320920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x320924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x320924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x320928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x320928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32092c:
    // 0x32092c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x32092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x320930: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x320930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x320934: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x320934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x320938: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x320938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x32093c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x32093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x320940: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x320940u;
    {
        const bool branch_taken_0x320940 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x320940) {
            ctx->pc = 0x32092Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32092c;
        }
    }
    ctx->pc = 0x320948u;
    // 0x320948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x320948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32094c: 0xc0c8e18  jal         func_323860
    ctx->pc = 0x32094Cu;
    SET_GPR_U32(ctx, 31, 0x320954u);
    ctx->pc = 0x320950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32094Cu;
    // 0x320950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323860u, 0x32094Cu, 0x320954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320954u;
label_320954:
    // 0x320954: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x320954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x320958: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x320958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32095c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32095Cu;
    {
        const bool branch_taken_0x32095c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32095c) {
            ctx->pc = 0x320984u;
            goto label_320984;
        }
    }
    ctx->pc = 0x320964u;
    // 0x320964: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x320964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x320968: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x320968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32096c: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x32096cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x320970: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x320970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x320974: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x320974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x320978: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x320978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x32097c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x32097Cu;
    SET_GPR_U32(ctx, 31, 0x320984u);
    ctx->pc = 0x320980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32097Cu;
    // 0x320980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x32097Cu, 0x320984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320984u;
label_320984:
    // 0x320984: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320988: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x32098c: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x32098cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x320990: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320994: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x320994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x320998: 0x904203e0  lbu         $v0, 0x3E0($v0)
    ctx->pc = 0x320998u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 992)));
    // 0x32099c: 0x2c41000e  sltiu       $at, $v0, 0xE
    ctx->pc = 0x32099cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x3209a0: 0x102000e4  beqz        $at, . + 4 + (0xE4 << 2)
    ctx->pc = 0x3209A0u;
    {
        const bool branch_taken_0x3209a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3209A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3209A0u;
        // 0x3209a4: 0xac640380  sw          $a0, 0x380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3209a0) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x3209A8u;
    // 0x3209a8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3209a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3209ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3209acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3209b0: 0x24633e30  addiu       $v1, $v1, 0x3E30
    ctx->pc = 0x3209b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15920));
    // 0x3209b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3209b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3209b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3209b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3209bc: 0x400008  jr          $v0
    ctx->pc = 0x3209BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3209C4u: goto label_3209c4;
            case 0x320AC8u: goto label_320ac8;
            case 0x320B5Cu: goto label_320b5c;
            case 0x320B7Cu: goto label_320b7c;
            case 0x320BA4u: goto label_320ba4;
            case 0x320BCCu: goto label_320bcc;
            case 0x320BF4u: goto label_320bf4;
            case 0x320C1Cu: goto label_320c1c;
            case 0x320C44u: goto label_320c44;
            case 0x320C6Cu: goto label_320c6c;
            case 0x320C98u: goto label_320c98;
            case 0x320CC0u: goto label_320cc0;
            case 0x320CECu: goto label_320cec;
            case 0x320D14u: goto label_320d14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3209BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3209C4u;
label_3209c4:
    // 0x3209c4: 0xc0c880c  jal         func_322030
    ctx->pc = 0x3209C4u;
    SET_GPR_U32(ctx, 31, 0x3209CCu);
    ctx->pc = 0x322030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322030u, 0x3209C4u, 0x3209CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209CCu;
label_3209cc:
    // 0x3209cc: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x3209CCu;
    SET_GPR_U32(ctx, 31, 0x3209D4u);
    ctx->pc = 0x322B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B60u, 0x3209CCu, 0x3209D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209D4u;
label_3209d4:
    // 0x3209d4: 0xc05fa14  jal         func_17E850
    ctx->pc = 0x3209D4u;
    SET_GPR_U32(ctx, 31, 0x3209DCu);
    ctx->pc = 0x17E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E850u, 0x3209D4u, 0x3209DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209DCu;
label_3209dc:
    // 0x3209dc: 0xc05f6e8  jal         func_17DBA0
    ctx->pc = 0x3209DCu;
    SET_GPR_U32(ctx, 31, 0x3209E4u);
    ctx->pc = 0x17DBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DBA0u, 0x3209DCu, 0x3209E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209E4u;
label_3209e4:
    // 0x3209e4: 0xc0570bc  jal         func_15C2F0
    ctx->pc = 0x3209E4u;
    SET_GPR_U32(ctx, 31, 0x3209ECu);
    ctx->pc = 0x15C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C2F0u, 0x3209E4u, 0x3209ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209ECu;
label_3209ec:
    // 0x3209ec: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x3209ECu;
    SET_GPR_U32(ctx, 31, 0x3209F4u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x3209ECu, 0x3209F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209F4u;
label_3209f4:
    // 0x3209f4: 0xc06350c  jal         func_18D430
    ctx->pc = 0x3209F4u;
    SET_GPR_U32(ctx, 31, 0x3209FCu);
    ctx->pc = 0x18D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D430u, 0x3209F4u, 0x3209FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3209FCu;
label_3209fc:
    // 0x3209fc: 0xc054250  jal         func_150940
    ctx->pc = 0x3209FCu;
    SET_GPR_U32(ctx, 31, 0x320A04u);
    ctx->pc = 0x150940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150940u, 0x3209FCu, 0x320A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A04u;
label_320a04:
    // 0x320a04: 0xc0c81b0  jal         func_3206C0
    ctx->pc = 0x320A04u;
    SET_GPR_U32(ctx, 31, 0x320A0Cu);
    ctx->pc = 0x3206C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3206C0u, 0x320A04u, 0x320A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A0Cu;
label_320a0c:
    // 0x320a0c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x320a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x320a10: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320a14: 0xa460f370  sh          $zero, -0xC90($v1)
    ctx->pc = 0x320a14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294964080), (uint16_t)GPR_U32(ctx, 0));
    // 0x320a18: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x320a18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x320a1c: 0xa040ced0  sb          $zero, -0x3130($v0)
    ctx->pc = 0x320a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294954704), (uint8_t)GPR_U32(ctx, 0));
    // 0x320a20: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320a24: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320a28: 0xa06003e8  sb          $zero, 0x3E8($v1)
    ctx->pc = 0x320a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1000), (uint8_t)GPR_U32(ctx, 0));
    // 0x320a2c: 0xa040d9a0  sb          $zero, -0x2660($v0)
    ctx->pc = 0x320a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957472), (uint8_t)GPR_U32(ctx, 0));
    // 0x320a30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320a34: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320a38: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x320a38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320a3c: 0xac430388  sw          $v1, 0x388($v0)
    ctx->pc = 0x320a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 904), GPR_U32(ctx, 3));
    // 0x320a40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x320a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320a44: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320a48: 0x2631db50  addiu       $s1, $s1, -0x24B0
    ctx->pc = 0x320a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957904));
    // 0x320a4c: 0xac400380  sw          $zero, 0x380($v0)
    ctx->pc = 0x320a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 0));
label_320a50:
    // 0x320a50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x320a50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320a54: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x320a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_320a58:
    // 0x320a58: 0x2722821  addu        $a1, $s3, $s2
    ctx->pc = 0x320a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x320a5c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320a60: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x320a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x320a64: 0x244203a0  addiu       $v0, $v0, 0x3A0
    ctx->pc = 0x320a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    // 0x320a68: 0x2603014c  addiu       $v1, $s0, 0x14C
    ctx->pc = 0x320a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
    // 0x320a6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x320a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x320a70: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x320a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x320a74: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320a78: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x320a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x320a7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x320a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x320a80: 0x9204014d  lbu         $a0, 0x14D($s0)
    ctx->pc = 0x320a80u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 333)));
    // 0x320a84: 0xc0c4494  jal         func_311250
    ctx->pc = 0x320A84u;
    SET_GPR_U32(ctx, 31, 0x320A8Cu);
    ctx->pc = 0x320A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320A84u;
    // 0x320a88: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311250u, 0x320A84u, 0x320A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A8Cu;
label_320a8c:
    // 0x320a8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x320a8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x320a90: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x320a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x320a94: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x320A94u;
    {
        const bool branch_taken_0x320a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A94u;
        // 0x320a98: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a94) {
            ctx->pc = 0x320A58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320a58;
        }
    }
    ctx->pc = 0x320A9Cu;
    // 0x320a9c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x320a9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x320aa0: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x320aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x320aa4: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x320aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x320aa8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x320AA8u;
    {
        const bool branch_taken_0x320aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AA8u;
        // 0x320aac: 0x26310248  addiu       $s1, $s1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320aa8) {
            ctx->pc = 0x320A50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_320a50;
        }
    }
    ctx->pc = 0x320AB0u;
    // 0x320ab0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320ab4: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320ab8: 0x906303e0  lbu         $v1, 0x3E0($v1)
    ctx->pc = 0x320ab8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 992)));
    // 0x320abc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320ac0: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x320AC0u;
    {
        const bool branch_taken_0x320ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AC0u;
        // 0x320ac4: 0xa04303e0  sb          $v1, 0x3E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ac0) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320AC8u;
label_320ac8:
    // 0x320ac8: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x320AC8u;
    SET_GPR_U32(ctx, 31, 0x320AD0u);
    ctx->pc = 0x1A0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C00u, 0x320AC8u, 0x320AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320AD0u;
label_320ad0:
    // 0x320ad0: 0xc0c81b4  jal         func_3206D0
    ctx->pc = 0x320AD0u;
    SET_GPR_U32(ctx, 31, 0x320AD8u);
    ctx->pc = 0x3206D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3206D0u, 0x320AD0u, 0x320AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320AD8u;
label_320ad8:
    // 0x320ad8: 0x50400097  beql        $v0, $zero, . + 4 + (0x97 << 2)
    ctx->pc = 0x320AD8u;
    {
        const bool branch_taken_0x320ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ad8) {
            ctx->pc = 0x320ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320AD8u;
            // 0x320adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320D38u;
            goto label_320d38;
        }
    }
    ctx->pc = 0x320AE0u;
    // 0x320ae0: 0x3c034026  lui         $v1, 0x4026
    ctx->pc = 0x320ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16422 << 16));
    // 0x320ae4: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x320ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x320ae8: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x320ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x320aec: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x320aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x320af0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x320af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x320af4: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x320af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x320af8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x320af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x320afc: 0xc0c8b00  jal         func_322C00
    ctx->pc = 0x320AFCu;
    SET_GPR_U32(ctx, 31, 0x320B04u);
    ctx->pc = 0x320B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320AFCu;
    // 0x320b00: 0x2405017f  addiu       $a1, $zero, 0x17F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C00u, 0x320AFCu, 0x320B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B04u;
label_320b04:
    // 0x320b04: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x320b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x320b08: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x320b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x320b0c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x320b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x320b10: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x320b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x320b14: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x320b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x320b18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x320b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x320b1c: 0xc0c8b00  jal         func_322C00
    ctx->pc = 0x320B1Cu;
    SET_GPR_U32(ctx, 31, 0x320B24u);
    ctx->pc = 0x320B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320B1Cu;
    // 0x320b20: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C00u, 0x320B1Cu, 0x320B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B24u;
label_320b24:
    // 0x320b24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x320b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320b28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x320b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b2c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x320B2Cu;
    SET_GPR_U32(ctx, 31, 0x320B34u);
    ctx->pc = 0x320B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320B2Cu;
    // 0x320b30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x320B2Cu, 0x320B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B34u;
label_320b34:
    // 0x320b34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x320b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320b38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x320b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320b3c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x320B3Cu;
    SET_GPR_U32(ctx, 31, 0x320B44u);
    ctx->pc = 0x320B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320B3Cu;
    // 0x320b40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x320B3Cu, 0x320B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B44u;
label_320b44:
    // 0x320b44: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320b48: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320b4c: 0x906303e0  lbu         $v1, 0x3E0($v1)
    ctx->pc = 0x320b4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 992)));
    // 0x320b50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320b54: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x320B54u;
    {
        const bool branch_taken_0x320b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B54u;
        // 0x320b58: 0xa04303e0  sb          $v1, 0x3E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b54) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320B5Cu;
label_320b5c:
    // 0x320b5c: 0xc054e0c  jal         func_153830
    ctx->pc = 0x320B5Cu;
    SET_GPR_U32(ctx, 31, 0x320B64u);
    ctx->pc = 0x153830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153830u, 0x320B5Cu, 0x320B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B64u;
label_320b64:
    // 0x320b64: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x320B64u;
    {
        const bool branch_taken_0x320b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320b64) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320B6Cu;
    // 0x320b6c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x320b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x320b70: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320b74: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x320B74u;
    {
        const bool branch_taken_0x320b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B74u;
        // 0x320b78: 0xa04303e0  sb          $v1, 0x3E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b74) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320B7Cu;
label_320b7c:
    // 0x320b7c: 0xc054330  jal         func_150CC0
    ctx->pc = 0x320B7Cu;
    SET_GPR_U32(ctx, 31, 0x320B84u);
    ctx->pc = 0x150CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150CC0u, 0x320B7Cu, 0x320B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B84u;
label_320b84:
    // 0x320b84: 0xc0c7d84  jal         func_31F610
    ctx->pc = 0x320B84u;
    SET_GPR_U32(ctx, 31, 0x320B8Cu);
    ctx->pc = 0x31F610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F610u, 0x320B84u, 0x320B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320B8Cu;
label_320b8c:
    // 0x320b8c: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320b90: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320b94: 0x906303e0  lbu         $v1, 0x3E0($v1)
    ctx->pc = 0x320b94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 992)));
    // 0x320b98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320b9c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x320B9Cu;
    {
        const bool branch_taken_0x320b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320B9Cu;
        // 0x320ba0: 0xa04303e0  sb          $v1, 0x3E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320b9c) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320BA4u;
label_320ba4:
    // 0x320ba4: 0xc0cb428  jal         func_32D0A0
    ctx->pc = 0x320BA4u;
    SET_GPR_U32(ctx, 31, 0x320BACu);
    ctx->pc = 0x32D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D0A0u, 0x320BA4u, 0x320BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320BACu;
label_320bac:
    // 0x320bac: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x320BACu;
    {
        const bool branch_taken_0x320bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320bac) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320BB4u;
    // 0x320bb4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320bb8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320bbc: 0x906303e0  lbu         $v1, 0x3E0($v1)
    ctx->pc = 0x320bbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 992)));
    // 0x320bc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320bc4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x320BC4u;
    {
        const bool branch_taken_0x320bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BC4u;
        // 0x320bc8: 0xa04303e0  sb          $v1, 0x3E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320bc4) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320BCCu;
label_320bcc:
    // 0x320bcc: 0xc063d7c  jal         func_18F5F0
    ctx->pc = 0x320BCCu;
    SET_GPR_U32(ctx, 31, 0x320BD4u);
    ctx->pc = 0x18F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F5F0u, 0x320BCCu, 0x320BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320BD4u;
label_320bd4:
    // 0x320bd4: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x320BD4u;
    {
        const bool branch_taken_0x320bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320bd4) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320BDCu;
    // 0x320bdc: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320be0: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320be4: 0x906303e0  lbu         $v1, 0x3E0($v1)
    ctx->pc = 0x320be4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 992)));
    // 0x320be8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320bec: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x320BECu;
    {
        const bool branch_taken_0x320bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BECu;
        // 0x320bf0: 0xa04303e0  sb          $v1, 0x3E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320bec) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320BF4u;
label_320bf4:
    // 0x320bf4: 0xc0635b0  jal         func_18D6C0
    ctx->pc = 0x320BF4u;
    SET_GPR_U32(ctx, 31, 0x320BFCu);
    ctx->pc = 0x18D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D6C0u, 0x320BF4u, 0x320BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320BFCu;
label_320bfc:
    // 0x320bfc: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x320BFCu;
    {
        const bool branch_taken_0x320bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320bfc) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320C04u;
    // 0x320c04: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320c08: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320c0c: 0x906303e0  lbu         $v1, 0x3E0($v1)
    ctx->pc = 0x320c0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 992)));
    // 0x320c10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320c14: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x320C14u;
    {
        const bool branch_taken_0x320c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C14u;
        // 0x320c18: 0xa04303e0  sb          $v1, 0x3E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c14) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320C1Cu;
label_320c1c:
    // 0x320c1c: 0xc04bb74  jal         func_12EDD0
    ctx->pc = 0x320C1Cu;
    SET_GPR_U32(ctx, 31, 0x320C24u);
    ctx->pc = 0x12EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EDD0u, 0x320C1Cu, 0x320C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320C24u;
label_320c24:
    // 0x320c24: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x320C24u;
    {
        const bool branch_taken_0x320c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320c24) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320C2Cu;
    // 0x320c2c: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320c30: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320c34: 0x906303e0  lbu         $v1, 0x3E0($v1)
    ctx->pc = 0x320c34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 992)));
    // 0x320c38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320c3c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x320C3Cu;
    {
        const bool branch_taken_0x320c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C3Cu;
        // 0x320c40: 0xa04303e0  sb          $v1, 0x3E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c3c) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320C44u;
label_320c44:
    // 0x320c44: 0xc063590  jal         func_18D640
    ctx->pc = 0x320C44u;
    SET_GPR_U32(ctx, 31, 0x320C4Cu);
    ctx->pc = 0x18D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D640u, 0x320C44u, 0x320C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320C4Cu;
label_320c4c:
    // 0x320c4c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x320C4Cu;
    {
        const bool branch_taken_0x320c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320c4c) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320C54u;
    // 0x320c54: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320c58: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320c5c: 0x906303e0  lbu         $v1, 0x3E0($v1)
    ctx->pc = 0x320c5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 992)));
    // 0x320c60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320c64: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x320C64u;
    {
        const bool branch_taken_0x320c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C64u;
        // 0x320c68: 0xa04303e0  sb          $v1, 0x3E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c64) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320C6Cu;
label_320c6c:
    // 0x320c6c: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x320c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x320c70: 0xc0c83bc  jal         func_320EF0
    ctx->pc = 0x320C70u;
    SET_GPR_U32(ctx, 31, 0x320C78u);
    ctx->pc = 0x320C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320C70u;
    // 0x320c74: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320EF0u, 0x320C70u, 0x320C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320C78u;
label_320c78:
    // 0x320c78: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x320C78u;
    {
        const bool branch_taken_0x320c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320c78) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320C80u;
    // 0x320c80: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320c84: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320c88: 0x906303e0  lbu         $v1, 0x3E0($v1)
    ctx->pc = 0x320c88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 992)));
    // 0x320c8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320c90: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x320C90u;
    {
        const bool branch_taken_0x320c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C90u;
        // 0x320c94: 0xa04303e0  sb          $v1, 0x3E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320c90) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320C98u;
label_320c98:
    // 0x320c98: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x320c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x320c9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x320c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320ca0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x320CA0u;
    SET_GPR_U32(ctx, 31, 0x320CA8u);
    ctx->pc = 0x320CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320CA0u;
    // 0x320ca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x320CA0u, 0x320CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320CA8u;
label_320ca8:
    // 0x320ca8: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320cac: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320cb0: 0x906303e0  lbu         $v1, 0x3E0($v1)
    ctx->pc = 0x320cb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 992)));
    // 0x320cb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320cb8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x320CB8u;
    {
        const bool branch_taken_0x320cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CB8u;
        // 0x320cbc: 0xa04303e0  sb          $v1, 0x3E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320cb8) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320CC0u;
label_320cc0:
    // 0x320cc0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x320cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x320cc4: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x320CC4u;
    SET_GPR_U32(ctx, 31, 0x320CCCu);
    ctx->pc = 0x320CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320CC4u;
    // 0x320cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x320CC4u, 0x320CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320CCCu;
label_320ccc:
    // 0x320ccc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x320CCCu;
    {
        const bool branch_taken_0x320ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ccc) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320CD4u;
    // 0x320cd4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x320cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x320cd8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320cdc: 0x906303e0  lbu         $v1, 0x3E0($v1)
    ctx->pc = 0x320cdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 992)));
    // 0x320ce0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320ce4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x320CE4u;
    {
        const bool branch_taken_0x320ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320CE4u;
        // 0x320ce8: 0xa04303e0  sb          $v1, 0x3E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ce4) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320CECu;
label_320cec:
    // 0x320cec: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320cf0: 0xc069634  jal         func_1A58D0
    ctx->pc = 0x320CF0u;
    SET_GPR_U32(ctx, 31, 0x320CF8u);
    ctx->pc = 0x320CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320CF0u;
    // 0x320cf4: 0xac400388  sw          $zero, 0x388($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 904), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A58D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A58D0u, 0x320CF0u, 0x320CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320CF8u;
label_320cf8:
    // 0x320cf8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320cfc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x320cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x320d00: 0x8c450380  lw          $a1, 0x380($v0)
    ctx->pc = 0x320d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x320d04: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x320D04u;
    SET_GPR_U32(ctx, 31, 0x320D0Cu);
    ctx->pc = 0x320D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320D04u;
    // 0x320d08: 0x24843e10  addiu       $a0, $a0, 0x3E10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x320D04u, 0x320D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D0Cu;
label_320d0c:
    // 0x320d0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x320D0Cu;
    {
        const bool branch_taken_0x320d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D0Cu;
        // 0x320d10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320d0c) {
            ctx->pc = 0x320D38u;
            goto label_320d38;
        }
    }
    ctx->pc = 0x320D14u;
label_320d14:
    // 0x320d14: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x320d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x320d18: 0xc052ea0  jal         func_14BA80
    ctx->pc = 0x320D18u;
    SET_GPR_U32(ctx, 31, 0x320D20u);
    ctx->pc = 0x320D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320D18u;
    // 0x320d1c: 0x8044f340  lb          $a0, -0xCC0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BA80u, 0x320D18u, 0x320D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320D20u;
label_320d20:
    // 0x320d20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x320D20u;
    {
        const bool branch_taken_0x320d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320d20) {
            ctx->pc = 0x320D34u;
            goto label_320d34;
        }
    }
    ctx->pc = 0x320D28u;
    // 0x320d28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x320d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x320d2c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x320d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x320d30: 0xa04303e0  sb          $v1, 0x3E0($v0)
    ctx->pc = 0x320d30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 992), (uint8_t)GPR_U32(ctx, 3));
label_320d34:
    // 0x320d34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x320d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320d38:
    // 0x320d38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x320d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x320d3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x320d3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x320d40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x320d40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320d44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x320d44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320d48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320d4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320d50: 0x3e00008  jr          $ra
    ctx->pc = 0x320D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320D50u;
        // 0x320d54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320D58u;
    // 0x320d58: 0x0  nop
    ctx->pc = 0x320d58u;
    // NOP
    // 0x320d5c: 0x0  nop
    ctx->pc = 0x320d5cu;
    // NOP
}
