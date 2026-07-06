#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D7D10
// Address: 0x2d7d10 - 0x2d8088
void sub_002D7D10_0x2d7d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7D10_0x2d7d10");
#endif

    switch (ctx->pc) {
        case 0x2d7d10u: goto label_2d7d10;
        case 0x2d7d14u: goto label_2d7d14;
        case 0x2d7d18u: goto label_2d7d18;
        case 0x2d7d1cu: goto label_2d7d1c;
        case 0x2d7d20u: goto label_2d7d20;
        case 0x2d7d24u: goto label_2d7d24;
        case 0x2d7d28u: goto label_2d7d28;
        case 0x2d7d2cu: goto label_2d7d2c;
        case 0x2d7d30u: goto label_2d7d30;
        case 0x2d7d34u: goto label_2d7d34;
        case 0x2d7d38u: goto label_2d7d38;
        case 0x2d7d3cu: goto label_2d7d3c;
        case 0x2d7d40u: goto label_2d7d40;
        case 0x2d7d44u: goto label_2d7d44;
        case 0x2d7d48u: goto label_2d7d48;
        case 0x2d7d4cu: goto label_2d7d4c;
        case 0x2d7d50u: goto label_2d7d50;
        case 0x2d7d54u: goto label_2d7d54;
        case 0x2d7d58u: goto label_2d7d58;
        case 0x2d7d5cu: goto label_2d7d5c;
        case 0x2d7d60u: goto label_2d7d60;
        case 0x2d7d64u: goto label_2d7d64;
        case 0x2d7d68u: goto label_2d7d68;
        case 0x2d7d6cu: goto label_2d7d6c;
        case 0x2d7d70u: goto label_2d7d70;
        case 0x2d7d74u: goto label_2d7d74;
        case 0x2d7d78u: goto label_2d7d78;
        case 0x2d7d7cu: goto label_2d7d7c;
        case 0x2d7d80u: goto label_2d7d80;
        case 0x2d7d84u: goto label_2d7d84;
        case 0x2d7d88u: goto label_2d7d88;
        case 0x2d7d8cu: goto label_2d7d8c;
        case 0x2d7d90u: goto label_2d7d90;
        case 0x2d7d94u: goto label_2d7d94;
        case 0x2d7d98u: goto label_2d7d98;
        case 0x2d7d9cu: goto label_2d7d9c;
        case 0x2d7da0u: goto label_2d7da0;
        case 0x2d7da4u: goto label_2d7da4;
        case 0x2d7da8u: goto label_2d7da8;
        case 0x2d7dacu: goto label_2d7dac;
        case 0x2d7db0u: goto label_2d7db0;
        case 0x2d7db4u: goto label_2d7db4;
        case 0x2d7db8u: goto label_2d7db8;
        case 0x2d7dbcu: goto label_2d7dbc;
        case 0x2d7dc0u: goto label_2d7dc0;
        case 0x2d7dc4u: goto label_2d7dc4;
        case 0x2d7dc8u: goto label_2d7dc8;
        case 0x2d7dccu: goto label_2d7dcc;
        case 0x2d7dd0u: goto label_2d7dd0;
        case 0x2d7dd4u: goto label_2d7dd4;
        case 0x2d7dd8u: goto label_2d7dd8;
        case 0x2d7ddcu: goto label_2d7ddc;
        case 0x2d7de0u: goto label_2d7de0;
        case 0x2d7de4u: goto label_2d7de4;
        case 0x2d7de8u: goto label_2d7de8;
        case 0x2d7decu: goto label_2d7dec;
        case 0x2d7df0u: goto label_2d7df0;
        case 0x2d7df4u: goto label_2d7df4;
        case 0x2d7df8u: goto label_2d7df8;
        case 0x2d7dfcu: goto label_2d7dfc;
        case 0x2d7e00u: goto label_2d7e00;
        case 0x2d7e04u: goto label_2d7e04;
        case 0x2d7e08u: goto label_2d7e08;
        case 0x2d7e0cu: goto label_2d7e0c;
        case 0x2d7e10u: goto label_2d7e10;
        case 0x2d7e14u: goto label_2d7e14;
        case 0x2d7e18u: goto label_2d7e18;
        case 0x2d7e1cu: goto label_2d7e1c;
        case 0x2d7e20u: goto label_2d7e20;
        case 0x2d7e24u: goto label_2d7e24;
        case 0x2d7e28u: goto label_2d7e28;
        case 0x2d7e2cu: goto label_2d7e2c;
        case 0x2d7e30u: goto label_2d7e30;
        case 0x2d7e34u: goto label_2d7e34;
        case 0x2d7e38u: goto label_2d7e38;
        case 0x2d7e3cu: goto label_2d7e3c;
        case 0x2d7e40u: goto label_2d7e40;
        case 0x2d7e44u: goto label_2d7e44;
        case 0x2d7e48u: goto label_2d7e48;
        case 0x2d7e4cu: goto label_2d7e4c;
        case 0x2d7e50u: goto label_2d7e50;
        case 0x2d7e54u: goto label_2d7e54;
        case 0x2d7e58u: goto label_2d7e58;
        case 0x2d7e5cu: goto label_2d7e5c;
        case 0x2d7e60u: goto label_2d7e60;
        case 0x2d7e64u: goto label_2d7e64;
        case 0x2d7e68u: goto label_2d7e68;
        case 0x2d7e6cu: goto label_2d7e6c;
        case 0x2d7e70u: goto label_2d7e70;
        case 0x2d7e74u: goto label_2d7e74;
        case 0x2d7e78u: goto label_2d7e78;
        case 0x2d7e7cu: goto label_2d7e7c;
        case 0x2d7e80u: goto label_2d7e80;
        case 0x2d7e84u: goto label_2d7e84;
        case 0x2d7e88u: goto label_2d7e88;
        case 0x2d7e8cu: goto label_2d7e8c;
        case 0x2d7e90u: goto label_2d7e90;
        case 0x2d7e94u: goto label_2d7e94;
        case 0x2d7e98u: goto label_2d7e98;
        case 0x2d7e9cu: goto label_2d7e9c;
        case 0x2d7ea0u: goto label_2d7ea0;
        case 0x2d7ea4u: goto label_2d7ea4;
        case 0x2d7ea8u: goto label_2d7ea8;
        case 0x2d7eacu: goto label_2d7eac;
        case 0x2d7eb0u: goto label_2d7eb0;
        case 0x2d7eb4u: goto label_2d7eb4;
        case 0x2d7eb8u: goto label_2d7eb8;
        case 0x2d7ebcu: goto label_2d7ebc;
        case 0x2d7ec0u: goto label_2d7ec0;
        case 0x2d7ec4u: goto label_2d7ec4;
        case 0x2d7ec8u: goto label_2d7ec8;
        case 0x2d7eccu: goto label_2d7ecc;
        case 0x2d7ed0u: goto label_2d7ed0;
        case 0x2d7ed4u: goto label_2d7ed4;
        case 0x2d7ed8u: goto label_2d7ed8;
        case 0x2d7edcu: goto label_2d7edc;
        case 0x2d7ee0u: goto label_2d7ee0;
        case 0x2d7ee4u: goto label_2d7ee4;
        case 0x2d7ee8u: goto label_2d7ee8;
        case 0x2d7eecu: goto label_2d7eec;
        case 0x2d7ef0u: goto label_2d7ef0;
        case 0x2d7ef4u: goto label_2d7ef4;
        case 0x2d7ef8u: goto label_2d7ef8;
        case 0x2d7efcu: goto label_2d7efc;
        case 0x2d7f00u: goto label_2d7f00;
        case 0x2d7f04u: goto label_2d7f04;
        case 0x2d7f08u: goto label_2d7f08;
        case 0x2d7f0cu: goto label_2d7f0c;
        case 0x2d7f10u: goto label_2d7f10;
        case 0x2d7f14u: goto label_2d7f14;
        case 0x2d7f18u: goto label_2d7f18;
        case 0x2d7f1cu: goto label_2d7f1c;
        case 0x2d7f20u: goto label_2d7f20;
        case 0x2d7f24u: goto label_2d7f24;
        case 0x2d7f28u: goto label_2d7f28;
        case 0x2d7f2cu: goto label_2d7f2c;
        case 0x2d7f30u: goto label_2d7f30;
        case 0x2d7f34u: goto label_2d7f34;
        case 0x2d7f38u: goto label_2d7f38;
        case 0x2d7f3cu: goto label_2d7f3c;
        case 0x2d7f40u: goto label_2d7f40;
        case 0x2d7f44u: goto label_2d7f44;
        case 0x2d7f48u: goto label_2d7f48;
        case 0x2d7f4cu: goto label_2d7f4c;
        case 0x2d7f50u: goto label_2d7f50;
        case 0x2d7f54u: goto label_2d7f54;
        case 0x2d7f58u: goto label_2d7f58;
        case 0x2d7f5cu: goto label_2d7f5c;
        case 0x2d7f60u: goto label_2d7f60;
        case 0x2d7f64u: goto label_2d7f64;
        case 0x2d7f68u: goto label_2d7f68;
        case 0x2d7f6cu: goto label_2d7f6c;
        case 0x2d7f70u: goto label_2d7f70;
        case 0x2d7f74u: goto label_2d7f74;
        case 0x2d7f78u: goto label_2d7f78;
        case 0x2d7f7cu: goto label_2d7f7c;
        case 0x2d7f80u: goto label_2d7f80;
        case 0x2d7f84u: goto label_2d7f84;
        case 0x2d7f88u: goto label_2d7f88;
        case 0x2d7f8cu: goto label_2d7f8c;
        case 0x2d7f90u: goto label_2d7f90;
        case 0x2d7f94u: goto label_2d7f94;
        case 0x2d7f98u: goto label_2d7f98;
        case 0x2d7f9cu: goto label_2d7f9c;
        case 0x2d7fa0u: goto label_2d7fa0;
        case 0x2d7fa4u: goto label_2d7fa4;
        case 0x2d7fa8u: goto label_2d7fa8;
        case 0x2d7facu: goto label_2d7fac;
        case 0x2d7fb0u: goto label_2d7fb0;
        case 0x2d7fb4u: goto label_2d7fb4;
        case 0x2d7fb8u: goto label_2d7fb8;
        case 0x2d7fbcu: goto label_2d7fbc;
        case 0x2d7fc0u: goto label_2d7fc0;
        case 0x2d7fc4u: goto label_2d7fc4;
        case 0x2d7fc8u: goto label_2d7fc8;
        case 0x2d7fccu: goto label_2d7fcc;
        case 0x2d7fd0u: goto label_2d7fd0;
        case 0x2d7fd4u: goto label_2d7fd4;
        case 0x2d7fd8u: goto label_2d7fd8;
        case 0x2d7fdcu: goto label_2d7fdc;
        case 0x2d7fe0u: goto label_2d7fe0;
        case 0x2d7fe4u: goto label_2d7fe4;
        case 0x2d7fe8u: goto label_2d7fe8;
        case 0x2d7fecu: goto label_2d7fec;
        case 0x2d7ff0u: goto label_2d7ff0;
        case 0x2d7ff4u: goto label_2d7ff4;
        case 0x2d7ff8u: goto label_2d7ff8;
        case 0x2d7ffcu: goto label_2d7ffc;
        case 0x2d8000u: goto label_2d8000;
        case 0x2d8004u: goto label_2d8004;
        case 0x2d8008u: goto label_2d8008;
        case 0x2d800cu: goto label_2d800c;
        case 0x2d8010u: goto label_2d8010;
        case 0x2d8014u: goto label_2d8014;
        case 0x2d8018u: goto label_2d8018;
        case 0x2d801cu: goto label_2d801c;
        case 0x2d8020u: goto label_2d8020;
        case 0x2d8024u: goto label_2d8024;
        case 0x2d8028u: goto label_2d8028;
        case 0x2d802cu: goto label_2d802c;
        case 0x2d8030u: goto label_2d8030;
        case 0x2d8034u: goto label_2d8034;
        case 0x2d8038u: goto label_2d8038;
        case 0x2d803cu: goto label_2d803c;
        case 0x2d8040u: goto label_2d8040;
        case 0x2d8044u: goto label_2d8044;
        case 0x2d8048u: goto label_2d8048;
        case 0x2d804cu: goto label_2d804c;
        case 0x2d8050u: goto label_2d8050;
        case 0x2d8054u: goto label_2d8054;
        case 0x2d8058u: goto label_2d8058;
        case 0x2d805cu: goto label_2d805c;
        case 0x2d8060u: goto label_2d8060;
        case 0x2d8064u: goto label_2d8064;
        case 0x2d8068u: goto label_2d8068;
        case 0x2d806cu: goto label_2d806c;
        case 0x2d8070u: goto label_2d8070;
        case 0x2d8074u: goto label_2d8074;
        case 0x2d8078u: goto label_2d8078;
        case 0x2d807cu: goto label_2d807c;
        case 0x2d8080u: goto label_2d8080;
        case 0x2d8084u: goto label_2d8084;
        default: break;
    }

    ctx->pc = 0x2d7d10u;

