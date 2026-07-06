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

// Function: sub_001F3F18
// Address: 0x1f3f18 - 0x1f4090
void sub_001F3F18_0x1f3f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3F18_0x1f3f18");
#endif

    switch (ctx->pc) {
        case 0x1f3f18u: goto label_1f3f18;
        case 0x1f3f1cu: goto label_1f3f1c;
        case 0x1f3f20u: goto label_1f3f20;
        case 0x1f3f24u: goto label_1f3f24;
        case 0x1f3f28u: goto label_1f3f28;
        case 0x1f3f2cu: goto label_1f3f2c;
        case 0x1f3f30u: goto label_1f3f30;
        case 0x1f3f34u: goto label_1f3f34;
        case 0x1f3f38u: goto label_1f3f38;
        case 0x1f3f3cu: goto label_1f3f3c;
        case 0x1f3f40u: goto label_1f3f40;
        case 0x1f3f44u: goto label_1f3f44;
        case 0x1f3f48u: goto label_1f3f48;
        case 0x1f3f4cu: goto label_1f3f4c;
        case 0x1f3f50u: goto label_1f3f50;
        case 0x1f3f54u: goto label_1f3f54;
        case 0x1f3f58u: goto label_1f3f58;
        case 0x1f3f5cu: goto label_1f3f5c;
        case 0x1f3f60u: goto label_1f3f60;
        case 0x1f3f64u: goto label_1f3f64;
        case 0x1f3f68u: goto label_1f3f68;
        case 0x1f3f6cu: goto label_1f3f6c;
        case 0x1f3f70u: goto label_1f3f70;
        case 0x1f3f74u: goto label_1f3f74;
        case 0x1f3f78u: goto label_1f3f78;
        case 0x1f3f7cu: goto label_1f3f7c;
        case 0x1f3f80u: goto label_1f3f80;
        case 0x1f3f84u: goto label_1f3f84;
        case 0x1f3f88u: goto label_1f3f88;
        case 0x1f3f8cu: goto label_1f3f8c;
        case 0x1f3f90u: goto label_1f3f90;
        case 0x1f3f94u: goto label_1f3f94;
        case 0x1f3f98u: goto label_1f3f98;
        case 0x1f3f9cu: goto label_1f3f9c;
        case 0x1f3fa0u: goto label_1f3fa0;
        case 0x1f3fa4u: goto label_1f3fa4;
        case 0x1f3fa8u: goto label_1f3fa8;
        case 0x1f3facu: goto label_1f3fac;
        case 0x1f3fb0u: goto label_1f3fb0;
        case 0x1f3fb4u: goto label_1f3fb4;
        case 0x1f3fb8u: goto label_1f3fb8;
        case 0x1f3fbcu: goto label_1f3fbc;
        case 0x1f3fc0u: goto label_1f3fc0;
        case 0x1f3fc4u: goto label_1f3fc4;
        case 0x1f3fc8u: goto label_1f3fc8;
        case 0x1f3fccu: goto label_1f3fcc;
        case 0x1f3fd0u: goto label_1f3fd0;
        case 0x1f3fd4u: goto label_1f3fd4;
        case 0x1f3fd8u: goto label_1f3fd8;
        case 0x1f3fdcu: goto label_1f3fdc;
        case 0x1f3fe0u: goto label_1f3fe0;
        case 0x1f3fe4u: goto label_1f3fe4;
        case 0x1f3fe8u: goto label_1f3fe8;
        case 0x1f3fecu: goto label_1f3fec;
        case 0x1f3ff0u: goto label_1f3ff0;
        case 0x1f3ff4u: goto label_1f3ff4;
        case 0x1f3ff8u: goto label_1f3ff8;
        case 0x1f3ffcu: goto label_1f3ffc;
        case 0x1f4000u: goto label_1f4000;
        case 0x1f4004u: goto label_1f4004;
        case 0x1f4008u: goto label_1f4008;
        case 0x1f400cu: goto label_1f400c;
        case 0x1f4010u: goto label_1f4010;
        case 0x1f4014u: goto label_1f4014;
        case 0x1f4018u: goto label_1f4018;
        case 0x1f401cu: goto label_1f401c;
        case 0x1f4020u: goto label_1f4020;
        case 0x1f4024u: goto label_1f4024;
        case 0x1f4028u: goto label_1f4028;
        case 0x1f402cu: goto label_1f402c;
        case 0x1f4030u: goto label_1f4030;
        case 0x1f4034u: goto label_1f4034;
        case 0x1f4038u: goto label_1f4038;
        case 0x1f403cu: goto label_1f403c;
        case 0x1f4040u: goto label_1f4040;
        case 0x1f4044u: goto label_1f4044;
        case 0x1f4048u: goto label_1f4048;
        case 0x1f404cu: goto label_1f404c;
        case 0x1f4050u: goto label_1f4050;
        case 0x1f4054u: goto label_1f4054;
        case 0x1f4058u: goto label_1f4058;
        case 0x1f405cu: goto label_1f405c;
        case 0x1f4060u: goto label_1f4060;
        case 0x1f4064u: goto label_1f4064;
        case 0x1f4068u: goto label_1f4068;
        case 0x1f406cu: goto label_1f406c;
        case 0x1f4070u: goto label_1f4070;
        case 0x1f4074u: goto label_1f4074;
        case 0x1f4078u: goto label_1f4078;
        case 0x1f407cu: goto label_1f407c;
        case 0x1f4080u: goto label_1f4080;
        case 0x1f4084u: goto label_1f4084;
        case 0x1f4088u: goto label_1f4088;
        case 0x1f408cu: goto label_1f408c;
        default: break;
    }

    ctx->pc = 0x1f3f18u;

