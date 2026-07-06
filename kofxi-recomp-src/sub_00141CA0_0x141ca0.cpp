#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00141CA0
// Address: 0x141ca0 - 0x142040
void sub_00141CA0_0x141ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141CA0_0x141ca0");
#endif

    switch (ctx->pc) {
        case 0x141ca0u: goto label_141ca0;
        case 0x141ca4u: goto label_141ca4;
        case 0x141ca8u: goto label_141ca8;
        case 0x141cacu: goto label_141cac;
        case 0x141cb0u: goto label_141cb0;
        case 0x141cb4u: goto label_141cb4;
        case 0x141cb8u: goto label_141cb8;
        case 0x141cbcu: goto label_141cbc;
        case 0x141cc0u: goto label_141cc0;
        case 0x141cc4u: goto label_141cc4;
        case 0x141cc8u: goto label_141cc8;
        case 0x141cccu: goto label_141ccc;
        case 0x141cd0u: goto label_141cd0;
        case 0x141cd4u: goto label_141cd4;
        case 0x141cd8u: goto label_141cd8;
        case 0x141cdcu: goto label_141cdc;
        case 0x141ce0u: goto label_141ce0;
        case 0x141ce4u: goto label_141ce4;
        case 0x141ce8u: goto label_141ce8;
        case 0x141cecu: goto label_141cec;
        case 0x141cf0u: goto label_141cf0;
        case 0x141cf4u: goto label_141cf4;
        case 0x141cf8u: goto label_141cf8;
        case 0x141cfcu: goto label_141cfc;
        case 0x141d00u: goto label_141d00;
        case 0x141d04u: goto label_141d04;
        case 0x141d08u: goto label_141d08;
        case 0x141d0cu: goto label_141d0c;
        case 0x141d10u: goto label_141d10;
        case 0x141d14u: goto label_141d14;
        case 0x141d18u: goto label_141d18;
        case 0x141d1cu: goto label_141d1c;
        case 0x141d20u: goto label_141d20;
        case 0x141d24u: goto label_141d24;
        case 0x141d28u: goto label_141d28;
        case 0x141d2cu: goto label_141d2c;
        case 0x141d30u: goto label_141d30;
        case 0x141d34u: goto label_141d34;
        case 0x141d38u: goto label_141d38;
        case 0x141d3cu: goto label_141d3c;
        case 0x141d40u: goto label_141d40;
        case 0x141d44u: goto label_141d44;
        case 0x141d48u: goto label_141d48;
        case 0x141d4cu: goto label_141d4c;
        case 0x141d50u: goto label_141d50;
        case 0x141d54u: goto label_141d54;
        case 0x141d58u: goto label_141d58;
        case 0x141d5cu: goto label_141d5c;
        case 0x141d60u: goto label_141d60;
        case 0x141d64u: goto label_141d64;
        case 0x141d68u: goto label_141d68;
        case 0x141d6cu: goto label_141d6c;
        case 0x141d70u: goto label_141d70;
        case 0x141d74u: goto label_141d74;
        case 0x141d78u: goto label_141d78;
        case 0x141d7cu: goto label_141d7c;
        case 0x141d80u: goto label_141d80;
        case 0x141d84u: goto label_141d84;
        case 0x141d88u: goto label_141d88;
        case 0x141d8cu: goto label_141d8c;
        case 0x141d90u: goto label_141d90;
        case 0x141d94u: goto label_141d94;
        case 0x141d98u: goto label_141d98;
        case 0x141d9cu: goto label_141d9c;
        case 0x141da0u: goto label_141da0;
        case 0x141da4u: goto label_141da4;
        case 0x141da8u: goto label_141da8;
        case 0x141dacu: goto label_141dac;
        case 0x141db0u: goto label_141db0;
        case 0x141db4u: goto label_141db4;
        case 0x141db8u: goto label_141db8;
        case 0x141dbcu: goto label_141dbc;
        case 0x141dc0u: goto label_141dc0;
        case 0x141dc4u: goto label_141dc4;
        case 0x141dc8u: goto label_141dc8;
        case 0x141dccu: goto label_141dcc;
        case 0x141dd0u: goto label_141dd0;
        case 0x141dd4u: goto label_141dd4;
        case 0x141dd8u: goto label_141dd8;
        case 0x141ddcu: goto label_141ddc;
        case 0x141de0u: goto label_141de0;
        case 0x141de4u: goto label_141de4;
        case 0x141de8u: goto label_141de8;
        case 0x141decu: goto label_141dec;
        case 0x141df0u: goto label_141df0;
        case 0x141df4u: goto label_141df4;
        case 0x141df8u: goto label_141df8;
        case 0x141dfcu: goto label_141dfc;
        case 0x141e00u: goto label_141e00;
        case 0x141e04u: goto label_141e04;
        case 0x141e08u: goto label_141e08;
        case 0x141e0cu: goto label_141e0c;
        case 0x141e10u: goto label_141e10;
        case 0x141e14u: goto label_141e14;
        case 0x141e18u: goto label_141e18;
        case 0x141e1cu: goto label_141e1c;
        case 0x141e20u: goto label_141e20;
        case 0x141e24u: goto label_141e24;
        case 0x141e28u: goto label_141e28;
        case 0x141e2cu: goto label_141e2c;
        case 0x141e30u: goto label_141e30;
        case 0x141e34u: goto label_141e34;
        case 0x141e38u: goto label_141e38;
        case 0x141e3cu: goto label_141e3c;
        case 0x141e40u: goto label_141e40;
        case 0x141e44u: goto label_141e44;
        case 0x141e48u: goto label_141e48;
        case 0x141e4cu: goto label_141e4c;
        case 0x141e50u: goto label_141e50;
        case 0x141e54u: goto label_141e54;
        case 0x141e58u: goto label_141e58;
        case 0x141e5cu: goto label_141e5c;
        case 0x141e60u: goto label_141e60;
        case 0x141e64u: goto label_141e64;
        case 0x141e68u: goto label_141e68;
        case 0x141e6cu: goto label_141e6c;
        case 0x141e70u: goto label_141e70;
        case 0x141e74u: goto label_141e74;
        case 0x141e78u: goto label_141e78;
        case 0x141e7cu: goto label_141e7c;
        case 0x141e80u: goto label_141e80;
        case 0x141e84u: goto label_141e84;
        case 0x141e88u: goto label_141e88;
        case 0x141e8cu: goto label_141e8c;
        case 0x141e90u: goto label_141e90;
        case 0x141e94u: goto label_141e94;
        case 0x141e98u: goto label_141e98;
        case 0x141e9cu: goto label_141e9c;
        case 0x141ea0u: goto label_141ea0;
        case 0x141ea4u: goto label_141ea4;
        case 0x141ea8u: goto label_141ea8;
        case 0x141eacu: goto label_141eac;
        case 0x141eb0u: goto label_141eb0;
        case 0x141eb4u: goto label_141eb4;
        case 0x141eb8u: goto label_141eb8;
        case 0x141ebcu: goto label_141ebc;
        case 0x141ec0u: goto label_141ec0;
        case 0x141ec4u: goto label_141ec4;
        case 0x141ec8u: goto label_141ec8;
        case 0x141eccu: goto label_141ecc;
        case 0x141ed0u: goto label_141ed0;
        case 0x141ed4u: goto label_141ed4;
        case 0x141ed8u: goto label_141ed8;
        case 0x141edcu: goto label_141edc;
        case 0x141ee0u: goto label_141ee0;
        case 0x141ee4u: goto label_141ee4;
        case 0x141ee8u: goto label_141ee8;
        case 0x141eecu: goto label_141eec;
        case 0x141ef0u: goto label_141ef0;
        case 0x141ef4u: goto label_141ef4;
        case 0x141ef8u: goto label_141ef8;
        case 0x141efcu: goto label_141efc;
        case 0x141f00u: goto label_141f00;
        case 0x141f04u: goto label_141f04;
        case 0x141f08u: goto label_141f08;
        case 0x141f0cu: goto label_141f0c;
        case 0x141f10u: goto label_141f10;
        case 0x141f14u: goto label_141f14;
        case 0x141f18u: goto label_141f18;
        case 0x141f1cu: goto label_141f1c;
        case 0x141f20u: goto label_141f20;
        case 0x141f24u: goto label_141f24;
        case 0x141f28u: goto label_141f28;
        case 0x141f2cu: goto label_141f2c;
        case 0x141f30u: goto label_141f30;
        case 0x141f34u: goto label_141f34;
        case 0x141f38u: goto label_141f38;
        case 0x141f3cu: goto label_141f3c;
        case 0x141f40u: goto label_141f40;
        case 0x141f44u: goto label_141f44;
        case 0x141f48u: goto label_141f48;
        case 0x141f4cu: goto label_141f4c;
        case 0x141f50u: goto label_141f50;
        case 0x141f54u: goto label_141f54;
        case 0x141f58u: goto label_141f58;
        case 0x141f5cu: goto label_141f5c;
        case 0x141f60u: goto label_141f60;
        case 0x141f64u: goto label_141f64;
        case 0x141f68u: goto label_141f68;
        case 0x141f6cu: goto label_141f6c;
        case 0x141f70u: goto label_141f70;
        case 0x141f74u: goto label_141f74;
        case 0x141f78u: goto label_141f78;
        case 0x141f7cu: goto label_141f7c;
        case 0x141f80u: goto label_141f80;
        case 0x141f84u: goto label_141f84;
        case 0x141f88u: goto label_141f88;
        case 0x141f8cu: goto label_141f8c;
        case 0x141f90u: goto label_141f90;
        case 0x141f94u: goto label_141f94;
        case 0x141f98u: goto label_141f98;
        case 0x141f9cu: goto label_141f9c;
        case 0x141fa0u: goto label_141fa0;
        case 0x141fa4u: goto label_141fa4;
        case 0x141fa8u: goto label_141fa8;
        case 0x141facu: goto label_141fac;
        case 0x141fb0u: goto label_141fb0;
        case 0x141fb4u: goto label_141fb4;
        case 0x141fb8u: goto label_141fb8;
        case 0x141fbcu: goto label_141fbc;
        case 0x141fc0u: goto label_141fc0;
        case 0x141fc4u: goto label_141fc4;
        case 0x141fc8u: goto label_141fc8;
        case 0x141fccu: goto label_141fcc;
        case 0x141fd0u: goto label_141fd0;
        case 0x141fd4u: goto label_141fd4;
        case 0x141fd8u: goto label_141fd8;
        case 0x141fdcu: goto label_141fdc;
        case 0x141fe0u: goto label_141fe0;
        case 0x141fe4u: goto label_141fe4;
        case 0x141fe8u: goto label_141fe8;
        case 0x141fecu: goto label_141fec;
        case 0x141ff0u: goto label_141ff0;
        case 0x141ff4u: goto label_141ff4;
        case 0x141ff8u: goto label_141ff8;
        case 0x141ffcu: goto label_141ffc;
        case 0x142000u: goto label_142000;
        case 0x142004u: goto label_142004;
        case 0x142008u: goto label_142008;
        case 0x14200cu: goto label_14200c;
        case 0x142010u: goto label_142010;
        case 0x142014u: goto label_142014;
        case 0x142018u: goto label_142018;
        case 0x14201cu: goto label_14201c;
        case 0x142020u: goto label_142020;
        case 0x142024u: goto label_142024;
        case 0x142028u: goto label_142028;
        case 0x14202cu: goto label_14202c;
        case 0x142030u: goto label_142030;
        case 0x142034u: goto label_142034;
        case 0x142038u: goto label_142038;
        case 0x14203cu: goto label_14203c;
        default: break;
    }

    ctx->pc = 0x141ca0u;

