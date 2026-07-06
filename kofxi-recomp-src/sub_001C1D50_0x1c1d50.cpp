#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1D50
// Address: 0x1c1d50 - 0x1c1f30
void sub_001C1D50_0x1c1d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1D50_0x1c1d50");
#endif

    switch (ctx->pc) {
        case 0x1c1d50u: goto label_1c1d50;
        case 0x1c1d54u: goto label_1c1d54;
        case 0x1c1d58u: goto label_1c1d58;
        case 0x1c1d5cu: goto label_1c1d5c;
        case 0x1c1d60u: goto label_1c1d60;
        case 0x1c1d64u: goto label_1c1d64;
        case 0x1c1d68u: goto label_1c1d68;
        case 0x1c1d6cu: goto label_1c1d6c;
        case 0x1c1d70u: goto label_1c1d70;
        case 0x1c1d74u: goto label_1c1d74;
        case 0x1c1d78u: goto label_1c1d78;
        case 0x1c1d7cu: goto label_1c1d7c;
        case 0x1c1d80u: goto label_1c1d80;
        case 0x1c1d84u: goto label_1c1d84;
        case 0x1c1d88u: goto label_1c1d88;
        case 0x1c1d8cu: goto label_1c1d8c;
        case 0x1c1d90u: goto label_1c1d90;
        case 0x1c1d94u: goto label_1c1d94;
        case 0x1c1d98u: goto label_1c1d98;
        case 0x1c1d9cu: goto label_1c1d9c;
        case 0x1c1da0u: goto label_1c1da0;
        case 0x1c1da4u: goto label_1c1da4;
        case 0x1c1da8u: goto label_1c1da8;
        case 0x1c1dacu: goto label_1c1dac;
        case 0x1c1db0u: goto label_1c1db0;
        case 0x1c1db4u: goto label_1c1db4;
        case 0x1c1db8u: goto label_1c1db8;
        case 0x1c1dbcu: goto label_1c1dbc;
        case 0x1c1dc0u: goto label_1c1dc0;
        case 0x1c1dc4u: goto label_1c1dc4;
        case 0x1c1dc8u: goto label_1c1dc8;
        case 0x1c1dccu: goto label_1c1dcc;
        case 0x1c1dd0u: goto label_1c1dd0;
        case 0x1c1dd4u: goto label_1c1dd4;
        case 0x1c1dd8u: goto label_1c1dd8;
        case 0x1c1ddcu: goto label_1c1ddc;
        case 0x1c1de0u: goto label_1c1de0;
        case 0x1c1de4u: goto label_1c1de4;
        case 0x1c1de8u: goto label_1c1de8;
        case 0x1c1decu: goto label_1c1dec;
        case 0x1c1df0u: goto label_1c1df0;
        case 0x1c1df4u: goto label_1c1df4;
        case 0x1c1df8u: goto label_1c1df8;
        case 0x1c1dfcu: goto label_1c1dfc;
        case 0x1c1e00u: goto label_1c1e00;
        case 0x1c1e04u: goto label_1c1e04;
        case 0x1c1e08u: goto label_1c1e08;
        case 0x1c1e0cu: goto label_1c1e0c;
        case 0x1c1e10u: goto label_1c1e10;
        case 0x1c1e14u: goto label_1c1e14;
        case 0x1c1e18u: goto label_1c1e18;
        case 0x1c1e1cu: goto label_1c1e1c;
        case 0x1c1e20u: goto label_1c1e20;
        case 0x1c1e24u: goto label_1c1e24;
        case 0x1c1e28u: goto label_1c1e28;
        case 0x1c1e2cu: goto label_1c1e2c;
        case 0x1c1e30u: goto label_1c1e30;
        case 0x1c1e34u: goto label_1c1e34;
        case 0x1c1e38u: goto label_1c1e38;
        case 0x1c1e3cu: goto label_1c1e3c;
        case 0x1c1e40u: goto label_1c1e40;
        case 0x1c1e44u: goto label_1c1e44;
        case 0x1c1e48u: goto label_1c1e48;
        case 0x1c1e4cu: goto label_1c1e4c;
        case 0x1c1e50u: goto label_1c1e50;
        case 0x1c1e54u: goto label_1c1e54;
        case 0x1c1e58u: goto label_1c1e58;
        case 0x1c1e5cu: goto label_1c1e5c;
        case 0x1c1e60u: goto label_1c1e60;
        case 0x1c1e64u: goto label_1c1e64;
        case 0x1c1e68u: goto label_1c1e68;
        case 0x1c1e6cu: goto label_1c1e6c;
        case 0x1c1e70u: goto label_1c1e70;
        case 0x1c1e74u: goto label_1c1e74;
        case 0x1c1e78u: goto label_1c1e78;
        case 0x1c1e7cu: goto label_1c1e7c;
        case 0x1c1e80u: goto label_1c1e80;
        case 0x1c1e84u: goto label_1c1e84;
        case 0x1c1e88u: goto label_1c1e88;
        case 0x1c1e8cu: goto label_1c1e8c;
        case 0x1c1e90u: goto label_1c1e90;
        case 0x1c1e94u: goto label_1c1e94;
        case 0x1c1e98u: goto label_1c1e98;
        case 0x1c1e9cu: goto label_1c1e9c;
        case 0x1c1ea0u: goto label_1c1ea0;
        case 0x1c1ea4u: goto label_1c1ea4;
        case 0x1c1ea8u: goto label_1c1ea8;
        case 0x1c1eacu: goto label_1c1eac;
        case 0x1c1eb0u: goto label_1c1eb0;
        case 0x1c1eb4u: goto label_1c1eb4;
        case 0x1c1eb8u: goto label_1c1eb8;
        case 0x1c1ebcu: goto label_1c1ebc;
        case 0x1c1ec0u: goto label_1c1ec0;
        case 0x1c1ec4u: goto label_1c1ec4;
        case 0x1c1ec8u: goto label_1c1ec8;
        case 0x1c1eccu: goto label_1c1ecc;
        case 0x1c1ed0u: goto label_1c1ed0;
        case 0x1c1ed4u: goto label_1c1ed4;
        case 0x1c1ed8u: goto label_1c1ed8;
        case 0x1c1edcu: goto label_1c1edc;
        case 0x1c1ee0u: goto label_1c1ee0;
        case 0x1c1ee4u: goto label_1c1ee4;
        case 0x1c1ee8u: goto label_1c1ee8;
        case 0x1c1eecu: goto label_1c1eec;
        case 0x1c1ef0u: goto label_1c1ef0;
        case 0x1c1ef4u: goto label_1c1ef4;
        case 0x1c1ef8u: goto label_1c1ef8;
        case 0x1c1efcu: goto label_1c1efc;
        case 0x1c1f00u: goto label_1c1f00;
        case 0x1c1f04u: goto label_1c1f04;
        case 0x1c1f08u: goto label_1c1f08;
        case 0x1c1f0cu: goto label_1c1f0c;
        case 0x1c1f10u: goto label_1c1f10;
        case 0x1c1f14u: goto label_1c1f14;
        case 0x1c1f18u: goto label_1c1f18;
        case 0x1c1f1cu: goto label_1c1f1c;
        case 0x1c1f20u: goto label_1c1f20;
        case 0x1c1f24u: goto label_1c1f24;
        case 0x1c1f28u: goto label_1c1f28;
        case 0x1c1f2cu: goto label_1c1f2c;
        default: break;
    }

    ctx->pc = 0x1c1d50u;