label_1f3f18:
    // 0x1f3f18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f3f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f3f1c:
    // 0x1f3f1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f3f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1f3f20:
    // 0x1f3f20: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f3f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1f3f24:
    // 0x1f3f24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f3f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f28:
    // 0x1f3f28: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f3f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1f3f2c:
    // 0x1f3f2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f3f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f30:
    // 0x1f3f30: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f3f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1f3f34:
    // 0x1f3f34: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f3f34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f38:
    // 0x1f3f38: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f3f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1f3f3c:
    // 0x1f3f3c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f3f3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f40:
    // 0x1f3f40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f3f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1f3f44:
    // 0x1f3f44: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1f3f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1f3f48:
    // 0x1f3f48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f3f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f3f4c:
    // 0x1f3f4c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f3f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f50:
    // 0x1f3f50: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1f3f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1f3f54:
    // 0x1f3f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3f58:
    // 0x1f3f58: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f3f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f3f5c:
    // 0x1f3f5c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1f3f5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1f3f60:
    // 0x1f3f60: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1f3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1f3f64:
    // 0x1f3f64: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f3f68:
    // 0x1f3f68: 0x40f809  jalr        $v0
label_1f3f6c:
    if (ctx->pc == 0x1F3F6Cu) {
        ctx->pc = 0x1F3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F68u;
        // 0x1f3f6c: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F70u;
        goto label_1f3f70;
    }
    ctx->pc = 0x1F3F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F3F70u);
        ctx->pc = 0x1F3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F68u;
        // 0x1f3f6c: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3F68u, 0x1F3F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F3F70u;
label_1f3f70:
    // 0x1f3f70: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x1f3f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_1f3f74:
    // 0x1f3f74: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f3f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3f78:
    // 0x1f3f78: 0xc076326  jal         func_1D8C98
label_1f3f7c:
    if (ctx->pc == 0x1F3F7Cu) {
        ctx->pc = 0x1F3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F78u;
        // 0x1f3f7c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F80u;
        goto label_1f3f80;
    }
    ctx->pc = 0x1F3F78u;
    SET_GPR_U32(ctx, 31, 0x1F3F80u);
    ctx->pc = 0x1F3F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F78u;
    // 0x1f3f7c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1F3F78u, 0x1F3F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F80u;
label_1f3f80:
    // 0x1f3f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f3f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f84:
    // 0x1f3f84: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_1f3f88:
    if (ctx->pc == 0x1F3F88u) {
        ctx->pc = 0x1F3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F84u;
        // 0x1f3f88: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F8Cu;
        goto label_1f3f8c;
    }
    ctx->pc = 0x1F3F84u;
    {
        const bool branch_taken_0x1f3f84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F84u;
        // 0x1f3f88: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f84) {
            ctx->pc = 0x1F4030u;
            goto label_1f4030;
        }
    }
    ctx->pc = 0x1F3F8Cu;
label_1f3f8c:
    // 0x1f3f8c: 0xc0762c0  jal         func_1D8B00
label_1f3f90:
    if (ctx->pc == 0x1F3F90u) {
        ctx->pc = 0x1F3F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F8Cu;
        // 0x1f3f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F94u;
        goto label_1f3f94;
    }
    ctx->pc = 0x1F3F8Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F94u);
    ctx->pc = 0x1F3F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F8Cu;
    // 0x1f3f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1F3F8Cu, 0x1F3F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3F94u;
