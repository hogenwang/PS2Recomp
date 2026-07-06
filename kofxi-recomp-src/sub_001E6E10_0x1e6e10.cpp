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

// Function: sub_001E6E10
// Address: 0x1e6e10 - 0x1e7028
void sub_001E6E10_0x1e6e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6E10_0x1e6e10");
#endif

    switch (ctx->pc) {
        case 0x1e6e10u: goto label_1e6e10;
        case 0x1e6e14u: goto label_1e6e14;
        case 0x1e6e18u: goto label_1e6e18;
        case 0x1e6e1cu: goto label_1e6e1c;
        case 0x1e6e20u: goto label_1e6e20;
        case 0x1e6e24u: goto label_1e6e24;
        case 0x1e6e28u: goto label_1e6e28;
        case 0x1e6e2cu: goto label_1e6e2c;
        case 0x1e6e30u: goto label_1e6e30;
        case 0x1e6e34u: goto label_1e6e34;
        case 0x1e6e38u: goto label_1e6e38;
        case 0x1e6e3cu: goto label_1e6e3c;
        case 0x1e6e40u: goto label_1e6e40;
        case 0x1e6e44u: goto label_1e6e44;
        case 0x1e6e48u: goto label_1e6e48;
        case 0x1e6e4cu: goto label_1e6e4c;
        case 0x1e6e50u: goto label_1e6e50;
        case 0x1e6e54u: goto label_1e6e54;
        case 0x1e6e58u: goto label_1e6e58;
        case 0x1e6e5cu: goto label_1e6e5c;
        case 0x1e6e60u: goto label_1e6e60;
        case 0x1e6e64u: goto label_1e6e64;
        case 0x1e6e68u: goto label_1e6e68;
        case 0x1e6e6cu: goto label_1e6e6c;
        case 0x1e6e70u: goto label_1e6e70;
        case 0x1e6e74u: goto label_1e6e74;
        case 0x1e6e78u: goto label_1e6e78;
        case 0x1e6e7cu: goto label_1e6e7c;
        case 0x1e6e80u: goto label_1e6e80;
        case 0x1e6e84u: goto label_1e6e84;
        case 0x1e6e88u: goto label_1e6e88;
        case 0x1e6e8cu: goto label_1e6e8c;
        case 0x1e6e90u: goto label_1e6e90;
        case 0x1e6e94u: goto label_1e6e94;
        case 0x1e6e98u: goto label_1e6e98;
        case 0x1e6e9cu: goto label_1e6e9c;
        case 0x1e6ea0u: goto label_1e6ea0;
        case 0x1e6ea4u: goto label_1e6ea4;
        case 0x1e6ea8u: goto label_1e6ea8;
        case 0x1e6eacu: goto label_1e6eac;
        case 0x1e6eb0u: goto label_1e6eb0;
        case 0x1e6eb4u: goto label_1e6eb4;
        case 0x1e6eb8u: goto label_1e6eb8;
        case 0x1e6ebcu: goto label_1e6ebc;
        case 0x1e6ec0u: goto label_1e6ec0;
        case 0x1e6ec4u: goto label_1e6ec4;
        case 0x1e6ec8u: goto label_1e6ec8;
        case 0x1e6eccu: goto label_1e6ecc;
        case 0x1e6ed0u: goto label_1e6ed0;
        case 0x1e6ed4u: goto label_1e6ed4;
        case 0x1e6ed8u: goto label_1e6ed8;
        case 0x1e6edcu: goto label_1e6edc;
        case 0x1e6ee0u: goto label_1e6ee0;
        case 0x1e6ee4u: goto label_1e6ee4;
        case 0x1e6ee8u: goto label_1e6ee8;
        case 0x1e6eecu: goto label_1e6eec;
        case 0x1e6ef0u: goto label_1e6ef0;
        case 0x1e6ef4u: goto label_1e6ef4;
        case 0x1e6ef8u: goto label_1e6ef8;
        case 0x1e6efcu: goto label_1e6efc;
        case 0x1e6f00u: goto label_1e6f00;
        case 0x1e6f04u: goto label_1e6f04;
        case 0x1e6f08u: goto label_1e6f08;
        case 0x1e6f0cu: goto label_1e6f0c;
        case 0x1e6f10u: goto label_1e6f10;
        case 0x1e6f14u: goto label_1e6f14;
        case 0x1e6f18u: goto label_1e6f18;
        case 0x1e6f1cu: goto label_1e6f1c;
        case 0x1e6f20u: goto label_1e6f20;
        case 0x1e6f24u: goto label_1e6f24;
        case 0x1e6f28u: goto label_1e6f28;
        case 0x1e6f2cu: goto label_1e6f2c;
        case 0x1e6f30u: goto label_1e6f30;
        case 0x1e6f34u: goto label_1e6f34;
        case 0x1e6f38u: goto label_1e6f38;
        case 0x1e6f3cu: goto label_1e6f3c;
        case 0x1e6f40u: goto label_1e6f40;
        case 0x1e6f44u: goto label_1e6f44;
        case 0x1e6f48u: goto label_1e6f48;
        case 0x1e6f4cu: goto label_1e6f4c;
        case 0x1e6f50u: goto label_1e6f50;
        case 0x1e6f54u: goto label_1e6f54;
        case 0x1e6f58u: goto label_1e6f58;
        case 0x1e6f5cu: goto label_1e6f5c;
        case 0x1e6f60u: goto label_1e6f60;
        case 0x1e6f64u: goto label_1e6f64;
        case 0x1e6f68u: goto label_1e6f68;
        case 0x1e6f6cu: goto label_1e6f6c;
        case 0x1e6f70u: goto label_1e6f70;
        case 0x1e6f74u: goto label_1e6f74;
        case 0x1e6f78u: goto label_1e6f78;
        case 0x1e6f7cu: goto label_1e6f7c;
        case 0x1e6f80u: goto label_1e6f80;
        case 0x1e6f84u: goto label_1e6f84;
        case 0x1e6f88u: goto label_1e6f88;
        case 0x1e6f8cu: goto label_1e6f8c;
        case 0x1e6f90u: goto label_1e6f90;
        case 0x1e6f94u: goto label_1e6f94;
        case 0x1e6f98u: goto label_1e6f98;
        case 0x1e6f9cu: goto label_1e6f9c;
        case 0x1e6fa0u: goto label_1e6fa0;
        case 0x1e6fa4u: goto label_1e6fa4;
        case 0x1e6fa8u: goto label_1e6fa8;
        case 0x1e6facu: goto label_1e6fac;
        case 0x1e6fb0u: goto label_1e6fb0;
        case 0x1e6fb4u: goto label_1e6fb4;
        case 0x1e6fb8u: goto label_1e6fb8;
        case 0x1e6fbcu: goto label_1e6fbc;
        case 0x1e6fc0u: goto label_1e6fc0;
        case 0x1e6fc4u: goto label_1e6fc4;
        case 0x1e6fc8u: goto label_1e6fc8;
        case 0x1e6fccu: goto label_1e6fcc;
        case 0x1e6fd0u: goto label_1e6fd0;
        case 0x1e6fd4u: goto label_1e6fd4;
        case 0x1e6fd8u: goto label_1e6fd8;
        case 0x1e6fdcu: goto label_1e6fdc;
        case 0x1e6fe0u: goto label_1e6fe0;
        case 0x1e6fe4u: goto label_1e6fe4;
        case 0x1e6fe8u: goto label_1e6fe8;
        case 0x1e6fecu: goto label_1e6fec;
        case 0x1e6ff0u: goto label_1e6ff0;
        case 0x1e6ff4u: goto label_1e6ff4;
        case 0x1e6ff8u: goto label_1e6ff8;
        case 0x1e6ffcu: goto label_1e6ffc;
        case 0x1e7000u: goto label_1e7000;
        case 0x1e7004u: goto label_1e7004;
        case 0x1e7008u: goto label_1e7008;
        case 0x1e700cu: goto label_1e700c;
        case 0x1e7010u: goto label_1e7010;
        case 0x1e7014u: goto label_1e7014;
        case 0x1e7018u: goto label_1e7018;
        case 0x1e701cu: goto label_1e701c;
        case 0x1e7020u: goto label_1e7020;
        case 0x1e7024u: goto label_1e7024;
        default: break;
    }

    ctx->pc = 0x1e6e10u;