label_1c1d50:
    // 0x1c1d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1d54:
    // 0x1c1d54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1d58:
    // 0x1c1d58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c1d5c:
    // 0x1c1d5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c1d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d60:
    // 0x1c1d60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1d64:
    // 0x1c1d64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1d68:
    // 0x1c1d68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c1d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1c1d6c:
    // 0x1c1d6c: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x1c1d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_1c1d70:
    // 0x1c1d70: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x1c1d70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_1c1d74:
    // 0x1c1d74: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
label_1c1d78:
    if (ctx->pc == 0x1C1D78u) {
        ctx->pc = 0x1C1D78u;
            // 0x1c1d78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C1D7Cu;
        goto label_1c1d7c;
    }
    ctx->pc = 0x1C1D74u;
    {
        const bool branch_taken_0x1c1d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D74u;
            // 0x1c1d78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d74) {
            ctx->pc = 0x1C1DECu;
            goto label_1c1dec;
        }
    }
    ctx->pc = 0x1C1D7Cu;
label_1c1d7c:
    // 0x1c1d7c: 0x0  nop
    ctx->pc = 0x1c1d7cu;
    // NOP
label_1c1d80:
    // 0x1c1d80: 0xc043400  jal         func_10D000
label_1c1d84:
    if (ctx->pc == 0x1C1D84u) {
        ctx->pc = 0x1C1D84u;
            // 0x1c1d84: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->pc = 0x1C1D88u;
        goto label_1c1d88;
    }
    ctx->pc = 0x1C1D80u;
    SET_GPR_U32(ctx, 31, 0x1C1D88u);
    ctx->pc = 0x1C1D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D80u;
            // 0x1c1d84: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D000u;
    if (runtime->hasFunction(0x10D000u)) {
        auto targetFn = runtime->lookupFunction(0x10D000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D88u; }
        if (ctx->pc != 0x1C1D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D000_0x10d000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D88u; }
        if (ctx->pc != 0x1C1D88u) { return; }
    }
    ctx->pc = 0x1C1D88u;