label_141ca0:
    // 0x141ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_141ca4:
    // 0x141ca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_141ca8:
    // 0x141ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_141cac:
    // 0x141cac: 0xc063624  jal         func_18D890
label_141cb0:
    if (ctx->pc == 0x141CB0u) {
        ctx->pc = 0x141CB0u;
            // 0x141cb0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141CB4u;
        goto label_141cb4;
    }
    ctx->pc = 0x141CACu;
    SET_GPR_U32(ctx, 31, 0x141CB4u);
    ctx->pc = 0x141CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141CACu;
            // 0x141cb0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CB4u; }
        if (ctx->pc != 0x141CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D890_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141CB4u; }
        if (ctx->pc != 0x141CB4u) { return; }
    }
    ctx->pc = 0x141CB4u;
label_141cb4:
    // 0x141cb4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x141cb4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_141cb8:
    // 0x141cb8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x141cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_141cbc:
    // 0x141cbc: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x141cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_141cc0:
    // 0x141cc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_141cc4:
    // 0x141cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_141cc8:
    // 0x141cc8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x141cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_141ccc:
    // 0x141ccc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x141cccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_141cd0:
    // 0x141cd0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x141cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_141cd4:
    // 0x141cd4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x141cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_141cd8:
    // 0x141cd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_141cdc:
    // 0x141cdc: 0x3e00008  jr          $ra
label_141ce0:
    if (ctx->pc == 0x141CE0u) {
        ctx->pc = 0x141CE0u;
            // 0x141ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x141CE4u;
        goto label_141ce4;
    }
    ctx->pc = 0x141CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141CDCu;
            // 0x141ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141CE4u;