label_1e6e10:
    // 0x1e6e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e6e14:
    // 0x1e6e14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e6e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6e18:
    // 0x1e6e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e6e1c:
    // 0x1e6e1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e6e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6e20:
    // 0x1e6e20: 0x8c430488  lw          $v1, 0x488($v0)
    ctx->pc = 0x1e6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1160)));
label_1e6e24:
    // 0x1e6e24: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
label_1e6e28:
    if (ctx->pc == 0x1E6E28u) {
        ctx->pc = 0x1E6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E24u;
        // 0x1e6e28: 0x244204a8  addiu       $v0, $v0, 0x4A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6E2Cu;
        goto label_1e6e2c;
    }
    ctx->pc = 0x1E6E24u;
    {
        const bool branch_taken_0x1e6e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E24u;
        // 0x1e6e28: 0x244204a8  addiu       $v0, $v0, 0x4A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e24) {
            ctx->pc = 0x1E6E38u;
            goto label_1e6e38;
        }
    }
    ctx->pc = 0x1E6E2Cu;
label_1e6e2c:
    // 0x1e6e2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e6e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6e30:
    // 0x1e6e30: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
label_1e6e34:
    if (ctx->pc == 0x1E6E34u) {
        ctx->pc = 0x1E6E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E30u;
        // 0x1e6e34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6E38u;
        goto label_1e6e38;
    }
    ctx->pc = 0x1E6E30u;
    {
        const bool branch_taken_0x1e6e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1E6E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E30u;
        // 0x1e6e34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e30) {
            ctx->pc = 0x1E6E48u;
            goto label_1e6e48;
        }
    }
    ctx->pc = 0x1E6E38u;