label_1c1d88:
    // 0x1c1d88: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
label_1c1d8c:
    if (ctx->pc == 0x1C1D8Cu) {
        ctx->pc = 0x1C1D8Cu;
            // 0x1c1d8c: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->pc = 0x1C1D90u;
        goto label_1c1d90;
    }
    ctx->pc = 0x1C1D88u;
    {
        const bool branch_taken_0x1c1d88 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C1D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D88u;
            // 0x1c1d8c: 0x2650000c  addiu       $s0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d88) {
            ctx->pc = 0x1C1D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1d80;
        }
    }
    ctx->pc = 0x1C1D90u;
label_1c1d90:
    // 0x1c1d90: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1c1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1c1d94:
    // 0x1c1d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d98:
    // 0x1c1d98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c1d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d9c:
    // 0x1c1d9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c1da0:
    // 0x1c1da0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1c1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1c1da4:
    // 0x1c1da4: 0x40f809  jalr        $v0
label_1c1da8:
    if (ctx->pc == 0x1C1DA8u) {
        ctx->pc = 0x1C1DA8u;
            // 0x1c1da8: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = 0x1C1DACu;
        goto label_1c1dac;
    }
    ctx->pc = 0x1C1DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1DACu);
        ctx->pc = 0x1C1DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DA4u;
            // 0x1c1da8: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1DACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DACu; }
            if (ctx->pc != 0x1C1DACu) { return; }
        }
        }
    }
    ctx->pc = 0x1C1DACu;
label_1c1dac:
    // 0x1c1dac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c1dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1c1db0:
    // 0x1c1db0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1c1db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1c1db4:
    // 0x1c1db4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1db8:
    // 0x1c1db8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1c1db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1c1dbc:
    // 0x1c1dbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c1dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c1dc0:
    // 0x1c1dc0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1c1dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1c1dc4:
    // 0x1c1dc4: 0x40f809  jalr        $v0