label_141ce4:
    // 0x141ce4: 0x0  nop
    ctx->pc = 0x141ce4u;
    // NOP
label_141ce8:
    // 0x141ce8: 0x0  nop
    ctx->pc = 0x141ce8u;
    // NOP
label_141cec:
    // 0x141cec: 0x0  nop
    ctx->pc = 0x141cecu;
    // NOP
label_141cf0:
    // 0x141cf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x141cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_141cf4:
    // 0x141cf4: 0x3c020180  lui         $v0, 0x180
    ctx->pc = 0x141cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)384 << 16));
label_141cf8:
    // 0x141cf8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x141cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_141cfc:
    // 0x141cfc: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x141cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
label_141d00:
    // 0x141d00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x141d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_141d04:
    // 0x141d04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x141d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_141d08:
    // 0x141d08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x141d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_141d0c:
    // 0x141d0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_141d10:
    // 0x141d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_141d14:
    // 0x141d14: 0x8c930010  lw          $s3, 0x10($a0)
    ctx->pc = 0x141d14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_141d18:
    // 0x141d18: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x141d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_141d1c:
    // 0x141d1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_141d20:
    // 0x141d20: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_141d24:
    if (ctx->pc == 0x141D24u) {
        ctx->pc = 0x141D24u;
            // 0x141d24: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141D28u;
        goto label_141d28;
    }
    ctx->pc = 0x141D20u;
    {
        const bool branch_taken_0x141d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141D20u;
            // 0x141d24: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141d20) {
            ctx->pc = 0x141D80u;
            goto label_141d80;
        }
    }
    ctx->pc = 0x141D28u;
label_141d28:
    // 0x141d28: 0xc062d3c  jal         func_18B4F0
label_141d2c:
    if (ctx->pc == 0x141D2Cu) {
        ctx->pc = 0x141D2Cu;
            // 0x141d2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141D30u;
        goto label_141d30;
    }
    ctx->pc = 0x141D28u;
    SET_GPR_U32(ctx, 31, 0x141D30u);
    ctx->pc = 0x141D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141D28u;
            // 0x141d2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B4F0u;
    if (runtime->hasFunction(0x18B4F0u)) {
        auto targetFn = runtime->lookupFunction(0x18B4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D30u; }
        if (ctx->pc != 0x141D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B4F0_0x18b4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D30u; }
        if (ctx->pc != 0x141D30u) { return; }
    }
    ctx->pc = 0x141D30u;
label_141d30:
    // 0x141d30: 0xc05277c  jal         func_149DF0
label_141d34:
    if (ctx->pc == 0x141D34u) {
        ctx->pc = 0x141D34u;
            // 0x141d34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141D38u;
        goto label_141d38;
    }
    ctx->pc = 0x141D30u;
    SET_GPR_U32(ctx, 31, 0x141D38u);
    ctx->pc = 0x141D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141D30u;
            // 0x141d34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D38u; }
        if (ctx->pc != 0x141D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D38u; }
        if (ctx->pc != 0x141D38u) { return; }
    }
    ctx->pc = 0x141D38u;
label_141d38:
    // 0x141d38: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x141d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_141d3c:
    // 0x141d3c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x141d3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_141d40:
    // 0x141d40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x141d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_141d44:
    // 0x141d44: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_141d48:
    if (ctx->pc == 0x141D48u) {
        ctx->pc = 0x141D48u;
            // 0x141d48: 0x966300f2  lhu         $v1, 0xF2($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 242)));
        ctx->pc = 0x141D4Cu;
        goto label_141d4c;
    }
    ctx->pc = 0x141D44u;
    {
        const bool branch_taken_0x141d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141d44) {
            ctx->pc = 0x141D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141D44u;
            // 0x141d48: 0x966300f2  lhu         $v1, 0xF2($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 242)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141D64u;
            goto label_141d64;
        }
    }
    ctx->pc = 0x141D4Cu;
label_141d4c:
    // 0x141d4c: 0xa66300f0  sh          $v1, 0xF0($s3)
    ctx->pc = 0x141d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
label_141d50:
    // 0x141d50: 0xc05ad10  jal         func_16B440
label_141d54:
    if (ctx->pc == 0x141D54u) {
        ctx->pc = 0x141D54u;
            // 0x141d54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141D58u;
        goto label_141d58;
    }
    ctx->pc = 0x141D50u;
    SET_GPR_U32(ctx, 31, 0x141D58u);
    ctx->pc = 0x141D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141D50u;
            // 0x141d54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B440u;
    if (runtime->hasFunction(0x16B440u)) {
        auto targetFn = runtime->lookupFunction(0x16B440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D58u; }
        if (ctx->pc != 0x141D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B440_0x16b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D58u; }
        if (ctx->pc != 0x141D58u) { return; }
    }
    ctx->pc = 0x141D58u;
label_141d58:
    // 0x141d58: 0x1000000a  b           . + 4 + (0xA << 2)
label_141d5c:
    if (ctx->pc == 0x141D5Cu) {
        ctx->pc = 0x141D5Cu;
            // 0x141d5c: 0x8e6300dc  lw          $v1, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->pc = 0x141D60u;
        goto label_141d60;
    }
    ctx->pc = 0x141D58u;
    {
        const bool branch_taken_0x141d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141D58u;
            // 0x141d5c: 0x8e6300dc  lw          $v1, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141d58) {
            ctx->pc = 0x141D84u;
            goto label_141d84;
        }
    }
    ctx->pc = 0x141D60u;
label_141d60:
    // 0x141d60: 0x966300f2  lhu         $v1, 0xF2($s3)
    ctx->pc = 0x141d60u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 242)));
label_141d64:
    // 0x141d64: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x141d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_141d68:
    // 0x141d68: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_141d6c:
    if (ctx->pc == 0x141D6Cu) {
        ctx->pc = 0x141D70u;
        goto label_141d70;
    }
    ctx->pc = 0x141D68u;
    {
        const bool branch_taken_0x141d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141d68) {
            ctx->pc = 0x141D80u;
            goto label_141d80;
        }
    }
    ctx->pc = 0x141D70u;
label_141d70:
    // 0x141d70: 0xa66300f0  sh          $v1, 0xF0($s3)
    ctx->pc = 0x141d70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 240), (uint16_t)GPR_U32(ctx, 3));
label_141d74:
    // 0x141d74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_141d78:
    // 0x141d78: 0xc05ad10  jal         func_16B440