label_1e6e38:
    // 0x1e6e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6e3c:
    // 0x1e6e3c: 0x8079b94  j           func_1E6E50
label_1e6e40:
    if (ctx->pc == 0x1E6E40u) {
        ctx->pc = 0x1E6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E3Cu;
        // 0x1e6e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6E44u;
        goto label_1e6e44;
    }
    ctx->pc = 0x1E6E3Cu;
    ctx->pc = 0x1E6E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E3Cu;
    // 0x1e6e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E50u;
    goto label_1e6e50;
    ctx->pc = 0x1E6E44u;
label_1e6e44:
    // 0x1e6e44: 0x0  nop
    ctx->pc = 0x1e6e44u;
    // NOP
label_1e6e48:
    // 0x1e6e48: 0x8079be8  j           func_1E6FA0
label_1e6e4c:
    if (ctx->pc == 0x1E6E4Cu) {
        ctx->pc = 0x1E6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E48u;
        // 0x1e6e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6E50u;
        goto label_1e6e50;
    }
    ctx->pc = 0x1E6E48u;
    ctx->pc = 0x1E6E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E48u;
    // 0x1e6e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6FA0u;
    goto label_1e6fa0;
    ctx->pc = 0x1E6E50u;
label_1e6e50:
    // 0x1e6e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6e54:
    // 0x1e6e54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e6e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e6e58:
    // 0x1e6e58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e6e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6e5c:
    // 0x1e6e5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e6e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e6e60:
    // 0x1e6e60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e6e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e6e64:
    // 0x1e6e64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e6e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1e6e68:
    // 0x1e6e68: 0xc07eb30  jal         func_1FACC0
label_1e6e6c:
    if (ctx->pc == 0x1E6E6Cu) {
        ctx->pc = 0x1E6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E68u;
        // 0x1e6e6c: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6E70u;
        goto label_1e6e70;
    }
    ctx->pc = 0x1E6E68u;
    SET_GPR_U32(ctx, 31, 0x1E6E70u);
    ctx->pc = 0x1E6E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E68u;
    // 0x1e6e6c: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACC0u, 0x1E6E68u, 0x1E6E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6E70u;
label_1e6e70:
    // 0x1e6e70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e6e74:
    // 0x1e6e74: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