label_1f3f94:
    // 0x1f3f94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f3f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f3f98:
    // 0x1f3f98: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_1f3f9c:
    if (ctx->pc == 0x1F3F9Cu) {
        ctx->pc = 0x1F3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F98u;
        // 0x1f3f9c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FA0u;
        goto label_1f3fa0;
    }
    ctx->pc = 0x1F3F98u;
    {
        const bool branch_taken_0x1f3f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F98u;
        // 0x1f3f9c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f98) {
            ctx->pc = 0x1F4050u;
            goto label_1f4050;
        }
    }
    ctx->pc = 0x1F3FA0u;
label_1f3fa0:
    // 0x1f3fa0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1f3fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3fa4:
    // 0x1f3fa4: 0x2061023  subu        $v0, $s0, $a2
    ctx->pc = 0x1f3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1f3fa8:
    // 0x1f3fa8: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x1f3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_1f3fac:
    // 0x1f3fac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1f3facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f3fb0:
    // 0x1f3fb0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1f3fb4:
    if (ctx->pc == 0x1F3FB4u) {
        ctx->pc = 0x1F3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FB0u;
        // 0x1f3fb4: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FB8u;
        goto label_1f3fb8;
    }
    ctx->pc = 0x1F3FB0u;
    {
        const bool branch_taken_0x1f3fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FB0u;
        // 0x1f3fb4: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3fb0) {
            ctx->pc = 0x1F4030u;
            goto label_1f4030;
        }
    }
    ctx->pc = 0x1F3FB8u;
label_1f3fb8:
    // 0x1f3fb8: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x1f3fb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_1f3fbc:
    // 0x1f3fbc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f3fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f3fc0:
    // 0x1f3fc0: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1f3fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_1f3fc4:
    // 0x1f3fc4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1f3fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1f3fc8:
    // 0x1f3fc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3fcc:
    // 0x1f3fcc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1f3fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1f3fd0:
    // 0x1f3fd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f3fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3fd4:
    // 0x1f3fd4: 0x8c63e950  lw          $v1, -0x16B0($v1)
    ctx->pc = 0x1f3fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961488)));
label_1f3fd8:
    // 0x1f3fd8: 0x1464001d  bne         $v1, $a0, . + 4 + (0x1D << 2)
label_1f3fdc:
    if (ctx->pc == 0x1F3FDCu) {
        ctx->pc = 0x1F3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FD8u;
        // 0x1f3fdc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FE0u;
        goto label_1f3fe0;
    }
    ctx->pc = 0x1F3FD8u;
    {
        const bool branch_taken_0x1f3fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FD8u;
        // 0x1f3fdc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3fd8) {
            ctx->pc = 0x1F4050u;
            goto label_1f4050;
        }
    }
    ctx->pc = 0x1F3FE0u;
label_1f3fe0:
    // 0x1f3fe0: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x1f3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_1f3fe4:
    // 0x1f3fe4: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1f3fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1f3fe8:
    // 0x1f3fe8: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x1f3fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f3fec:
    // 0x1f3fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ff0:
    // 0x1f3ff0: 0xc076326  jal         func_1D8C98
label_1f3ff4:
    if (ctx->pc == 0x1F3FF4u) {
        ctx->pc = 0x1F3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FF0u;
        // 0x1f3ff4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FF8u;
        goto label_1f3ff8;
    }
    ctx->pc = 0x1F3FF0u;
    SET_GPR_U32(ctx, 31, 0x1F3FF8u);
    ctx->pc = 0x1F3FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FF0u;
    // 0x1f3ff4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1F3FF0u, 0x1F3FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3FF8u;
label_1f3ff8:
    // 0x1f3ff8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f3ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3ffc:
    // 0x1f3ffc: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
label_1f4000:
    if (ctx->pc == 0x1F4000u) {
        ctx->pc = 0x1F4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FFCu;
        // 0x1f4000: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4004u;
        goto label_1f4004;
    }
    ctx->pc = 0x1F3FFCu;
    {
        const bool branch_taken_0x1f3ffc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ffc) {
            ctx->pc = 0x1F4000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3FFCu;
            // 0x1f4000: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4054u;
            goto label_1f4054;
        }
    }
    ctx->pc = 0x1F4004u;
label_1f4004:
    // 0x1f4004: 0xc0762c0  jal         func_1D8B00