label_1c1dc8:
    if (ctx->pc == 0x1C1DC8u) {
        ctx->pc = 0x1C1DC8u;
            // 0x1c1dc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1DCCu;
        goto label_1c1dcc;
    }
    ctx->pc = 0x1C1DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1DCCu);
        ctx->pc = 0x1C1DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DC4u;
            // 0x1c1dc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1DCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DCCu; }
            if (ctx->pc != 0x1C1DCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1C1DCCu;
label_1c1dcc:
    // 0x1c1dcc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c1dd0:
    // 0x1c1dd0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1c1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1c1dd4:
    // 0x1c1dd4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1c1dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1c1dd8:
    // 0x1c1dd8: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x1c1dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_1c1ddc:
    // 0x1c1ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c1de0:
    // 0x1c1de0: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1c1de0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_1c1de4:
    // 0x1c1de4: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x1c1de4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
label_1c1de8:
    // 0x1c1de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1dec:
    // 0x1c1dec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1decu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1df0:
    // 0x1c1df0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1df0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1df4:
    // 0x1c1df4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c1df8:
    // 0x1c1df8: 0x3e00008  jr          $ra
label_1c1dfc:
    if (ctx->pc == 0x1C1DFCu) {
        ctx->pc = 0x1C1DFCu;
            // 0x1c1dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1E00u;
        goto label_1c1e00;
    }
    ctx->pc = 0x1C1DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DF8u;
            // 0x1c1dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1E00u;
label_1c1e00:
    // 0x1c1e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1e04:
    // 0x1c1e04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1e08:
    // 0x1c1e08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1e0c:
    // 0x1c1e0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c1e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e10:
    // 0x1c1e10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c1e14:
    // 0x1c1e14: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_1c1e18:
    if (ctx->pc == 0x1C1E18u) {
        ctx->pc = 0x1C1E18u;
            // 0x1c1e18: 0x2c830002  sltiu       $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x1C1E1Cu;
        goto label_1c1e1c;
    }
    ctx->pc = 0x1C1E14u;
    {
        const bool branch_taken_0x1c1e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E14u;
            // 0x1c1e18: 0x2c830002  sltiu       $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e14) {
            ctx->pc = 0x1C1E38u;
            goto label_1c1e38;
        }
    }
    ctx->pc = 0x1C1E1Cu;
label_1c1e1c:
    // 0x1c1e1c: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_1c1e20:
    if (ctx->pc == 0x1C1E20u) {
        ctx->pc = 0x1C1E20u;
            // 0x1c1e20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E24u;
        goto label_1c1e24;
    }
    ctx->pc = 0x1C1E1Cu;
    {
        const bool branch_taken_0x1c1e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E1Cu;
            // 0x1c1e20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e1c) {
            ctx->pc = 0x1C1EA0u;
            goto label_1c1ea0;
        }
    }
    ctx->pc = 0x1C1E24u;
label_1c1e24:
    // 0x1c1e24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c1e28:
    // 0x1c1e28: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_1c1e2c:
    if (ctx->pc == 0x1C1E2Cu) {
        ctx->pc = 0x1C1E2Cu;
            // 0x1c1e2c: 0x2482fc00  addiu       $v0, $a0, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966272));
        ctx->pc = 0x1C1E30u;
        goto label_1c1e30;
    }
    ctx->pc = 0x1C1E28u;
    {
        const bool branch_taken_0x1c1e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E28u;
            // 0x1c1e2c: 0x2482fc00  addiu       $v0, $a0, -0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e28) {
            ctx->pc = 0x1C1E58u;
            goto label_1c1e58;
        }
    }
    ctx->pc = 0x1C1E30u;
label_1c1e30:
    // 0x1c1e30: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c1e34:
    if (ctx->pc == 0x1C1E34u) {
        ctx->pc = 0x1C1E34u;
            // 0x1c1e34: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1C1E38u;
        goto label_1c1e38;
    }
    ctx->pc = 0x1C1E30u;
    {
        const bool branch_taken_0x1c1e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E30u;
            // 0x1c1e34: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e30) {
            ctx->pc = 0x1C1E68u;
            goto label_1c1e68;
        }
    }
    ctx->pc = 0x1C1E38u;
label_1c1e38:
    // 0x1c1e38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c1e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c1e3c:
    // 0x1c1e3c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c1e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c1e40:
    // 0x1c1e40: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1c1e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c1e44:
    // 0x1c1e44: 0xc070830  jal         func_1C20C0