label_2d7d10:
    // 0x2d7d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d7d14:
    // 0x2d7d14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d7d18:
    // 0x2d7d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d7d1c:
    // 0x2d7d1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d7d20:
    // 0x2d7d20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d7d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d7d24:
    // 0x2d7d24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d7d28:
    // 0x2d7d28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2d7d2c:
    if (ctx->pc == 0x2D7D2Cu) {
        ctx->pc = 0x2D7D2Cu;
            // 0x2d7d2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D30u;
        goto label_2d7d30;
    }
    ctx->pc = 0x2D7D28u;
    {
        const bool branch_taken_0x2d7d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D28u;
            // 0x2d7d2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d28) {
            ctx->pc = 0x2D7D38u;
            goto label_2d7d38;
        }
    }
    ctx->pc = 0x2D7D30u;
label_2d7d30:
    // 0x2d7d30: 0x40f809  jalr        $v0
label_2d7d34:
    if (ctx->pc == 0x2D7D34u) {
        ctx->pc = 0x2D7D34u;
            // 0x2d7d34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2D7D38u;
        goto label_2d7d38;
    }
    ctx->pc = 0x2D7D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D7D38u);
        ctx->pc = 0x2D7D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D30u;
            // 0x2d7d34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D7D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D38u; }
            if (ctx->pc != 0x2D7D38u) { return; }
        }
        }
    }
    ctx->pc = 0x2D7D38u;