label_141d7c:
    if (ctx->pc == 0x141D7Cu) {
        ctx->pc = 0x141D7Cu;
            // 0x141d7c: 0xa66200f2  sh          $v0, 0xF2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x141D80u;
        goto label_141d80;
    }
    ctx->pc = 0x141D78u;
    SET_GPR_U32(ctx, 31, 0x141D80u);
    ctx->pc = 0x141D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141D78u;
            // 0x141d7c: 0xa66200f2  sh          $v0, 0xF2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B440u;
    if (runtime->hasFunction(0x16B440u)) {
        auto targetFn = runtime->lookupFunction(0x16B440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D80u; }
        if (ctx->pc != 0x141D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B440_0x16b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141D80u; }
        if (ctx->pc != 0x141D80u) { return; }
    }
    ctx->pc = 0x141D80u;
label_141d80:
    // 0x141d80: 0x8e6300dc  lw          $v1, 0xDC($s3)
    ctx->pc = 0x141d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_141d84:
    // 0x141d84: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x141d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_141d88:
    // 0x141d88: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x141d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
label_141d8c:
    // 0x141d8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_141d90:
    // 0x141d90: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_141d94:
    if (ctx->pc == 0x141D94u) {
        ctx->pc = 0x141D94u;
            // 0x141d94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141D98u;
        goto label_141d98;
    }
    ctx->pc = 0x141D90u;
    {
        const bool branch_taken_0x141d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141d90) {
            ctx->pc = 0x141D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141D90u;
            // 0x141d94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141DB4u;
            goto label_141db4;
        }
    }
    ctx->pc = 0x141D98u;
label_141d98:
    // 0x141d98: 0x86820020  lh          $v0, 0x20($s4)
    ctx->pc = 0x141d98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
label_141d9c:
    // 0x141d9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_141da0:
    if (ctx->pc == 0x141DA0u) {
        ctx->pc = 0x141DA4u;
        goto label_141da4;
    }
    ctx->pc = 0x141D9Cu;
    {
        const bool branch_taken_0x141d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141d9c) {
            ctx->pc = 0x141DB0u;
            goto label_141db0;
        }
    }
    ctx->pc = 0x141DA4u;
label_141da4:
    // 0x141da4: 0x8e6505f4  lw          $a1, 0x5F4($s3)
    ctx->pc = 0x141da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1524)));
label_141da8:
    // 0x141da8: 0xc0591d0  jal         func_164740
label_141dac:
    if (ctx->pc == 0x141DACu) {
        ctx->pc = 0x141DACu;
            // 0x141dac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141DB0u;
        goto label_141db0;
    }
    ctx->pc = 0x141DA8u;
    SET_GPR_U32(ctx, 31, 0x141DB0u);
    ctx->pc = 0x141DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141DA8u;
            // 0x141dac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164740u;
    if (runtime->hasFunction(0x164740u)) {
        auto targetFn = runtime->lookupFunction(0x164740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DB0u; }
        if (ctx->pc != 0x141DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164740_0x164740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DB0u; }
        if (ctx->pc != 0x141DB0u) { return; }
    }
    ctx->pc = 0x141DB0u;
label_141db0:
    // 0x141db0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_141db4:
    // 0x141db4: 0xc057c28  jal         func_15F0A0
label_141db8:
    if (ctx->pc == 0x141DB8u) {
        ctx->pc = 0x141DB8u;
            // 0x141db8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141DBCu;
        goto label_141dbc;
    }
    ctx->pc = 0x141DB4u;
    SET_GPR_U32(ctx, 31, 0x141DBCu);
    ctx->pc = 0x141DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141DB4u;
            // 0x141db8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F0A0u;
    if (runtime->hasFunction(0x15F0A0u)) {
        auto targetFn = runtime->lookupFunction(0x15F0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DBCu; }
        if (ctx->pc != 0x141DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F0A0_0x15f0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DBCu; }
        if (ctx->pc != 0x141DBCu) { return; }
    }
    ctx->pc = 0x141DBCu;
label_141dbc:
    // 0x141dbc: 0x92630438  lbu         $v1, 0x438($s3)
    ctx->pc = 0x141dbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1080)));
label_141dc0:
    // 0x141dc0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x141dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_141dc4:
    // 0x141dc4: 0x34429200  ori         $v0, $v0, 0x9200
    ctx->pc = 0x141dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37376);
label_141dc8:
    // 0x141dc8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x141dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_141dcc:
    // 0x141dcc: 0xa2630438  sb          $v1, 0x438($s3)
    ctx->pc = 0x141dccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1080), (uint8_t)GPR_U32(ctx, 3));
label_141dd0:
    // 0x141dd0: 0x8e630270  lw          $v1, 0x270($s3)
    ctx->pc = 0x141dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
label_141dd4:
    // 0x141dd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_141dd8:
    // 0x141dd8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_141ddc:
    if (ctx->pc == 0x141DDCu) {
        ctx->pc = 0x141DDCu;
            // 0x141ddc: 0x8e630494  lw          $v1, 0x494($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
        ctx->pc = 0x141DE0u;
        goto label_141de0;
    }
    ctx->pc = 0x141DD8u;
    {
        const bool branch_taken_0x141dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141dd8) {
            ctx->pc = 0x141DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141DD8u;
            // 0x141ddc: 0x8e630494  lw          $v1, 0x494($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141DFCu;
            goto label_141dfc;
        }
    }
    ctx->pc = 0x141DE0u;
label_141de0:
    // 0x141de0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x141de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_141de4:
    // 0x141de4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x141de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141de8:
    // 0x141de8: 0xc05131c  jal         func_144C70
label_141dec:
    if (ctx->pc == 0x141DECu) {
        ctx->pc = 0x141DECu;
            // 0x141dec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141DF0u;
        goto label_141df0;
    }
    ctx->pc = 0x141DE8u;
    SET_GPR_U32(ctx, 31, 0x141DF0u);
    ctx->pc = 0x141DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141DE8u;
            // 0x141dec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144C70u;
    if (runtime->hasFunction(0x144C70u)) {
        auto targetFn = runtime->lookupFunction(0x144C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DF0u; }
        if (ctx->pc != 0x141DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144C70_0x144c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141DF0u; }
        if (ctx->pc != 0x141DF0u) { return; }
    }
    ctx->pc = 0x141DF0u;
label_141df0:
    // 0x141df0: 0x1000007b  b           . + 4 + (0x7B << 2)
label_141df4:
    if (ctx->pc == 0x141DF4u) {
        ctx->pc = 0x141DF4u;
            // 0x141df4: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->pc = 0x141DF8u;
        goto label_141df8;
    }
    ctx->pc = 0x141DF0u;
    {
        const bool branch_taken_0x141df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141DF0u;
            // 0x141df4: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141df0) {
            ctx->pc = 0x141FE0u;
            goto label_141fe0;
        }
    }
    ctx->pc = 0x141DF8u;