label_1c1e48:
    if (ctx->pc == 0x1C1E48u) {
        ctx->pc = 0x1C1E48u;
            // 0x1c1e48: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1C1E4Cu;
        goto label_1c1e4c;
    }
    ctx->pc = 0x1C1E44u;
    SET_GPR_U32(ctx, 31, 0x1C1E4Cu);
    ctx->pc = 0x1C1E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E44u;
            // 0x1c1e48: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C20C0u;
    if (runtime->hasFunction(0x1C20C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C20C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E4Cu; }
        if (ctx->pc != 0x1C1E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C20C0_0x1c20c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E4Cu; }
        if (ctx->pc != 0x1C1E4Cu) { return; }
    }
    ctx->pc = 0x1C1E4Cu;
label_1c1e4c:
    // 0x1c1e4c: 0x10000013  b           . + 4 + (0x13 << 2)
label_1c1e50:
    if (ctx->pc == 0x1C1E50u) {
        ctx->pc = 0x1C1E50u;
            // 0x1c1e50: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C1E54u;
        goto label_1c1e54;
    }
    ctx->pc = 0x1C1E4Cu;
    {
        const bool branch_taken_0x1c1e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E4Cu;
            // 0x1c1e50: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e4c) {
            ctx->pc = 0x1C1E9Cu;
            goto label_1c1e9c;
        }
    }
    ctx->pc = 0x1C1E54u;
label_1c1e54:
    // 0x1c1e54: 0x0  nop
    ctx->pc = 0x1c1e54u;
    // NOP
label_1c1e58:
    // 0x1c1e58: 0xc070896  jal         func_1C2258
label_1c1e5c:
    if (ctx->pc == 0x1C1E5Cu) {
        ctx->pc = 0x1C1E5Cu;
            // 0x1c1e5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C1E60u;
        goto label_1c1e60;
    }
    ctx->pc = 0x1C1E58u;
    SET_GPR_U32(ctx, 31, 0x1C1E60u);
    ctx->pc = 0x1C1E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E58u;
            // 0x1c1e5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2258u;
    if (runtime->hasFunction(0x1C2258u)) {
        auto targetFn = runtime->lookupFunction(0x1C2258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E60u; }
        if (ctx->pc != 0x1C1E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2258_0x1c2258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E60u; }
        if (ctx->pc != 0x1C1E60u) { return; }
    }
    ctx->pc = 0x1C1E60u;
label_1c1e60:
    // 0x1c1e60: 0x1000000f  b           . + 4 + (0xF << 2)
label_1c1e64:
    if (ctx->pc == 0x1C1E64u) {
        ctx->pc = 0x1C1E64u;
            // 0x1c1e64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E68u;
        goto label_1c1e68;
    }
    ctx->pc = 0x1C1E60u;
    {
        const bool branch_taken_0x1c1e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E60u;
            // 0x1c1e64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e60) {
            ctx->pc = 0x1C1EA0u;
            goto label_1c1ea0;
        }
    }
    ctx->pc = 0x1C1E68u;
label_1c1e68:
    // 0x1c1e68: 0x2c420040  sltiu       $v0, $v0, 0x40
    ctx->pc = 0x1c1e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_1c1e6c:
    // 0x1c1e6c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c1e70:
    if (ctx->pc == 0x1C1E70u) {
        ctx->pc = 0x1C1E70u;
            // 0x1c1e70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E74u;
        goto label_1c1e74;
    }
    ctx->pc = 0x1C1E6Cu;
    {
        const bool branch_taken_0x1c1e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E6Cu;
            // 0x1c1e70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e6c) {
            ctx->pc = 0x1C1EA0u;
            goto label_1c1ea0;
        }
    }
    ctx->pc = 0x1C1E74u;
label_1c1e74:
    // 0x1c1e74: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c1e78:
    // 0x1c1e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c1e7c:
    // 0x1c1e7c: 0x8c42daa0  lw          $v0, -0x2560($v0)
    ctx->pc = 0x1c1e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957728)));