label_2d7d38:
    // 0x2d7d38: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d7d3c:
    // 0x2d7d3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7d40:
    // 0x2d7d40: 0x10710010  beq         $v1, $s1, . + 4 + (0x10 << 2)
label_2d7d44:
    if (ctx->pc == 0x2D7D44u) {
        ctx->pc = 0x2D7D44u;
            // 0x2d7d44: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D48u;
        goto label_2d7d48;
    }
    ctx->pc = 0x2D7D40u;
    {
        const bool branch_taken_0x2d7d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D7D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D40u;
            // 0x2d7d44: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d40) {
            ctx->pc = 0x2D7D84u;
            goto label_2d7d84;
        }
    }
    ctx->pc = 0x2D7D48u;
label_2d7d48:
    // 0x2d7d48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7d4c:
    // 0x2d7d4c: 0xc0b608e  jal         func_2D8238
label_2d7d50:
    if (ctx->pc == 0x2D7D50u) {
        ctx->pc = 0x2D7D50u;
            // 0x2d7d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D54u;
        goto label_2d7d54;
    }
    ctx->pc = 0x2D7D4Cu;
    SET_GPR_U32(ctx, 31, 0x2D7D54u);
    ctx->pc = 0x2D7D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D4Cu;
            // 0x2d7d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D54u; }
        if (ctx->pc != 0x2D7D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D54u; }
        if (ctx->pc != 0x2D7D54u) { return; }
    }
    ctx->pc = 0x2D7D54u;
label_2d7d54:
    // 0x2d7d54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d7d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d7d58:
    // 0x2d7d58: 0xc0b60c0  jal         func_2D8300
label_2d7d5c:
    if (ctx->pc == 0x2D7D5Cu) {
        ctx->pc = 0x2D7D5Cu;
            // 0x2d7d5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D60u;
        goto label_2d7d60;
    }
    ctx->pc = 0x2D7D58u;
    SET_GPR_U32(ctx, 31, 0x2D7D60u);
    ctx->pc = 0x2D7D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D58u;
            // 0x2d7d5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8300u;
    if (runtime->hasFunction(0x2D8300u)) {
        auto targetFn = runtime->lookupFunction(0x2D8300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D60u; }
        if (ctx->pc != 0x2D7D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8300_0x2d8300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7D60u; }
        if (ctx->pc != 0x2D7D60u) { return; }
    }
    ctx->pc = 0x2D7D60u;
label_2d7d60:
    // 0x2d7d60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d7d60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7d64:
    // 0x2d7d64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7d68:
    // 0x2d7d68: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2d7d6c:
    if (ctx->pc == 0x2D7D6Cu) {
        ctx->pc = 0x2D7D6Cu;
            // 0x2d7d6c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2D7D70u;
        goto label_2d7d70;
    }
    ctx->pc = 0x2D7D68u;
    {
        const bool branch_taken_0x2d7d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D68u;
            // 0x2d7d6c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d68) {
            ctx->pc = 0x2D7D80u;
            goto label_2d7d80;
        }
    }
    ctx->pc = 0x2D7D70u;
label_2d7d70:
    // 0x2d7d70: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d7d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2d7d74:
    // 0x2d7d74: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d7d78:
    if (ctx->pc == 0x2D7D78u) {
        ctx->pc = 0x2D7D78u;
            // 0x2d7d78: 0x24020206  addiu       $v0, $zero, 0x206 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
        ctx->pc = 0x2D7D7Cu;
        goto label_2d7d7c;
    }
    ctx->pc = 0x2D7D74u;
    {
        const bool branch_taken_0x2d7d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D74u;
            // 0x2d7d78: 0x24020206  addiu       $v0, $zero, 0x206 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d74) {
            ctx->pc = 0x2D7D84u;
            goto label_2d7d84;
        }
    }
    ctx->pc = 0x2D7D7Cu;
label_2d7d7c:
    // 0x2d7d7c: 0x0  nop
    ctx->pc = 0x2d7d7cu;
    // NOP
label_2d7d80:
    // 0x2d7d80: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2d7d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_2d7d84:
    // 0x2d7d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d7d88:
    // 0x2d7d88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d7d8c:
    // 0x2d7d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d7d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d7d90:
    // 0x2d7d90: 0x3e00008  jr          $ra
label_2d7d94:
    if (ctx->pc == 0x2D7D94u) {
        ctx->pc = 0x2D7D94u;
            // 0x2d7d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2D7D98u;
        goto label_2d7d98;
    }
    ctx->pc = 0x2D7D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7D90u;
            // 0x2d7d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7D98u;