label_1e6e78:
    if (ctx->pc == 0x1E6E78u) {
        ctx->pc = 0x1E6E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E74u;
        // 0x1e6e78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6E7Cu;
        goto label_1e6e7c;
    }
    ctx->pc = 0x1E6E74u;
    {
        const bool branch_taken_0x1e6e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E6E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E74u;
        // 0x1e6e78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e74) {
            ctx->pc = 0x1E6F88u;
            goto label_1e6f88;
        }
    }
    ctx->pc = 0x1E6E7Cu;
label_1e6e7c:
    // 0x1e6e7c: 0x26300488  addiu       $s0, $s1, 0x488
    ctx->pc = 0x1e6e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1160));
label_1e6e80:
    // 0x1e6e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6e84:
    // 0x1e6e84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6e88:
    // 0x1e6e88: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_1e6e8c:
    if (ctx->pc == 0x1E6E8Cu) {
        ctx->pc = 0x1E6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E88u;
        // 0x1e6e8c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6E90u;
        goto label_1e6e90;
    }
    ctx->pc = 0x1E6E88u;
    {
        const bool branch_taken_0x1e6e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E88u;
        // 0x1e6e8c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e88) {
            ctx->pc = 0x1E6EC0u;
            goto label_1e6ec0;
        }
    }
    ctx->pc = 0x1E6E90u;
label_1e6e90:
    // 0x1e6e90: 0xc0798b8  jal         func_1E62E0
label_1e6e94:
    if (ctx->pc == 0x1E6E94u) {
        ctx->pc = 0x1E6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E90u;
        // 0x1e6e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6E98u;
        goto label_1e6e98;
    }
    ctx->pc = 0x1E6E90u;
    SET_GPR_U32(ctx, 31, 0x1E6E98u);
    ctx->pc = 0x1E6E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E90u;
    // 0x1e6e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E62E0u, 0x1E6E90u, 0x1E6E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6E98u;
label_1e6e98:
    // 0x1e6e98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6e9c:
    // 0x1e6e9c: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
label_1e6ea0:
    if (ctx->pc == 0x1E6EA0u) {
        ctx->pc = 0x1E6EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E9Cu;
        // 0x1e6ea0: 0x263004a8  addiu       $s0, $s1, 0x4A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6EA4u;
        goto label_1e6ea4;
    }
    ctx->pc = 0x1E6E9Cu;
    {
        const bool branch_taken_0x1e6e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e6e9c) {
            ctx->pc = 0x1E6EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6E9Cu;
            // 0x1e6ea0: 0x263004a8  addiu       $s0, $s1, 0x4A8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6EC4u;
            goto label_1e6ec4;
        }
    }
    ctx->pc = 0x1E6EA4u;
label_1e6ea4:
    // 0x1e6ea4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1e6ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e6ea8:
    // 0x1e6ea8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6eac:
    // 0x1e6eac: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1e6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1e6eb0:
    // 0x1e6eb0: 0x40f809  jalr        $v0
label_1e6eb4:
    if (ctx->pc == 0x1E6EB4u) {
        ctx->pc = 0x1E6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EB0u;
        // 0x1e6eb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6EB8u;
        goto label_1e6eb8;
    }
    ctx->pc = 0x1E6EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6EB8u);
        ctx->pc = 0x1E6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EB0u;
        // 0x1e6eb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6EB0u, 0x1E6EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6EB8u;
label_1e6eb8:
    // 0x1e6eb8: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_1e6ebc:
    if (ctx->pc == 0x1E6EBCu) {
        ctx->pc = 0x1E6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EB8u;
        // 0x1e6ebc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6EC0u;
        goto label_1e6ec0;
    }
    ctx->pc = 0x1E6EB8u;
    {
        const bool branch_taken_0x1e6eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EB8u;
        // 0x1e6ebc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6eb8) {
            ctx->pc = 0x1E6F88u;
            goto label_1e6f88;
        }
    }
    ctx->pc = 0x1E6EC0u;
label_1e6ec0:
    // 0x1e6ec0: 0x263004a8  addiu       $s0, $s1, 0x4A8
    ctx->pc = 0x1e6ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1192));