label_1c1e80:
    // 0x1c1e80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1e84:
    if (ctx->pc == 0x1C1E84u) {
        ctx->pc = 0x1C1E84u;
            // 0x1c1e84: 0x63082  srl         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1C1E88u;
        goto label_1c1e88;
    }
    ctx->pc = 0x1C1E80u;
    {
        const bool branch_taken_0x1c1e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E80u;
            // 0x1c1e84: 0x63082  srl         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e80) {
            ctx->pc = 0x1C1E9Cu;
            goto label_1c1e9c;
        }
    }
    ctx->pc = 0x1C1E88u;
label_1c1e88:
    // 0x1c1e88: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c1e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1c1e8c:
    // 0x1c1e8c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c1e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c1e90:
    // 0x1c1e90: 0x8c84dba0  lw          $a0, -0x2460($a0)
    ctx->pc = 0x1c1e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957984)));
label_1c1e94:
    // 0x1c1e94: 0x40f809  jalr        $v0
label_1c1e98:
    if (ctx->pc == 0x1C1E98u) {
        ctx->pc = 0x1C1E98u;
            // 0x1c1e98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E9Cu;
        goto label_1c1e9c;
    }
    ctx->pc = 0x1C1E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1E9Cu);
        ctx->pc = 0x1C1E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E94u;
            // 0x1c1e98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1E9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E9Cu; }
            if (ctx->pc != 0x1C1E9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C1E9Cu;
label_1c1e9c:
    // 0x1c1e9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c1e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ea0:
    // 0x1c1ea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1ea4:
    // 0x1c1ea4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1ea8:
    // 0x1c1ea8: 0x3e00008  jr          $ra
label_1c1eac:
    if (ctx->pc == 0x1C1EACu) {
        ctx->pc = 0x1C1EACu;
            // 0x1c1eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1EB0u;
        goto label_1c1eb0;
    }
    ctx->pc = 0x1C1EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EA8u;
            // 0x1c1eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1EB0u;
label_1c1eb0:
    // 0x1c1eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1eb4:
    // 0x1c1eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1eb8:
    // 0x1c1eb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c1ebc:
    // 0x1c1ebc: 0xc0432d4  jal         func_10CB50
label_1c1ec0:
    if (ctx->pc == 0x1C1EC0u) {
        ctx->pc = 0x1C1EC0u;
            // 0x1c1ec0: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
        ctx->pc = 0x1C1EC4u;
        goto label_1c1ec4;
    }
    ctx->pc = 0x1C1EBCu;
    SET_GPR_U32(ctx, 31, 0x1C1EC4u);
    ctx->pc = 0x1C1EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EBCu;
            // 0x1c1ec0: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EC4u; }
        if (ctx->pc != 0x1C1EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EC4u; }
        if (ctx->pc != 0x1C1EC4u) { return; }
    }
    ctx->pc = 0x1C1EC4u;
label_1c1ec4:
    // 0x1c1ec4: 0x2610d980  addiu       $s0, $s0, -0x2680
    ctx->pc = 0x1c1ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957440));
label_1c1ec8:
    // 0x1c1ec8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c1ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ecc:
    // 0x1c1ecc: 0xc0443dc  jal         func_110F70
label_1c1ed0:
    if (ctx->pc == 0x1C1ED0u) {
        ctx->pc = 0x1C1ED0u;
            // 0x1c1ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1ED4u;
        goto label_1c1ed4;
    }
    ctx->pc = 0x1C1ECCu;
    SET_GPR_U32(ctx, 31, 0x1C1ED4u);
    ctx->pc = 0x1C1ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1ECCu;
            // 0x1c1ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110F70u;
    if (runtime->hasFunction(0x110F70u)) {
        auto targetFn = runtime->lookupFunction(0x110F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1ED4u; }
        if (ctx->pc != 0x1C1ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110F70_0x110f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1ED4u; }
        if (ctx->pc != 0x1C1ED4u) { return; }
    }
    ctx->pc = 0x1C1ED4u;