label_2d7d98:
    // 0x2d7d98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d7d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d7d9c:
    // 0x2d7d9c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d7d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2d7da0:
    // 0x2d7da0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d7da0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d7da4:
    // 0x2d7da4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d7da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2d7da8:
    // 0x2d7da8: 0x2674000c  addiu       $s4, $s3, 0xC
    ctx->pc = 0x2d7da8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_2d7dac:
    // 0x2d7dac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d7dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2d7db0:
    // 0x2d7db0: 0x26720018  addiu       $s2, $s3, 0x18
    ctx->pc = 0x2d7db0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_2d7db4:
    // 0x2d7db4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d7db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d7db8:
    // 0x2d7db8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d7db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2d7dbc:
    // 0x2d7dbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d7dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2d7dc0:
    // 0x2d7dc0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2d7dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2d7dc4:
    // 0x2d7dc4: 0xc0b4614  jal         func_2D1850
label_2d7dc8:
    if (ctx->pc == 0x2D7DC8u) {
        ctx->pc = 0x2D7DC8u;
            // 0x2d7dc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7DCCu;
        goto label_2d7dcc;
    }
    ctx->pc = 0x2D7DC4u;
    SET_GPR_U32(ctx, 31, 0x2D7DCCu);
    ctx->pc = 0x2D7DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7DC4u;
            // 0x2d7dc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DCCu; }
        if (ctx->pc != 0x2D7DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DCCu; }
        if (ctx->pc != 0x2D7DCCu) { return; }
    }
    ctx->pc = 0x2D7DCCu;
label_2d7dcc:
    // 0x2d7dcc: 0xc0b4614  jal         func_2D1850
label_2d7dd0:
    if (ctx->pc == 0x2D7DD0u) {
        ctx->pc = 0x2D7DD0u;
            // 0x2d7dd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7DD4u;
        goto label_2d7dd4;
    }
    ctx->pc = 0x2D7DCCu;
    SET_GPR_U32(ctx, 31, 0x2D7DD4u);
    ctx->pc = 0x2D7DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7DCCu;
            // 0x2d7dd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DD4u; }
        if (ctx->pc != 0x2D7DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DD4u; }
        if (ctx->pc != 0x2D7DD4u) { return; }
    }
    ctx->pc = 0x2D7DD4u;
label_2d7dd4:
    // 0x2d7dd4: 0xc0b4614  jal         func_2D1850
label_2d7dd8:
    if (ctx->pc == 0x2D7DD8u) {
        ctx->pc = 0x2D7DD8u;
            // 0x2d7dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7DDCu;
        goto label_2d7ddc;
    }
    ctx->pc = 0x2D7DD4u;
    SET_GPR_U32(ctx, 31, 0x2D7DDCu);
    ctx->pc = 0x2D7DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7DD4u;
            // 0x2d7dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DDCu; }
        if (ctx->pc != 0x2D7DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DDCu; }
        if (ctx->pc != 0x2D7DDCu) { return; }
    }
    ctx->pc = 0x2D7DDCu;
label_2d7ddc:
    // 0x2d7ddc: 0x10000014  b           . + 4 + (0x14 << 2)
label_2d7de0:
    if (ctx->pc == 0x2D7DE0u) {
        ctx->pc = 0x2D7DE0u;
            // 0x2d7de0: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2D7DE4u;
        goto label_2d7de4;
    }
    ctx->pc = 0x2D7DDCu;
    {
        const bool branch_taken_0x2d7ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7DDCu;
            // 0x2d7de0: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ddc) {
            ctx->pc = 0x2D7E30u;
            goto label_2d7e30;
        }
    }
    ctx->pc = 0x2D7DE4u;
label_2d7de4:
    // 0x2d7de4: 0x0  nop
    ctx->pc = 0x2d7de4u;
    // NOP
label_2d7de8:
    // 0x2d7de8: 0xc0b3f1a  jal         func_2CFC68
label_2d7dec:
    if (ctx->pc == 0x2D7DECu) {
        ctx->pc = 0x2D7DECu;
            // 0x2d7dec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7DF0u;
        goto label_2d7df0;
    }
    ctx->pc = 0x2D7DE8u;
    SET_GPR_U32(ctx, 31, 0x2D7DF0u);
    ctx->pc = 0x2D7DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7DE8u;
            // 0x2d7dec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DF0u; }
        if (ctx->pc != 0x2D7DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7DF0u; }
        if (ctx->pc != 0x2D7DF0u) { return; }
    }
    ctx->pc = 0x2D7DF0u;
label_2d7df0:
    // 0x2d7df0: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_2d7df4:
    if (ctx->pc == 0x2D7DF4u) {
        ctx->pc = 0x2D7DF4u;
            // 0x2d7df4: 0x24100011  addiu       $s0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x2D7DF8u;
        goto label_2d7df8;
    }
    ctx->pc = 0x2D7DF0u;
    {
        const bool branch_taken_0x2d7df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7df0) {
            ctx->pc = 0x2D7DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7DF0u;
            // 0x2d7df4: 0x24100011  addiu       $s0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D7E7Cu;
            goto label_2d7e7c;
        }
    }
    ctx->pc = 0x2D7DF8u;
label_2d7df8:
    // 0x2d7df8: 0xc0b4092  jal         func_2D0248
label_2d7dfc:
    if (ctx->pc == 0x2D7DFCu) {
        ctx->pc = 0x2D7DFCu;
            // 0x2d7dfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E00u;
        goto label_2d7e00;
    }
    ctx->pc = 0x2D7DF8u;
    SET_GPR_U32(ctx, 31, 0x2D7E00u);
    ctx->pc = 0x2D7DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7DF8u;
            // 0x2d7dfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0248u;
    if (runtime->hasFunction(0x2D0248u)) {
        auto targetFn = runtime->lookupFunction(0x2D0248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E00u; }
        if (ctx->pc != 0x2D7E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0248_0x2d0248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E00u; }
        if (ctx->pc != 0x2D7E00u) { return; }
    }
    ctx->pc = 0x2D7E00u;
label_2d7e00:
    // 0x2d7e00: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x2d7e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_2d7e04:
    // 0x2d7e04: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2d7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_2d7e08:
    // 0x2d7e08: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x2d7e08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_2d7e0c:
    // 0x2d7e0c: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x2d7e0cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_2d7e10:
    // 0x2d7e10: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x2d7e10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_2d7e14:
    // 0x2d7e14: 0xc0b60b8  jal         func_2D82E0