label_1f4008:
    if (ctx->pc == 0x1F4008u) {
        ctx->pc = 0x1F4008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4004u;
        // 0x1f4008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F400Cu;
        goto label_1f400c;
    }
    ctx->pc = 0x1F4004u;
    SET_GPR_U32(ctx, 31, 0x1F400Cu);
    ctx->pc = 0x1F4008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4004u;
    // 0x1f4008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1F4004u, 0x1F400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F400Cu;
label_1f400c:
    // 0x1f400c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1f400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f4010:
    // 0x1f4010: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1f4014:
    if (ctx->pc == 0x1F4014u) {
        ctx->pc = 0x1F4014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4010u;
        // 0x1f4014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4018u;
        goto label_1f4018;
    }
    ctx->pc = 0x1F4010u;
    {
        const bool branch_taken_0x1f4010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4010u;
        // 0x1f4014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4010) {
            ctx->pc = 0x1F4050u;
            goto label_1f4050;
        }
    }
    ctx->pc = 0x1F4018u;
label_1f4018:
    // 0x1f4018: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f4018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f401c:
    // 0x1f401c: 0xc076326  jal         func_1D8C98
label_1f4020:
    if (ctx->pc == 0x1F4020u) {
        ctx->pc = 0x1F4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F401Cu;
        // 0x1f4020: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4024u;
        goto label_1f4024;
    }
    ctx->pc = 0x1F401Cu;
    SET_GPR_U32(ctx, 31, 0x1F4024u);
    ctx->pc = 0x1F4020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F401Cu;
    // 0x1f4020: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1F401Cu, 0x1F4024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4024u;
label_1f4024:
    // 0x1f4024: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1f4028:
    if (ctx->pc == 0x1F4028u) {
        ctx->pc = 0x1F4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4024u;
        // 0x1f4028: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F402Cu;
        goto label_1f402c;
    }
    ctx->pc = 0x1F4024u;
    {
        const bool branch_taken_0x1f4024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4024u;
        // 0x1f4028: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4024) {
            ctx->pc = 0x1F4048u;
            goto label_1f4048;
        }
    }
    ctx->pc = 0x1F402Cu;
label_1f402c:
    // 0x1f402c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f402cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1f4030:
    // 0x1f4030: 0x2463177c  addiu       $v1, $v1, 0x177C
    ctx->pc = 0x1f4030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6012));
label_1f4034:
    // 0x1f4034: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f4034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f4038:
    // 0x1f4038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f403c:
    // 0x1f403c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f4040:
    if (ctx->pc == 0x1F4040u) {
        ctx->pc = 0x1F4040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F403Cu;
        // 0x1f4040: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4044u;
        goto label_1f4044;
    }
    ctx->pc = 0x1F403Cu;
    {
        const bool branch_taken_0x1f403c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F403Cu;
        // 0x1f4040: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f403c) {
            ctx->pc = 0x1F4050u;
            goto label_1f4050;
        }
    }
    ctx->pc = 0x1F4044u;
label_1f4044:
    // 0x1f4044: 0x0  nop
    ctx->pc = 0x1f4044u;
    // NOP
label_1f4048:
    // 0x1f4048: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x1f4048u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_1f404c:
    // 0x1f404c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1f404cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1f4050:
    // 0x1f4050: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f4050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f4054:
    // 0x1f4054: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f4054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f4058:
    // 0x1f4058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f4058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f405c:
    // 0x1f405c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1f405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1f4060:
    // 0x1f4060: 0x40f809  jalr        $v0
label_1f4064:
    if (ctx->pc == 0x1F4064u) {
        ctx->pc = 0x1F4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4060u;
        // 0x1f4064: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4068u;
        goto label_1f4068;
    }
    ctx->pc = 0x1F4060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F4068u);
        ctx->pc = 0x1F4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4060u;
        // 0x1f4064: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4060u, 0x1F4068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4068u;
label_1f4068:
    // 0x1f4068: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f4068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f406c:
    // 0x1f406c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f406cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f4070:
    // 0x1f4070: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f4070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4074:
    // 0x1f4074: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f4074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f4078:
    // 0x1f4078: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f4078u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f407c:
    // 0x1f407c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f407cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1f4080:
    // 0x1f4080: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f4080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f4084:
    // 0x1f4084: 0x3e00008  jr          $ra
label_1f4088:
    if (ctx->pc == 0x1F4088u) {
        ctx->pc = 0x1F4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4084u;
        // 0x1f4088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F408Cu;
        goto label_1f408c;
    }
    ctx->pc = 0x1F4084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4084u;
        // 0x1f4088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F408Cu;
label_1f408c:
    // 0x1f408c: 0x0  nop
    ctx->pc = 0x1f408cu;
    // NOP
}