label_1c1ed4:
    // 0x1c1ed4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c1ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1c1ed8:
    // 0x1c1ed8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c1edc:
    // 0x1c1edc: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c1edcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
label_1c1ee0:
    // 0x1c1ee0: 0x8c45d074  lw          $a1, -0x2F8C($v0)
    ctx->pc = 0x1c1ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955124)));
label_1c1ee4:
    // 0x1c1ee4: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1c1ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
label_1c1ee8:
    // 0x1c1ee8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1c1ee8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1eec:
    // 0x1c1eec: 0x24c61e00  addiu       $a2, $a2, 0x1E00
    ctx->pc = 0x1c1eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7680));
label_1c1ef0:
    // 0x1c1ef0: 0x24e7d9a0  addiu       $a3, $a3, -0x2660
    ctx->pc = 0x1c1ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957472));
label_1c1ef4:
    // 0x1c1ef4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1ef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ef8:
    // 0x1c1ef8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c1ef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1efc:
    // 0x1c1efc: 0xc044402  jal         func_111008
label_1c1f00:
    if (ctx->pc == 0x1C1F00u) {
        ctx->pc = 0x1C1F00u;
            // 0x1c1f00: 0x2484d938  addiu       $a0, $a0, -0x26C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957368));
        ctx->pc = 0x1C1F04u;
        goto label_1c1f04;
    }
    ctx->pc = 0x1C1EFCu;
    SET_GPR_U32(ctx, 31, 0x1C1F04u);
    ctx->pc = 0x1C1F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EFCu;
            // 0x1c1f00: 0x2484d938  addiu       $a0, $a0, -0x26C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111008u;
    if (runtime->hasFunction(0x111008u)) {
        auto targetFn = runtime->lookupFunction(0x111008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F04u; }
        if (ctx->pc != 0x1C1F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111008_0x111008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F04u; }
        if (ctx->pc != 0x1C1F04u) { return; }
    }
    ctx->pc = 0x1C1F04u;
label_1c1f04:
    // 0x1c1f04: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c1f08:
    // 0x1c1f08: 0x2442d078  addiu       $v0, $v0, -0x2F88
    ctx->pc = 0x1c1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955128));
label_1c1f0c:
    // 0x1c1f0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1f10:
    // 0x1c1f10: 0x0  nop
    ctx->pc = 0x1c1f10u;
    // NOP
label_1c1f14:
    // 0x1c1f14: 0xc044508  jal         func_111420
label_1c1f18:
    if (ctx->pc == 0x1C1F18u) {
        ctx->pc = 0x1C1F18u;
            // 0x1c1f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F1Cu;
        goto label_1c1f1c;
    }
    ctx->pc = 0x1C1F14u;
    SET_GPR_U32(ctx, 31, 0x1C1F1Cu);
    ctx->pc = 0x1C1F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F14u;
            // 0x1c1f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111420u;
    if (runtime->hasFunction(0x111420u)) {
        auto targetFn = runtime->lookupFunction(0x111420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F1Cu; }
        if (ctx->pc != 0x1C1F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111420_0x111420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F1Cu; }
        if (ctx->pc != 0x1C1F1Cu) { return; }
    }
    ctx->pc = 0x1C1F1Cu;
label_1c1f1c:
    // 0x1c1f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f20:
    // 0x1c1f20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1f24:
    // 0x1c1f24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1f28:
    // 0x1c1f28: 0x3e00008  jr          $ra
label_1c1f2c:
    if (ctx->pc == 0x1C1F2Cu) {
        ctx->pc = 0x1C1F2Cu;
            // 0x1c1f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1F30u;
        goto label_fallthrough_0x1c1f28;
    }
    ctx->pc = 0x1C1F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F28u;
            // 0x1c1f2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c1f28:
    ctx->pc = 0x1C1F30u;
    ctx->pc = 0x1c1f30u;
}