label_2d7e18:
    if (ctx->pc == 0x2D7E18u) {
        ctx->pc = 0x2D7E18u;
            // 0x2d7e18: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x2D7E1Cu;
        goto label_2d7e1c;
    }
    ctx->pc = 0x2D7E14u;
    SET_GPR_U32(ctx, 31, 0x2D7E1Cu);
    ctx->pc = 0x2D7E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E14u;
            // 0x2d7e18: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E1Cu; }
        if (ctx->pc != 0x2D7E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E1Cu; }
        if (ctx->pc != 0x2D7E1Cu) { return; }
    }
    ctx->pc = 0x2D7E1Cu;
label_2d7e1c:
    // 0x2d7e1c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2d7e20:
    if (ctx->pc == 0x2D7E20u) {
        ctx->pc = 0x2D7E20u;
            // 0x2d7e20: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x2D7E24u;
        goto label_2d7e24;
    }
    ctx->pc = 0x2D7E1Cu;
    {
        const bool branch_taken_0x2d7e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E1Cu;
            // 0x2d7e20: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e1c) {
            ctx->pc = 0x2D7E98u;
            goto label_2d7e98;
        }
    }
    ctx->pc = 0x2D7E24u;
label_2d7e24:
    // 0x2d7e24: 0x10000015  b           . + 4 + (0x15 << 2)
label_2d7e28:
    if (ctx->pc == 0x2D7E28u) {
        ctx->pc = 0x2D7E28u;
            // 0x2d7e28: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x2D7E2Cu;
        goto label_2d7e2c;
    }
    ctx->pc = 0x2D7E24u;
    {
        const bool branch_taken_0x2d7e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E24u;
            // 0x2d7e28: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e24) {
            ctx->pc = 0x2D7E7Cu;
            goto label_2d7e7c;
        }
    }
    ctx->pc = 0x2D7E2Cu;
label_2d7e2c:
    // 0x2d7e2c: 0x0  nop
    ctx->pc = 0x2d7e2cu;
    // NOP
label_2d7e30:
    // 0x2d7e30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d7e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d7e34:
    // 0x2d7e34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d7e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d7e38:
    // 0x2d7e38: 0xc0b4120  jal         func_2D0480
label_2d7e3c:
    if (ctx->pc == 0x2D7E3Cu) {
        ctx->pc = 0x2D7E3Cu;
            // 0x2d7e3c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2D7E40u;
        goto label_2d7e40;
    }
    ctx->pc = 0x2D7E38u;
    SET_GPR_U32(ctx, 31, 0x2D7E40u);
    ctx->pc = 0x2D7E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E38u;
            // 0x2d7e3c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0480u;
    if (runtime->hasFunction(0x2D0480u)) {
        auto targetFn = runtime->lookupFunction(0x2D0480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E40u; }
        if (ctx->pc != 0x2D7E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0480_0x2d0480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E40u; }
        if (ctx->pc != 0x2D7E40u) { return; }
    }
    ctx->pc = 0x2D7E40u;
label_2d7e40:
    // 0x2d7e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7e44:
    // 0x2d7e44: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_2d7e48:
    if (ctx->pc == 0x2D7E48u) {
        ctx->pc = 0x2D7E48u;
            // 0x2d7e48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E4Cu;
        goto label_2d7e4c;
    }
    ctx->pc = 0x2D7E44u;
    {
        const bool branch_taken_0x2d7e44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E44u;
            // 0x2d7e48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e44) {
            ctx->pc = 0x2D7E7Cu;
            goto label_2d7e7c;
        }
    }
    ctx->pc = 0x2D7E4Cu;
label_2d7e4c:
    // 0x2d7e4c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2d7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d7e50:
    // 0x2d7e50: 0xc0b4120  jal         func_2D0480
label_2d7e54:
    if (ctx->pc == 0x2D7E54u) {
        ctx->pc = 0x2D7E54u;
            // 0x2d7e54: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x2D7E58u;
        goto label_2d7e58;
    }
    ctx->pc = 0x2D7E50u;
    SET_GPR_U32(ctx, 31, 0x2D7E58u);
    ctx->pc = 0x2D7E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E50u;
            // 0x2d7e54: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D0480u;
    if (runtime->hasFunction(0x2D0480u)) {
        auto targetFn = runtime->lookupFunction(0x2D0480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E58u; }
        if (ctx->pc != 0x2D7E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0480_0x2d0480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E58u; }
        if (ctx->pc != 0x2D7E58u) { return; }
    }
    ctx->pc = 0x2D7E58u;
label_2d7e58:
    // 0x2d7e58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7e5c:
    // 0x2d7e5c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_2d7e60:
    if (ctx->pc == 0x2D7E60u) {
        ctx->pc = 0x2D7E64u;
        goto label_2d7e64;
    }
    ctx->pc = 0x2D7E5Cu;
    {
        const bool branch_taken_0x2d7e5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7e5c) {
            ctx->pc = 0x2D7E7Cu;
            goto label_2d7e7c;
        }
    }
    ctx->pc = 0x2D7E64u;
label_2d7e64:
    // 0x2d7e64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d7e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d7e68:
    // 0x2d7e68: 0xc0b422e  jal         func_2D08B8
label_2d7e6c:
    if (ctx->pc == 0x2D7E6Cu) {
        ctx->pc = 0x2D7E6Cu;
            // 0x2d7e6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E70u;
        goto label_2d7e70;
    }
    ctx->pc = 0x2D7E68u;
    SET_GPR_U32(ctx, 31, 0x2D7E70u);
    ctx->pc = 0x2D7E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E68u;
            // 0x2d7e6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D08B8u;
    if (runtime->hasFunction(0x2D08B8u)) {
        auto targetFn = runtime->lookupFunction(0x2D08B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E70u; }
        if (ctx->pc != 0x2D7E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D08B8_0x2d08b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E70u; }
        if (ctx->pc != 0x2D7E70u) { return; }
    }
    ctx->pc = 0x2D7E70u;
label_2d7e70:
    // 0x2d7e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7e74:
    // 0x2d7e74: 0x5200ffdc  beql        $s0, $zero, . + 4 + (-0x24 << 2)
label_2d7e78:
    if (ctx->pc == 0x2D7E78u) {
        ctx->pc = 0x2D7E78u;
            // 0x2d7e78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E7Cu;
        goto label_2d7e7c;
    }
    ctx->pc = 0x2D7E74u;
    {
        const bool branch_taken_0x2d7e74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7e74) {
            ctx->pc = 0x2D7E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E74u;
            // 0x2d7e78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D7DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d7de8;
        }
    }
    ctx->pc = 0x2D7E7Cu;