label_141df8:
    // 0x141df8: 0x8e630494  lw          $v1, 0x494($s3)
    ctx->pc = 0x141df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
label_141dfc:
    // 0x141dfc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x141dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_141e00:
    // 0x141e00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_141e04:
    // 0x141e04: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_141e08:
    if (ctx->pc == 0x141E08u) {
        ctx->pc = 0x141E08u;
            // 0x141e08: 0x92630438  lbu         $v1, 0x438($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1080)));
        ctx->pc = 0x141E0Cu;
        goto label_141e0c;
    }
    ctx->pc = 0x141E04u;
    {
        const bool branch_taken_0x141e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e04) {
            ctx->pc = 0x141E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141E04u;
            // 0x141e08: 0x92630438  lbu         $v1, 0x438($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1080)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141E38u;
            goto label_141e38;
        }
    }
    ctx->pc = 0x141E0Cu;
label_141e0c:
    // 0x141e0c: 0x8e620498  lw          $v0, 0x498($s3)
    ctx->pc = 0x141e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1176)));
label_141e10:
    // 0x141e10: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x141e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_141e14:
    // 0x141e14: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_141e18:
    if (ctx->pc == 0x141E18u) {
        ctx->pc = 0x141E1Cu;
        goto label_141e1c;
    }
    ctx->pc = 0x141E14u;
    {
        const bool branch_taken_0x141e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e14) {
            ctx->pc = 0x141E34u;
            goto label_141e34;
        }
    }
    ctx->pc = 0x141E1Cu;
label_141e1c:
    // 0x141e1c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x141e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_141e20:
    // 0x141e20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x141e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141e24:
    // 0x141e24: 0xc05131c  jal         func_144C70
label_141e28:
    if (ctx->pc == 0x141E28u) {
        ctx->pc = 0x141E28u;
            // 0x141e28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141E2Cu;
        goto label_141e2c;
    }
    ctx->pc = 0x141E24u;
    SET_GPR_U32(ctx, 31, 0x141E2Cu);
    ctx->pc = 0x141E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141E24u;
            // 0x141e28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144C70u;
    if (runtime->hasFunction(0x144C70u)) {
        auto targetFn = runtime->lookupFunction(0x144C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141E2Cu; }
        if (ctx->pc != 0x141E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144C70_0x144c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141E2Cu; }
        if (ctx->pc != 0x141E2Cu) { return; }
    }
    ctx->pc = 0x141E2Cu;
label_141e2c:
    // 0x141e2c: 0x1000006b  b           . + 4 + (0x6B << 2)
label_141e30:
    if (ctx->pc == 0x141E30u) {
        ctx->pc = 0x141E34u;
        goto label_141e34;
    }
    ctx->pc = 0x141E2Cu;
    {
        const bool branch_taken_0x141e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e2c) {
            ctx->pc = 0x141FDCu;
            goto label_141fdc;
        }
    }
    ctx->pc = 0x141E34u;
label_141e34:
    // 0x141e34: 0x92630438  lbu         $v1, 0x438($s3)
    ctx->pc = 0x141e34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1080)));
label_141e38:
    // 0x141e38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x141e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_141e3c:
    // 0x141e3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_141e40:
    // 0x141e40: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x141e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_141e44:
    // 0x141e44: 0xa2630438  sb          $v1, 0x438($s3)
    ctx->pc = 0x141e44u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1080), (uint8_t)GPR_U32(ctx, 3));
label_141e48:
    // 0x141e48: 0xc0529b8  jal         func_14A6E0
label_141e4c:
    if (ctx->pc == 0x141E4Cu) {
        ctx->pc = 0x141E4Cu;
            // 0x141e4c: 0xa66200f2  sh          $v0, 0xF2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x141E50u;
        goto label_141e50;
    }
    ctx->pc = 0x141E48u;
    SET_GPR_U32(ctx, 31, 0x141E50u);
    ctx->pc = 0x141E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141E48u;
            // 0x141e4c: 0xa66200f2  sh          $v0, 0xF2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 242), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A6E0u;
    if (runtime->hasFunction(0x14A6E0u)) {
        auto targetFn = runtime->lookupFunction(0x14A6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141E50u; }
        if (ctx->pc != 0x141E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A6E0_0x14a6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141E50u; }
        if (ctx->pc != 0x141E50u) { return; }
    }
    ctx->pc = 0x141E50u;
label_141e50:
    // 0x141e50: 0x92630438  lbu         $v1, 0x438($s3)
    ctx->pc = 0x141e50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1080)));
label_141e54:
    // 0x141e54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x141e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_141e58:
    // 0x141e58: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
label_141e5c:
    if (ctx->pc == 0x141E5Cu) {
        ctx->pc = 0x141E5Cu;
            // 0x141e5c: 0x96630400  lhu         $v1, 0x400($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1024)));
        ctx->pc = 0x141E60u;
        goto label_141e60;
    }
    ctx->pc = 0x141E58u;
    {
        const bool branch_taken_0x141e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e58) {
            ctx->pc = 0x141E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141E58u;
            // 0x141e5c: 0x96630400  lhu         $v1, 0x400($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1024)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141EC4u;
            goto label_141ec4;
        }
    }
    ctx->pc = 0x141E60u;
label_141e60:
    // 0x141e60: 0x966500ea  lhu         $a1, 0xEA($s3)
    ctx->pc = 0x141e60u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
label_141e64:
    // 0x141e64: 0x926600f7  lbu         $a2, 0xF7($s3)
    ctx->pc = 0x141e64u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 247)));
label_141e68:
    // 0x141e68: 0xc063658  jal         func_18D960
label_141e6c:
    if (ctx->pc == 0x141E6Cu) {
        ctx->pc = 0x141E6Cu;
            // 0x141e6c: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->pc = 0x141E70u;
        goto label_141e70;
    }
    ctx->pc = 0x141E68u;
    SET_GPR_U32(ctx, 31, 0x141E70u);
    ctx->pc = 0x141E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141E68u;
            // 0x141e6c: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D960u;
    if (runtime->hasFunction(0x18D960u)) {
        auto targetFn = runtime->lookupFunction(0x18D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141E70u; }
        if (ctx->pc != 0x141E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D960_0x18d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141E70u; }
        if (ctx->pc != 0x141E70u) { return; }
    }
    ctx->pc = 0x141E70u;
label_141e70:
    // 0x141e70: 0x966400ec  lhu         $a0, 0xEC($s3)
    ctx->pc = 0x141e70u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