label_1e6ec4:
    // 0x1e6ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6ec8:
    // 0x1e6ec8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6ecc:
    // 0x1e6ecc: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_1e6ed0:
    if (ctx->pc == 0x1E6ED0u) {
        ctx->pc = 0x1E6ED4u;
        goto label_1e6ed4;
    }
    ctx->pc = 0x1E6ECCu;
    {
        const bool branch_taken_0x1e6ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e6ecc) {
            ctx->pc = 0x1E6F04u;
            goto label_1e6f04;
        }
    }
    ctx->pc = 0x1E6ED4u;
label_1e6ed4:
    // 0x1e6ed4: 0xc0798b8  jal         func_1E62E0
label_1e6ed8:
    if (ctx->pc == 0x1E6ED8u) {
        ctx->pc = 0x1E6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6ED4u;
        // 0x1e6ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6EDCu;
        goto label_1e6edc;
    }
    ctx->pc = 0x1E6ED4u;
    SET_GPR_U32(ctx, 31, 0x1E6EDCu);
    ctx->pc = 0x1E6ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6ED4u;
    // 0x1e6ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E62E0u, 0x1E6ED4u, 0x1E6EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6EDCu;
label_1e6edc:
    // 0x1e6edc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6ee0:
    // 0x1e6ee0: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_1e6ee4:
    if (ctx->pc == 0x1E6EE4u) {
        ctx->pc = 0x1E6EE8u;
        goto label_1e6ee8;
    }
    ctx->pc = 0x1E6EE0u;
    {
        const bool branch_taken_0x1e6ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e6ee0) {
            ctx->pc = 0x1E6F04u;
            goto label_1e6f04;
        }
    }
    ctx->pc = 0x1E6EE8u;
label_1e6ee8:
    // 0x1e6ee8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1e6ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e6eec:
    // 0x1e6eec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e6eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6ef0:
    // 0x1e6ef0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1e6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1e6ef4:
    // 0x1e6ef4: 0x40f809  jalr        $v0
label_1e6ef8:
    if (ctx->pc == 0x1E6EF8u) {
        ctx->pc = 0x1E6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EF4u;
        // 0x1e6ef8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6EFCu;
        goto label_1e6efc;
    }
    ctx->pc = 0x1E6EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6EFCu);
        ctx->pc = 0x1E6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EF4u;
        // 0x1e6ef8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6EF4u, 0x1E6EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6EFCu;
label_1e6efc:
    // 0x1e6efc: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_1e6f00:
    if (ctx->pc == 0x1E6F00u) {
        ctx->pc = 0x1E6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EFCu;
        // 0x1e6f00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F04u;
        goto label_1e6f04;
    }
    ctx->pc = 0x1E6EFCu;
    {
        const bool branch_taken_0x1e6efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6efc) {
            ctx->pc = 0x1E6F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6EFCu;
            // 0x1e6f00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F88u;
            goto label_1e6f88;
        }
    }
    ctx->pc = 0x1E6F04u;
label_1e6f04:
    // 0x1e6f04: 0xc07845c  jal         func_1E1170
label_1e6f08:
    if (ctx->pc == 0x1E6F08u) {
        ctx->pc = 0x1E6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F04u;
        // 0x1e6f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F0Cu;
        goto label_1e6f0c;
    }
    ctx->pc = 0x1E6F04u;
    SET_GPR_U32(ctx, 31, 0x1E6F0Cu);
    ctx->pc = 0x1E6F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F04u;
    // 0x1e6f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1170u, 0x1E6F04u, 0x1E6F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F0Cu;
label_1e6f0c:
    // 0x1e6f0c: 0x82230072  lb          $v1, 0x72($s1)
    ctx->pc = 0x1e6f0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_1e6f10:
    // 0x1e6f10: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_1e6f14:
    if (ctx->pc == 0x1E6F14u) {
        ctx->pc = 0x1E6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F10u;
        // 0x1e6f14: 0x82230070  lb          $v1, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F18u;
        goto label_1e6f18;
    }
    ctx->pc = 0x1E6F10u;
    {
        const bool branch_taken_0x1e6f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f10) {
            ctx->pc = 0x1E6F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6F10u;
            // 0x1e6f14: 0x82230070  lb          $v1, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F28u;
            goto label_1e6f28;
        }
    }
    ctx->pc = 0x1E6F18u;
label_1e6f18:
    // 0x1e6f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6f1c:
    // 0x1e6f1c: 0xc078618  jal         func_1E1860