label_2d7e7c:
    // 0x2d7e7c: 0xc0b4618  jal         func_2D1860
label_2d7e80:
    if (ctx->pc == 0x2D7E80u) {
        ctx->pc = 0x2D7E80u;
            // 0x2d7e80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E84u;
        goto label_2d7e84;
    }
    ctx->pc = 0x2D7E7Cu;
    SET_GPR_U32(ctx, 31, 0x2D7E84u);
    ctx->pc = 0x2D7E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E7Cu;
            // 0x2d7e80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E84u; }
        if (ctx->pc != 0x2D7E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7E84u; }
        if (ctx->pc != 0x2D7E84u) { return; }
    }
    ctx->pc = 0x2D7E84u;
label_2d7e84:
    // 0x2d7e84: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2d7e88:
    if (ctx->pc == 0x2D7E88u) {
        ctx->pc = 0x2D7E88u;
            // 0x2d7e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E8Cu;
        goto label_2d7e8c;
    }
    ctx->pc = 0x2D7E84u;
    {
        const bool branch_taken_0x2d7e84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E84u;
            // 0x2d7e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e84) {
            ctx->pc = 0x2D7EA0u;
            goto label_2d7ea0;
        }
    }
    ctx->pc = 0x2D7E8Cu;
label_2d7e8c:
    // 0x2d7e8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2d7e90:
    if (ctx->pc == 0x2D7E90u) {
        ctx->pc = 0x2D7E90u;
            // 0x2d7e90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2D7E94u;
        goto label_2d7e94;
    }
    ctx->pc = 0x2D7E8Cu;
    {
        const bool branch_taken_0x2d7e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E8Cu;
            // 0x2d7e90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e8c) {
            ctx->pc = 0x2D7EACu;
            goto label_2d7eac;
        }
    }
    ctx->pc = 0x2D7E94u;
label_2d7e94:
    // 0x2d7e94: 0x0  nop
    ctx->pc = 0x2d7e94u;
    // NOP
label_2d7e98:
    // 0x2d7e98: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_2d7e9c:
    if (ctx->pc == 0x2D7E9Cu) {
        ctx->pc = 0x2D7E9Cu;
            // 0x2d7e9c: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2D7EA0u;
        goto label_2d7ea0;
    }
    ctx->pc = 0x2D7E98u;
    {
        const bool branch_taken_0x2d7e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7E98u;
            // 0x2d7e9c: 0x24100010  addiu       $s0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e98) {
            ctx->pc = 0x2D7E7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d7e7c;
        }
    }
    ctx->pc = 0x2D7EA0u;
label_2d7ea0:
    // 0x2d7ea0: 0xc0b220a  jal         func_2C8828
label_2d7ea4:
    if (ctx->pc == 0x2D7EA4u) {
        ctx->pc = 0x2D7EA4u;
            // 0x2d7ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7EA8u;
        goto label_2d7ea8;
    }
    ctx->pc = 0x2D7EA0u;
    SET_GPR_U32(ctx, 31, 0x2D7EA8u);
    ctx->pc = 0x2D7EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7EA0u;
            // 0x2d7ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8828u;
    if (runtime->hasFunction(0x2C8828u)) {
        auto targetFn = runtime->lookupFunction(0x2C8828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7EA8u; }
        if (ctx->pc != 0x2D7EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8828_0x2c8828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7EA8u; }
        if (ctx->pc != 0x2D7EA8u) { return; }
    }
    ctx->pc = 0x2D7EA8u;
label_2d7ea8:
    // 0x2d7ea8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d7ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d7eac:
    // 0x2d7eac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d7eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d7eb0:
    // 0x2d7eb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d7eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d7eb4:
    // 0x2d7eb4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d7eb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d7eb8:
    // 0x2d7eb8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d7eb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d7ebc:
    // 0x2d7ebc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d7ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d7ec0:
    // 0x2d7ec0: 0x3e00008  jr          $ra
label_2d7ec4:
    if (ctx->pc == 0x2D7EC4u) {
        ctx->pc = 0x2D7EC4u;
            // 0x2d7ec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2D7EC8u;
        goto label_2d7ec8;
    }
    ctx->pc = 0x2D7EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7EC0u;
            // 0x2d7ec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7EC8u;
label_2d7ec8:
    // 0x2d7ec8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d7ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2d7ecc:
    // 0x2d7ecc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d7eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2d7ed0:
    // 0x2d7ed0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2d7ed0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d7ed4:
    // 0x2d7ed4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d7ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2d7ed8:
    // 0x2d7ed8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d7ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d7edc:
    // 0x2d7edc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d7edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2d7ee0:
    // 0x2d7ee0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2d7ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2d7ee4:
    // 0x2d7ee4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d7ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2d7ee8:
    // 0x2d7ee8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d7ee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d7eec:
    // 0x2d7eec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d7eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2d7ef0:
    // 0x2d7ef0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d7ef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d7ef4:
    // 0x2d7ef4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d7ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2d7ef8:
    // 0x2d7ef8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2d7ef8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d7efc:
    // 0x2d7efc: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2d7efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_2d7f00:
    // 0x2d7f00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d7f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2d7f04:
    // 0x2d7f04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d7f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2d7f08:
    // 0x2d7f08: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2d7f08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_2d7f0c:
    // 0x2d7f0c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d7f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d7f10:
    // 0x2d7f10: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d7f10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d7f14:
    // 0x2d7f14: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2d7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2d7f18:
    // 0x2d7f18: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2d7f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2d7f1c:
    // 0x2d7f1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2d7f20:
    if (ctx->pc == 0x2D7F20u) {
        ctx->pc = 0x2D7F20u;
            // 0x2d7f20: 0x140b82d  daddu       $s7, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F24u;
        goto label_2d7f24;
    }
    ctx->pc = 0x2D7F1Cu;
    {
        const bool branch_taken_0x2d7f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F1Cu;
            // 0x2d7f20: 0x140b82d  daddu       $s7, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f1c) {
            ctx->pc = 0x2D7F50u;
            goto label_2d7f50;
        }
    }
    ctx->pc = 0x2D7F24u;
label_2d7f24:
    // 0x2d7f24: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2d7f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d7f28:
    // 0x2d7f28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d7f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d7f2c:
    // 0x2d7f2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d7f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d7f30:
    // 0x2d7f30: 0xc0b6098  jal         func_2D8260