label_141e74:
    // 0x141e74: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x141e74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_141e78:
    // 0x141e78: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x141e78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_141e7c:
    // 0x141e7c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_141e80:
    if (ctx->pc == 0x141E80u) {
        ctx->pc = 0x141E80u;
            // 0x141e80: 0x96660482  lhu         $a2, 0x482($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1154)));
        ctx->pc = 0x141E84u;
        goto label_141e84;
    }
    ctx->pc = 0x141E7Cu;
    {
        const bool branch_taken_0x141e7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e7c) {
            ctx->pc = 0x141E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141E7Cu;
            // 0x141e80: 0x96660482  lhu         $a2, 0x482($s3) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1154)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141E9Cu;
            goto label_141e9c;
        }
    }
    ctx->pc = 0x141E84u;
label_141e84:
    // 0x141e84: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x141e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_141e88:
    // 0x141e88: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x141e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_141e8c:
    // 0x141e8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x141e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_141e90:
    // 0x141e90: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x141e90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_141e94:
    // 0x141e94: 0xa6620482  sh          $v0, 0x482($s3)
    ctx->pc = 0x141e94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1154), (uint16_t)GPR_U32(ctx, 2));
label_141e98:
    // 0x141e98: 0x96660482  lhu         $a2, 0x482($s3)
    ctx->pc = 0x141e98u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1154)));
label_141e9c:
    // 0x141e9c: 0x8e6500dc  lw          $a1, 0xDC($s3)
    ctx->pc = 0x141e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_141ea0:
    // 0x141ea0: 0xc050728  jal         func_141CA0
label_141ea4:
    if (ctx->pc == 0x141EA4u) {
        ctx->pc = 0x141EA4u;
            // 0x141ea4: 0x966400ea  lhu         $a0, 0xEA($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
        ctx->pc = 0x141EA8u;
        goto label_141ea8;
    }
    ctx->pc = 0x141EA0u;
    SET_GPR_U32(ctx, 31, 0x141EA8u);
    ctx->pc = 0x141EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141EA0u;
            // 0x141ea4: 0x966400ea  lhu         $a0, 0xEA($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141CA0u;
    goto label_141ca0;
    ctx->pc = 0x141EA8u;
label_141ea8:
    // 0x141ea8: 0xae6203f8  sw          $v0, 0x3F8($s3)
    ctx->pc = 0x141ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1016), GPR_U32(ctx, 2));
label_141eac:
    // 0x141eac: 0xae6203fc  sw          $v0, 0x3FC($s3)
    ctx->pc = 0x141eacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1020), GPR_U32(ctx, 2));
label_141eb0:
    // 0x141eb0: 0x92630438  lbu         $v1, 0x438($s3)
    ctx->pc = 0x141eb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1080)));
label_141eb4:
    // 0x141eb4: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x141eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
label_141eb8:
    // 0x141eb8: 0xa2630438  sb          $v1, 0x438($s3)
    ctx->pc = 0x141eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1080), (uint8_t)GPR_U32(ctx, 3));
label_141ebc:
    // 0x141ebc: 0xa6600404  sh          $zero, 0x404($s3)
    ctx->pc = 0x141ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1028), (uint16_t)GPR_U32(ctx, 0));
label_141ec0:
    // 0x141ec0: 0x96630400  lhu         $v1, 0x400($s3)
    ctx->pc = 0x141ec0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1024)));
label_141ec4:
    // 0x141ec4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x141ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141ec8:
    // 0x141ec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x141ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_141ecc:
    // 0x141ecc: 0xa6630400  sh          $v1, 0x400($s3)
    ctx->pc = 0x141eccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1024), (uint16_t)GPR_U32(ctx, 3));
label_141ed0:
    // 0x141ed0: 0xae600410  sw          $zero, 0x410($s3)
    ctx->pc = 0x141ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1040), GPR_U32(ctx, 0));
label_141ed4:
    // 0x141ed4: 0xa660046c  sh          $zero, 0x46C($s3)
    ctx->pc = 0x141ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1132), (uint16_t)GPR_U32(ctx, 0));
label_141ed8:
    // 0x141ed8: 0xae600470  sw          $zero, 0x470($s3)
    ctx->pc = 0x141ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1136), GPR_U32(ctx, 0));
label_141edc:
    // 0x141edc: 0xae600474  sw          $zero, 0x474($s3)
    ctx->pc = 0x141edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1140), GPR_U32(ctx, 0));
label_141ee0:
    // 0x141ee0: 0x8e7203f8  lw          $s2, 0x3F8($s3)
    ctx->pc = 0x141ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1016)));
label_141ee4:
    // 0x141ee4: 0x96510000  lhu         $s1, 0x0($s2)
    ctx->pc = 0x141ee4u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_141ee8:
    // 0x141ee8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x141ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_141eec:
    // 0x141eec: 0x12230038  beq         $s1, $v1, . + 4 + (0x38 << 2)
label_141ef0:
    if (ctx->pc == 0x141EF0u) {
        ctx->pc = 0x141EF0u;
            // 0x141ef0: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x141EF4u;
        goto label_141ef4;
    }
    ctx->pc = 0x141EECu;
    {
        const bool branch_taken_0x141eec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x141EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141EECu;
            // 0x141ef0: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141eec) {
            ctx->pc = 0x141FD0u;
            goto label_141fd0;
        }
    }
    ctx->pc = 0x141EF4u;
label_141ef4:
    // 0x141ef4: 0x3223f000  andi        $v1, $s1, 0xF000
    ctx->pc = 0x141ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)61440);
label_141ef8:
    // 0x141ef8: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x141ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_141efc:
    // 0x141efc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_141f00:
    if (ctx->pc == 0x141F00u) {
        ctx->pc = 0x141F04u;
        goto label_141f04;
    }
    ctx->pc = 0x141EFCu;
    {
        const bool branch_taken_0x141efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141efc) {
            ctx->pc = 0x141F10u;
            goto label_141f10;
        }
    }
    ctx->pc = 0x141F04u;
label_141f04:
    // 0x141f04: 0x10000004  b           . + 4 + (0x4 << 2)
label_141f08:
    if (ctx->pc == 0x141F08u) {
        ctx->pc = 0x141F08u;
            // 0x141f08: 0x32310fff  andi        $s1, $s1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4095);
        ctx->pc = 0x141F0Cu;
        goto label_141f0c;
    }
    ctx->pc = 0x141F04u;
    {
        const bool branch_taken_0x141f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141F04u;
            // 0x141f08: 0x32310fff  andi        $s1, $s1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f04) {
            ctx->pc = 0x141F18u;
            goto label_141f18;
        }
    }
    ctx->pc = 0x141F0Cu;
label_141f0c:
    // 0x141f0c: 0x0  nop
    ctx->pc = 0x141f0cu;
    // NOP
label_141f10:
    // 0x141f10: 0xc068158  jal         func_1A0560