label_1e6f20:
    if (ctx->pc == 0x1E6F20u) {
        ctx->pc = 0x1E6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F1Cu;
        // 0x1e6f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F24u;
        goto label_1e6f24;
    }
    ctx->pc = 0x1E6F1Cu;
    SET_GPR_U32(ctx, 31, 0x1E6F24u);
    ctx->pc = 0x1E6F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F1Cu;
    // 0x1e6f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1860u, 0x1E6F1Cu, 0x1E6F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F24u;
label_1e6f24:
    // 0x1e6f24: 0x82230070  lb          $v1, 0x70($s1)
    ctx->pc = 0x1e6f24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_1e6f28:
    // 0x1e6f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6f2c:
    // 0x1e6f2c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1e6f30:
    if (ctx->pc == 0x1E6F30u) {
        ctx->pc = 0x1E6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F2Cu;
        // 0x1e6f30: 0x82220072  lb          $v0, 0x72($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F34u;
        goto label_1e6f34;
    }
    ctx->pc = 0x1E6F2Cu;
    {
        const bool branch_taken_0x1e6f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6f2c) {
            ctx->pc = 0x1E6F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6F2Cu;
            // 0x1e6f30: 0x82220072  lb          $v0, 0x72($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F54u;
            goto label_1e6f54;
        }
    }
    ctx->pc = 0x1E6F34u;
label_1e6f34:
    // 0x1e6f34: 0xc07ae14  jal         func_1EB850
label_1e6f38:
    if (ctx->pc == 0x1E6F38u) {
        ctx->pc = 0x1E6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F34u;
        // 0x1e6f38: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F3Cu;
        goto label_1e6f3c;
    }
    ctx->pc = 0x1E6F34u;
    SET_GPR_U32(ctx, 31, 0x1E6F3Cu);
    ctx->pc = 0x1E6F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F34u;
    // 0x1e6f38: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB850u, 0x1E6F34u, 0x1E6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F3Cu;
label_1e6f3c:
    // 0x1e6f3c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1e6f40:
    if (ctx->pc == 0x1E6F40u) {
        ctx->pc = 0x1E6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F3Cu;
        // 0x1e6f40: 0x82220072  lb          $v0, 0x72($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F44u;
        goto label_1e6f44;
    }
    ctx->pc = 0x1E6F3Cu;
    {
        const bool branch_taken_0x1e6f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f3c) {
            ctx->pc = 0x1E6F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6F3Cu;
            // 0x1e6f40: 0x82220072  lb          $v0, 0x72($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F54u;
            goto label_1e6f54;
        }
    }
    ctx->pc = 0x1E6F44u;
label_1e6f44:
    // 0x1e6f44: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e6f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1e6f48:
    // 0x1e6f48: 0xc079afa  jal         func_1E6BE8
label_1e6f4c:
    if (ctx->pc == 0x1E6F4Cu) {
        ctx->pc = 0x1E6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F48u;
        // 0x1e6f4c: 0x2484e4f0  addiu       $a0, $a0, -0x1B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F50u;
        goto label_1e6f50;
    }
    ctx->pc = 0x1E6F48u;
    SET_GPR_U32(ctx, 31, 0x1E6F50u);
    ctx->pc = 0x1E6F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F48u;
    // 0x1e6f4c: 0x2484e4f0  addiu       $a0, $a0, -0x1B10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E6F48u, 0x1E6F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F50u;
label_1e6f50:
    // 0x1e6f50: 0x82220072  lb          $v0, 0x72($s1)
    ctx->pc = 0x1e6f50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_1e6f54:
    // 0x1e6f54: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1e6f58:
    if (ctx->pc == 0x1E6F58u) {
        ctx->pc = 0x1E6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F54u;
        // 0x1e6f58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F5Cu;
        goto label_1e6f5c;
    }
    ctx->pc = 0x1E6F54u;
    {
        const bool branch_taken_0x1e6f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f54) {
            ctx->pc = 0x1E6F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6F54u;
            // 0x1e6f58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6F88u;
            goto label_1e6f88;
        }
    }
    ctx->pc = 0x1E6F5Cu;