label_2d7f34:
    if (ctx->pc == 0x2D7F34u) {
        ctx->pc = 0x2D7F34u;
            // 0x2d7f34: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x2D7F38u;
        goto label_2d7f38;
    }
    ctx->pc = 0x2D7F30u;
    SET_GPR_U32(ctx, 31, 0x2D7F38u);
    ctx->pc = 0x2D7F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F30u;
            // 0x2d7f34: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F38u; }
        if (ctx->pc != 0x2D7F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F38u; }
        if (ctx->pc != 0x2D7F38u) { return; }
    }
    ctx->pc = 0x2D7F38u;
label_2d7f38:
    // 0x2d7f38: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d7f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d7f3c:
    // 0x2d7f3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7f40:
    // 0x2d7f40: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2d7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2d7f44:
    // 0x2d7f44: 0x1000003d  b           . + 4 + (0x3D << 2)
label_2d7f48:
    if (ctx->pc == 0x2D7F48u) {
        ctx->pc = 0x2D7F48u;
            // 0x2d7f48: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x2D7F4Cu;
        goto label_2d7f4c;
    }
    ctx->pc = 0x2D7F44u;
    {
        const bool branch_taken_0x2d7f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F44u;
            // 0x2d7f48: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f44) {
            ctx->pc = 0x2D803Cu;
            goto label_2d803c;
        }
    }
    ctx->pc = 0x2D7F4Cu;
label_2d7f4c:
    // 0x2d7f4c: 0x0  nop
    ctx->pc = 0x2d7f4cu;
    // NOP
label_2d7f50:
    // 0x2d7f50: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_2d7f54:
    if (ctx->pc == 0x2D7F54u) {
        ctx->pc = 0x2D7F54u;
            // 0x2d7f54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F58u;
        goto label_2d7f58;
    }
    ctx->pc = 0x2D7F50u;
    {
        const bool branch_taken_0x2d7f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F50u;
            // 0x2d7f54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f50) {
            ctx->pc = 0x2D7FC0u;
            goto label_2d7fc0;
        }
    }
    ctx->pc = 0x2D7F58u;
label_2d7f58:
    // 0x2d7f58: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2d7f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d7f5c:
    // 0x2d7f5c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x2d7f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2d7f60:
    // 0x2d7f60: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2d7f60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2d7f64:
    // 0x2d7f64: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d7f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2d7f68:
    // 0x2d7f68: 0xc0b6098  jal         func_2D8260
label_2d7f6c:
    if (ctx->pc == 0x2D7F6Cu) {
        ctx->pc = 0x2D7F6Cu;
            // 0x2d7f6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F70u;
        goto label_2d7f70;
    }
    ctx->pc = 0x2D7F68u;
    SET_GPR_U32(ctx, 31, 0x2D7F70u);
    ctx->pc = 0x2D7F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F68u;
            // 0x2d7f6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F70u; }
        if (ctx->pc != 0x2D7F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F70u; }
        if (ctx->pc != 0x2D7F70u) { return; }
    }
    ctx->pc = 0x2D7F70u;
label_2d7f70:
    // 0x2d7f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d7f74:
    // 0x2d7f74: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2d7f74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d7f78:
    // 0x2d7f78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d7f7c:
    // 0x2d7f7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d7f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d7f80:
    // 0x2d7f80: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d7f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d7f84:
    // 0x2d7f84: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2d7f84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d7f88:
    // 0x2d7f88: 0xc0b6022  jal         func_2D8088
label_2d7f8c:
    if (ctx->pc == 0x2D7F8Cu) {
        ctx->pc = 0x2D7F8Cu;
            // 0x2d7f8c: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->pc = 0x2D7F90u;
        goto label_2d7f90;
    }
    ctx->pc = 0x2D7F88u;
    SET_GPR_U32(ctx, 31, 0x2D7F90u);
    ctx->pc = 0x2D7F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F88u;
            // 0x2d7f8c: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8088u;
    if (runtime->hasFunction(0x2D8088u)) {
        auto targetFn = runtime->lookupFunction(0x2D8088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F90u; }
        if (ctx->pc != 0x2D7F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8088_0x2d8088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7F90u; }
        if (ctx->pc != 0x2D7F90u) { return; }
    }
    ctx->pc = 0x2D7F90u;
label_2d7f90:
    // 0x2d7f90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2d7f94:
    if (ctx->pc == 0x2D7F94u) {
        ctx->pc = 0x2D7F94u;
            // 0x2d7f94: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2D7F98u;
        goto label_2d7f98;
    }
    ctx->pc = 0x2D7F90u;
    {
        const bool branch_taken_0x2d7f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7f90) {
            ctx->pc = 0x2D7F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F90u;
            // 0x2d7f94: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D7FA8u;
            goto label_2d7fa8;
        }
    }
    ctx->pc = 0x2D7F98u;
label_2d7f98:
    // 0x2d7f98: 0xc0b220a  jal         func_2C8828
label_2d7f9c:
    if (ctx->pc == 0x2D7F9Cu) {
        ctx->pc = 0x2D7F9Cu;
            // 0x2d7f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FA0u;
        goto label_2d7fa0;
    }
    ctx->pc = 0x2D7F98u;
    SET_GPR_U32(ctx, 31, 0x2D7FA0u);
    ctx->pc = 0x2D7F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7F98u;
            // 0x2d7f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8828u;
    if (runtime->hasFunction(0x2C8828u)) {
        auto targetFn = runtime->lookupFunction(0x2C8828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7FA0u; }
        if (ctx->pc != 0x2D7FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8828_0x2c8828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7FA0u; }
        if (ctx->pc != 0x2D7FA0u) { return; }
    }
    ctx->pc = 0x2D7FA0u;
label_2d7fa0:
    // 0x2d7fa0: 0x10000027  b           . + 4 + (0x27 << 2)
label_2d7fa4:
    if (ctx->pc == 0x2D7FA4u) {
        ctx->pc = 0x2D7FA4u;
            // 0x2d7fa4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2D7FA8u;
        goto label_2d7fa8;
    }
    ctx->pc = 0x2D7FA0u;
    {
        const bool branch_taken_0x2d7fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7FA0u;
            // 0x2d7fa4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7fa0) {
            ctx->pc = 0x2D8040u;
            goto label_2d8040;
        }
    }
    ctx->pc = 0x2D7FA8u;