label_141f14:
    if (ctx->pc == 0x141F14u) {
        ctx->pc = 0x141F18u;
        goto label_141f18;
    }
    ctx->pc = 0x141F10u;
    SET_GPR_U32(ctx, 31, 0x141F18u);
    ctx->pc = 0x1A0560u;
    if (runtime->hasFunction(0x1A0560u)) {
        auto targetFn = runtime->lookupFunction(0x1A0560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F18u; }
        if (ctx->pc != 0x141F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0560_0x1a0560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F18u; }
        if (ctx->pc != 0x141F18u) { return; }
    }
    ctx->pc = 0x141F18u;
label_141f18:
    // 0x141f18: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x141f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_141f1c:
    // 0x141f1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x141f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_141f20:
    // 0x141f20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_141f24:
    // 0x141f24: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x141f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_141f28:
    // 0x141f28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x141f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_141f2c:
    // 0x141f2c: 0x2442ddb0  addiu       $v0, $v0, -0x2250
    ctx->pc = 0x141f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958512));
label_141f30:
    // 0x141f30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_141f34:
    // 0x141f34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_141f38:
    // 0x141f38: 0x40f809  jalr        $v0
label_141f3c:
    if (ctx->pc == 0x141F3Cu) {
        ctx->pc = 0x141F3Cu;
            // 0x141f3c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141F40u;
        goto label_141f40;
    }
    ctx->pc = 0x141F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x141F40u);
        ctx->pc = 0x141F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141F38u;
            // 0x141f3c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x141F40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x141F40u; }
            if (ctx->pc != 0x141F40u) { return; }
        }
        }
    }
    ctx->pc = 0x141F40u;
label_141f40:
    // 0x141f40: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x141f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_141f44:
    // 0x141f44: 0x304400f0  andi        $a0, $v0, 0xF0
    ctx->pc = 0x141f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_141f48:
    // 0x141f48: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x141f48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_141f4c:
    // 0x141f4c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x141f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_141f50:
    // 0x141f50: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_141f54:
    if (ctx->pc == 0x141F54u) {
        ctx->pc = 0x141F54u;
            // 0x141f54: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->pc = 0x141F58u;
        goto label_141f58;
    }
    ctx->pc = 0x141F50u;
    {
        const bool branch_taken_0x141f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x141F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141F50u;
            // 0x141f54: 0x2459021  addu        $s2, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f50) {
            ctx->pc = 0x141FA4u;
            goto label_141fa4;
        }
    }
    ctx->pc = 0x141F58u;
label_141f58:
    // 0x141f58: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x141f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_141f5c:
    // 0x141f5c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x141f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_141f60:
    // 0x141f60: 0x34630c00  ori         $v1, $v1, 0xC00
    ctx->pc = 0x141f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3072);
label_141f64:
    // 0x141f64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_141f68:
    // 0x141f68: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_141f6c:
    if (ctx->pc == 0x141F6Cu) {
        ctx->pc = 0x141F6Cu;
            // 0x141f6c: 0x3c030180  lui         $v1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)384 << 16));
        ctx->pc = 0x141F70u;
        goto label_141f70;
    }
    ctx->pc = 0x141F68u;
    {
        const bool branch_taken_0x141f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f68) {
            ctx->pc = 0x141F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141F68u;
            // 0x141f6c: 0x3c030180  lui         $v1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141F84u;
            goto label_141f84;
        }
    }
    ctx->pc = 0x141F70u;
label_141f70:
    // 0x141f70: 0xc059288  jal         func_164A20
label_141f74:
    if (ctx->pc == 0x141F74u) {
        ctx->pc = 0x141F74u;
            // 0x141f74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141F78u;
        goto label_141f78;
    }
    ctx->pc = 0x141F70u;
    SET_GPR_U32(ctx, 31, 0x141F78u);
    ctx->pc = 0x141F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141F70u;
            // 0x141f74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164A20u;
    if (runtime->hasFunction(0x164A20u)) {
        auto targetFn = runtime->lookupFunction(0x164A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F78u; }
        if (ctx->pc != 0x141F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164A20_0x164a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F78u; }
        if (ctx->pc != 0x141F78u) { return; }
    }
    ctx->pc = 0x141F78u;
label_141f78:
    // 0x141f78: 0x10000008  b           . + 4 + (0x8 << 2)
label_141f7c:
    if (ctx->pc == 0x141F7Cu) {
        ctx->pc = 0x141F80u;
        goto label_141f80;
    }
    ctx->pc = 0x141F78u;
    {
        const bool branch_taken_0x141f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f78) {
            ctx->pc = 0x141F9Cu;
            goto label_141f9c;
        }
    }
    ctx->pc = 0x141F80u;
label_141f80:
    // 0x141f80: 0x3c030180  lui         $v1, 0x180
    ctx->pc = 0x141f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)384 << 16));
label_141f84:
    // 0x141f84: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x141f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
label_141f88:
    // 0x141f88: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_141f8c:
    // 0x141f8c: 0x50600025  beql        $v1, $zero, . + 4 + (0x25 << 2)
label_141f90:
    if (ctx->pc == 0x141F90u) {
        ctx->pc = 0x141F90u;
            // 0x141f90: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x141F94u;
        goto label_141f94;
    }
    ctx->pc = 0x141F8Cu;
    {
        const bool branch_taken_0x141f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f8c) {
            ctx->pc = 0x141F90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141F8Cu;
            // 0x141f90: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x142024u;
            goto label_142024;
        }
    }
    ctx->pc = 0x141F94u;
label_141f94:
    // 0x141f94: 0xc0592e0  jal         func_164B80
label_141f98:
    if (ctx->pc == 0x141F98u) {
        ctx->pc = 0x141F98u;
            // 0x141f98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x141F9Cu;
        goto label_141f9c;
    }
    ctx->pc = 0x141F94u;
    SET_GPR_U32(ctx, 31, 0x141F9Cu);
    ctx->pc = 0x141F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141F94u;
            // 0x141f98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164B80u;
    if (runtime->hasFunction(0x164B80u)) {
        auto targetFn = runtime->lookupFunction(0x164B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F9Cu; }
        if (ctx->pc != 0x141F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164B80_0x164b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F9Cu; }
        if (ctx->pc != 0x141F9Cu) { return; }
    }
    ctx->pc = 0x141F9Cu;
label_141f9c:
    // 0x141f9c: 0x10000020  b           . + 4 + (0x20 << 2)
label_141fa0:
    if (ctx->pc == 0x141FA0u) {
        ctx->pc = 0x141FA4u;
        goto label_141fa4;
    }
    ctx->pc = 0x141F9Cu;
    {
        const bool branch_taken_0x141f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f9c) {
            ctx->pc = 0x142020u;
            goto label_142020;
        }
    }
    ctx->pc = 0x141FA4u;