label_1e6f5c:
    // 0x1e6f5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e6f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e6f60:
    // 0x1e6f60: 0xc0798ea  jal         func_1E63A8
label_1e6f64:
    if (ctx->pc == 0x1E6F64u) {
        ctx->pc = 0x1E6F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F60u;
        // 0x1e6f64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F68u;
        goto label_1e6f68;
    }
    ctx->pc = 0x1E6F60u;
    SET_GPR_U32(ctx, 31, 0x1E6F68u);
    ctx->pc = 0x1E6F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F60u;
    // 0x1e6f64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E63A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E63A8u, 0x1E6F60u, 0x1E6F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F68u;
label_1e6f68:
    // 0x1e6f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6f6c:
    // 0x1e6f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e6f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e6f70:
    // 0x1e6f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6f74:
    // 0x1e6f74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6f78:
    // 0x1e6f78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e6f78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6f7c:
    // 0x1e6f7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e6f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e6f80:
    // 0x1e6f80: 0x80798ea  j           func_1E63A8
label_1e6f84:
    if (ctx->pc == 0x1E6F84u) {
        ctx->pc = 0x1E6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F80u;
        // 0x1e6f84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F88u;
        goto label_1e6f88;
    }
    ctx->pc = 0x1E6F80u;
    ctx->pc = 0x1E6F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F80u;
    // 0x1e6f84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E63A8u;
    sub_001E63A8_0x1e63a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E6F88u;
label_1e6f88:
    // 0x1e6f88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e6f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e6f8c:
    // 0x1e6f8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e6f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6f90:
    // 0x1e6f90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e6f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e6f94:
    // 0x1e6f94: 0x3e00008  jr          $ra
label_1e6f98:
    if (ctx->pc == 0x1E6F98u) {
        ctx->pc = 0x1E6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F94u;
        // 0x1e6f98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F9Cu;
        goto label_1e6f9c;
    }
    ctx->pc = 0x1E6F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F94u;
        // 0x1e6f98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6F9Cu;
label_1e6f9c:
    // 0x1e6f9c: 0x0  nop
    ctx->pc = 0x1e6f9cu;
    // NOP
label_1e6fa0:
    // 0x1e6fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e6fa4:
    // 0x1e6fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e6fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e6fa8:
    // 0x1e6fa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6fac:
    // 0x1e6fac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e6facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e6fb0:
    // 0x1e6fb0: 0xc07eb30  jal         func_1FACC0
label_1e6fb4:
    if (ctx->pc == 0x1E6FB4u) {
        ctx->pc = 0x1E6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FB0u;
        // 0x1e6fb4: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6FB8u;
        goto label_1e6fb8;
    }
    ctx->pc = 0x1E6FB0u;
    SET_GPR_U32(ctx, 31, 0x1E6FB8u);
    ctx->pc = 0x1E6FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6FB0u;
    // 0x1e6fb4: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACC0u, 0x1E6FB0u, 0x1E6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6FB8u;
label_1e6fb8:
    // 0x1e6fb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e6fbc:
    // 0x1e6fbc: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_1e6fc0:
    if (ctx->pc == 0x1E6FC0u) {
        ctx->pc = 0x1E6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FBCu;
        // 0x1e6fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6FC4u;
        goto label_1e6fc4;
    }
    ctx->pc = 0x1E6FBCu;
    {
        const bool branch_taken_0x1e6fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FBCu;
        // 0x1e6fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6fbc) {
            ctx->pc = 0x1E7018u;
            goto label_1e7018;
        }
    }
    ctx->pc = 0x1E6FC4u;
label_1e6fc4:
    // 0x1e6fc4: 0xc07845c  jal         func_1E1170
label_1e6fc8:
    if (ctx->pc == 0x1E6FC8u) {
        ctx->pc = 0x1E6FCCu;
        goto label_1e6fcc;
    }
    ctx->pc = 0x1E6FC4u;
    SET_GPR_U32(ctx, 31, 0x1E6FCCu);
    ctx->pc = 0x1E1170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1170u, 0x1E6FC4u, 0x1E6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6FCCu;