label_2d7fa8:
    // 0x2d7fa8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2d7fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2d7fac:
    // 0x2d7fac: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x2d7facu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2d7fb0:
    // 0x2d7fb0: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x2d7fb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2d7fb4:
    // 0x2d7fb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d7fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d7fb8:
    // 0x2d7fb8: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x2d7fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_2d7fbc:
    // 0x2d7fbc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d7fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d7fc0:
    // 0x2d7fc0: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2d7fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2d7fc4:
    // 0x2d7fc4: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2d7fc8:
    if (ctx->pc == 0x2D7FC8u) {
        ctx->pc = 0x2D7FC8u;
            // 0x2d7fc8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2D7FCCu;
        goto label_2d7fcc;
    }
    ctx->pc = 0x2D7FC4u;
    {
        const bool branch_taken_0x2d7fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7fc4) {
            ctx->pc = 0x2D7FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7FC4u;
            // 0x2d7fc8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8028u;
            goto label_2d8028;
        }
    }
    ctx->pc = 0x2D7FCCu;
label_2d7fcc:
    // 0x2d7fcc: 0x0  nop
    ctx->pc = 0x2d7fccu;
    // NOP
label_2d7fd0:
    // 0x2d7fd0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fd4:
    // 0x2d7fd4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d7fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fd8:
    // 0x2d7fd8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2d7fd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fdc:
    // 0x2d7fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fe0:
    // 0x2d7fe0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d7fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fe4:
    // 0x2d7fe4: 0xc0b6022  jal         func_2D8088
label_2d7fe8:
    if (ctx->pc == 0x2D7FE8u) {
        ctx->pc = 0x2D7FE8u;
            // 0x2d7fe8: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FECu;
        goto label_2d7fec;
    }
    ctx->pc = 0x2D7FE4u;
    SET_GPR_U32(ctx, 31, 0x2D7FECu);
    ctx->pc = 0x2D7FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7FE4u;
            // 0x2d7fe8: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8088u;
    if (runtime->hasFunction(0x2D8088u)) {
        auto targetFn = runtime->lookupFunction(0x2D8088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7FECu; }
        if (ctx->pc != 0x2D7FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8088_0x2d8088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7FECu; }
        if (ctx->pc != 0x2D7FECu) { return; }
    }
    ctx->pc = 0x2D7FECu;
label_2d7fec:
    // 0x2d7fec: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_2d7ff0:
    if (ctx->pc == 0x2D7FF0u) {
        ctx->pc = 0x2D7FF4u;
        goto label_2d7ff4;
    }
    ctx->pc = 0x2D7FECu;
    {
        const bool branch_taken_0x2d7fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7fec) {
            ctx->pc = 0x2D7F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d7f98;
        }
    }
    ctx->pc = 0x2D7FF4u;
label_2d7ff4:
    // 0x2d7ff4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d7ff8:
    // 0x2d7ff8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2d7ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2d7ffc:
    // 0x2d7ffc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d7ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8000:
    // 0x2d8000: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x2d8000u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2d8004:
    // 0x2d8004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d8004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d8008:
    // 0x2d8008: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x2d8008u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2d800c:
    // 0x2d800c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x2d800cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_2d8010:
    // 0x2d8010: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x2d8010u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2d8014:
    // 0x2d8014: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d8014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8018:
    // 0x2d8018: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2d8018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d801c:
    // 0x2d801c: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
label_2d8020:
    if (ctx->pc == 0x2D8020u) {
        ctx->pc = 0x2D8020u;
            // 0x2d8020: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->pc = 0x2D8024u;
        goto label_2d8024;
    }
    ctx->pc = 0x2D801Cu;
    {
        const bool branch_taken_0x2d801c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D801Cu;
            // 0x2d8020: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d801c) {
            ctx->pc = 0x2D7FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d7fd0;
        }
    }
    ctx->pc = 0x2D8024u;
label_2d8024:
    // 0x2d8024: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2d8024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d8028:
    // 0x2d8028: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d8028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d802c:
    // 0x2d802c: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x2d802cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
label_2d8030:
    // 0x2d8030: 0xc0b6098  jal         func_2D8260
label_2d8034:
    if (ctx->pc == 0x2D8034u) {
        ctx->pc = 0x2D8034u;
            // 0x2d8034: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8038u;
        goto label_2d8038;
    }
    ctx->pc = 0x2D8030u;
    SET_GPR_U32(ctx, 31, 0x2D8038u);
    ctx->pc = 0x2D8034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8030u;
            // 0x2d8034: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8038u; }
        if (ctx->pc != 0x2D8038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8038u; }
        if (ctx->pc != 0x2D8038u) { return; }
    }
    ctx->pc = 0x2D8038u;
label_2d8038:
    // 0x2d8038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d803c:
    // 0x2d803c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d803cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8040:
    // 0x2d8040: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d8040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d8044:
    // 0x2d8044: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d8044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8048:
    // 0x2d8048: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d8048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d804c:
    // 0x2d804c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d804cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d8050:
    // 0x2d8050: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d8050u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d8054:
    // 0x2d8054: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d8054u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d8058:
    // 0x2d8058: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d8058u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d805c:
    // 0x2d805c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d805cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d8060:
    // 0x2d8060: 0x3e00008  jr          $ra
label_2d8064:
    if (ctx->pc == 0x2D8064u) {
        ctx->pc = 0x2D8064u;
            // 0x2d8064: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2D8068u;
        goto label_2d8068;
    }
    ctx->pc = 0x2D8060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8060u;
            // 0x2d8064: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8068u;
label_2d8068:
    // 0x2d8068: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d8068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2d806c:
    // 0x2d806c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2d8070:
    if (ctx->pc == 0x2D8070u) {
        ctx->pc = 0x2D8070u;
            // 0x2d8070: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2D8074u;
        goto label_2d8074;
    }
    ctx->pc = 0x2D806Cu;
    {
        const bool branch_taken_0x2d806c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D806Cu;
            // 0x2d8070: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d806c) {
            ctx->pc = 0x2D807Cu;
            goto label_2d807c;
        }
    }
    ctx->pc = 0x2D8074u;
label_2d8074:
    // 0x2d8074: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2d8074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_2d8078:
    // 0x2d8078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d807c:
    // 0x2d807c: 0x3e00008  jr          $ra
label_2d8080:
    if (ctx->pc == 0x2D8080u) {
        ctx->pc = 0x2D8084u;
        goto label_2d8084;
    }
    ctx->pc = 0x2D807Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8084u;
label_2d8084:
    // 0x2d8084: 0x0  nop
    ctx->pc = 0x2d8084u;
    // NOP
    ctx->pc = 0x2d8088u;
}