label_141fa4:
    // 0x141fa4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x141fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_141fa8:
    // 0x141fa8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_141fac:
    if (ctx->pc == 0x141FACu) {
        ctx->pc = 0x141FB0u;
        goto label_141fb0;
    }
    ctx->pc = 0x141FA8u;
    {
        const bool branch_taken_0x141fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x141fa8) {
            ctx->pc = 0x141FD0u;
            goto label_141fd0;
        }
    }
    ctx->pc = 0x141FB0u;
label_141fb0:
    // 0x141fb0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x141fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_141fb4:
    // 0x141fb4: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x141fb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_141fb8:
    // 0x141fb8: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x141fb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_141fbc:
    // 0x141fbc: 0x5460ffca  bnel        $v1, $zero, . + 4 + (-0x36 << 2)
label_141fc0:
    if (ctx->pc == 0x141FC0u) {
        ctx->pc = 0x141FC0u;
            // 0x141fc0: 0x96510000  lhu         $s1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x141FC4u;
        goto label_141fc4;
    }
    ctx->pc = 0x141FBCu;
    {
        const bool branch_taken_0x141fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141fbc) {
            ctx->pc = 0x141FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141FBCu;
            // 0x141fc0: 0x96510000  lhu         $s1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141ee8;
        }
    }
    ctx->pc = 0x141FC4u;
label_141fc4:
    // 0x141fc4: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
label_141fc8:
    if (ctx->pc == 0x141FC8u) {
        ctx->pc = 0x141FC8u;
            // 0x141fc8: 0x6410001f  daddiu      $s0, $zero, 0x1F (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)31);
        ctx->pc = 0x141FCCu;
        goto label_141fcc;
    }
    ctx->pc = 0x141FC4u;
    {
        const bool branch_taken_0x141fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141FC4u;
            // 0x141fc8: 0x6410001f  daddiu      $s0, $zero, 0x1F (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141fc4) {
            ctx->pc = 0x141EE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_141ee4;
        }
    }
    ctx->pc = 0x141FCCu;
label_141fcc:
    // 0x141fcc: 0x0  nop
    ctx->pc = 0x141fccu;
    // NOP
label_141fd0:
    // 0x141fd0: 0x96630404  lhu         $v1, 0x404($s3)
    ctx->pc = 0x141fd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1028)));
label_141fd4:
    // 0x141fd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x141fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_141fd8:
    // 0x141fd8: 0xa6630404  sh          $v1, 0x404($s3)
    ctx->pc = 0x141fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1028), (uint16_t)GPR_U32(ctx, 3));
label_141fdc:
    // 0x141fdc: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x141fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
label_141fe0:
    // 0x141fe0: 0x30830300  andi        $v1, $a0, 0x300
    ctx->pc = 0x141fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)768);
label_141fe4:
    // 0x141fe4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_141fe8:
    if (ctx->pc == 0x141FE8u) {
        ctx->pc = 0x141FE8u;
            // 0x141fe8: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x141FECu;
        goto label_141fec;
    }
    ctx->pc = 0x141FE4u;
    {
        const bool branch_taken_0x141fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141fe4) {
            ctx->pc = 0x141FE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141FE4u;
            // 0x141fe8: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141FF8u;
            goto label_141ff8;
        }
    }
    ctx->pc = 0x141FECu;
label_141fec:
    // 0x141fec: 0x1000000c  b           . + 4 + (0xC << 2)
label_141ff0:
    if (ctx->pc == 0x141FF0u) {
        ctx->pc = 0x141FF0u;
            // 0x141ff0: 0xa26003e9  sb          $zero, 0x3E9($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1001), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x141FF4u;
        goto label_141ff4;
    }
    ctx->pc = 0x141FECu;
    {
        const bool branch_taken_0x141fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141FECu;
            // 0x141ff0: 0xa26003e9  sb          $zero, 0x3E9($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1001), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141fec) {
            ctx->pc = 0x142020u;
            goto label_142020;
        }
    }
    ctx->pc = 0x141FF4u;
label_141ff4:
    // 0x141ff4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x141ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_141ff8:
    // 0x141ff8: 0x34638c00  ori         $v1, $v1, 0x8C00
    ctx->pc = 0x141ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35840);
label_141ffc:
    // 0x141ffc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_142000:
    // 0x142000: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_142004:
    if (ctx->pc == 0x142004u) {
        ctx->pc = 0x142008u;
        goto label_142008;
    }
    ctx->pc = 0x142000u;
    {
        const bool branch_taken_0x142000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142000) {
            ctx->pc = 0x142020u;
            goto label_142020;
        }
    }
    ctx->pc = 0x142008u;
label_142008:
    // 0x142008: 0xc05089c  jal         func_142270
label_14200c:
    if (ctx->pc == 0x14200Cu) {
        ctx->pc = 0x14200Cu;
            // 0x14200c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x142010u;
        goto label_142010;
    }
    ctx->pc = 0x142008u;
    SET_GPR_U32(ctx, 31, 0x142010u);
    ctx->pc = 0x14200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142008u;
            // 0x14200c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142270u;
    if (runtime->hasFunction(0x142270u)) {
        auto targetFn = runtime->lookupFunction(0x142270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142010u; }
        if (ctx->pc != 0x142010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142270_0x142270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142010u; }
        if (ctx->pc != 0x142010u) { return; }
    }
    ctx->pc = 0x142010u;
label_142010:
    // 0x142010: 0x926303e9  lbu         $v1, 0x3E9($s3)
    ctx->pc = 0x142010u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1001)));
label_142014:
    // 0x142014: 0x904403e9  lbu         $a0, 0x3E9($v0)
    ctx->pc = 0x142014u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1001)));
label_142018:
    // 0x142018: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x142018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_14201c:
    // 0x14201c: 0xa04303e9  sb          $v1, 0x3E9($v0)
    ctx->pc = 0x14201cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1001), (uint8_t)GPR_U32(ctx, 3));
label_142020:
    // 0x142020: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x142020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_142024:
    // 0x142024: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x142024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_142028:
    // 0x142028: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x142028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14202c:
    // 0x14202c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14202cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_142030:
    // 0x142030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_142034:
    // 0x142034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_142038:
    // 0x142038: 0x3e00008  jr          $ra
label_14203c:
    if (ctx->pc == 0x14203Cu) {
        ctx->pc = 0x14203Cu;
            // 0x14203c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x142040u;
        goto label_fallthrough_0x142038;
    }
    ctx->pc = 0x142038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142038u;
            // 0x14203c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x142038:
    ctx->pc = 0x142040u;
    ctx->pc = 0x142040u;
}