label_1e6fcc:
    // 0x1e6fcc: 0x82030072  lb          $v1, 0x72($s0)
    ctx->pc = 0x1e6fccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_1e6fd0:
    // 0x1e6fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6fd4:
    // 0x1e6fd4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1e6fd8:
    if (ctx->pc == 0x1E6FD8u) {
        ctx->pc = 0x1E6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FD4u;
        // 0x1e6fd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6FDCu;
        goto label_1e6fdc;
    }
    ctx->pc = 0x1E6FD4u;
    {
        const bool branch_taken_0x1e6fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FD4u;
        // 0x1e6fd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6fd4) {
            ctx->pc = 0x1E6FE4u;
            goto label_1e6fe4;
        }
    }
    ctx->pc = 0x1E6FDCu;
label_1e6fdc:
    // 0x1e6fdc: 0xc078618  jal         func_1E1860
label_1e6fe0:
    if (ctx->pc == 0x1E6FE0u) {
        ctx->pc = 0x1E6FE4u;
        goto label_1e6fe4;
    }
    ctx->pc = 0x1E6FDCu;
    SET_GPR_U32(ctx, 31, 0x1E6FE4u);
    ctx->pc = 0x1E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1860u, 0x1E6FDCu, 0x1E6FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6FE4u;
label_1e6fe4:
    // 0x1e6fe4: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x1e6fe4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_1e6fe8:
    // 0x1e6fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6fec:
    // 0x1e6fec: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_1e6ff0:
    if (ctx->pc == 0x1E6FF0u) {
        ctx->pc = 0x1E6FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FECu;
        // 0x1e6ff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6FF4u;
        goto label_1e6ff4;
    }
    ctx->pc = 0x1E6FECu;
    {
        const bool branch_taken_0x1e6fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6fec) {
            ctx->pc = 0x1E6FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6FECu;
            // 0x1e6ff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E701Cu;
            goto label_1e701c;
        }
    }
    ctx->pc = 0x1E6FF4u;
label_1e6ff4:
    // 0x1e6ff4: 0xc07ae14  jal         func_1EB850
label_1e6ff8:
    if (ctx->pc == 0x1E6FF8u) {
        ctx->pc = 0x1E6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FF4u;
        // 0x1e6ff8: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6FFCu;
        goto label_1e6ffc;
    }
    ctx->pc = 0x1E6FF4u;
    SET_GPR_U32(ctx, 31, 0x1E6FFCu);
    ctx->pc = 0x1E6FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6FF4u;
    // 0x1e6ff8: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB850u, 0x1E6FF4u, 0x1E6FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6FFCu;
label_1e6ffc:
    // 0x1e6ffc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e6ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1e7000:
    // 0x1e7000: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e7004:
    if (ctx->pc == 0x1E7004u) {
        ctx->pc = 0x1E7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7000u;
        // 0x1e7004: 0x2484e4f0  addiu       $a0, $a0, -0x1B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7008u;
        goto label_1e7008;
    }
    ctx->pc = 0x1E7000u;
    {
        const bool branch_taken_0x1e7000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7000u;
        // 0x1e7004: 0x2484e4f0  addiu       $a0, $a0, -0x1B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7000) {
            ctx->pc = 0x1E7018u;
            goto label_1e7018;
        }
    }
    ctx->pc = 0x1E7008u;
label_1e7008:
    // 0x1e7008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e700c:
    // 0x1e700c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e700cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e7010:
    // 0x1e7010: 0x8079afa  j           func_1E6BE8
label_1e7014:
    if (ctx->pc == 0x1E7014u) {
        ctx->pc = 0x1E7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7010u;
        // 0x1e7014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7018u;
        goto label_1e7018;
    }
    ctx->pc = 0x1E7010u;
    ctx->pc = 0x1E7014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7010u;
    // 0x1e7014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E7018u;
label_1e7018:
    // 0x1e7018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e701c:
    // 0x1e701c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e701cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e7020:
    // 0x1e7020: 0x3e00008  jr          $ra
label_1e7024:
    if (ctx->pc == 0x1E7024u) {
        ctx->pc = 0x1E7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7020u;
        // 0x1e7024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7028u;
        goto label_fallthrough_0x1e7020;
    }
    ctx->pc = 0x1E7020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7020u;
        // 0x1e7024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e7020:
    ctx->pc = 0x1E7028u;
}
