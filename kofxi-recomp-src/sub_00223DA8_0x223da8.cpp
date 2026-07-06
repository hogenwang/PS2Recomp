#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00223DA8
// Address: 0x223da8 - 0x223ef8
void sub_00223DA8_0x223da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223DA8_0x223da8");
#endif

    switch (ctx->pc) {
        case 0x223da8u: goto label_223da8;
        case 0x223dacu: goto label_223dac;
        case 0x223db0u: goto label_223db0;
        case 0x223db4u: goto label_223db4;
        case 0x223db8u: goto label_223db8;
        case 0x223dbcu: goto label_223dbc;
        case 0x223dc0u: goto label_223dc0;
        case 0x223dc4u: goto label_223dc4;
        case 0x223dc8u: goto label_223dc8;
        case 0x223dccu: goto label_223dcc;
        case 0x223dd0u: goto label_223dd0;
        case 0x223dd4u: goto label_223dd4;
        case 0x223dd8u: goto label_223dd8;
        case 0x223ddcu: goto label_223ddc;
        case 0x223de0u: goto label_223de0;
        case 0x223de4u: goto label_223de4;
        case 0x223de8u: goto label_223de8;
        case 0x223decu: goto label_223dec;
        case 0x223df0u: goto label_223df0;
        case 0x223df4u: goto label_223df4;
        case 0x223df8u: goto label_223df8;
        case 0x223dfcu: goto label_223dfc;
        case 0x223e00u: goto label_223e00;
        case 0x223e04u: goto label_223e04;
        case 0x223e08u: goto label_223e08;
        case 0x223e0cu: goto label_223e0c;
        case 0x223e10u: goto label_223e10;
        case 0x223e14u: goto label_223e14;
        case 0x223e18u: goto label_223e18;
        case 0x223e1cu: goto label_223e1c;
        case 0x223e20u: goto label_223e20;
        case 0x223e24u: goto label_223e24;
        case 0x223e28u: goto label_223e28;
        case 0x223e2cu: goto label_223e2c;
        case 0x223e30u: goto label_223e30;
        case 0x223e34u: goto label_223e34;
        case 0x223e38u: goto label_223e38;
        case 0x223e3cu: goto label_223e3c;
        case 0x223e40u: goto label_223e40;
        case 0x223e44u: goto label_223e44;
        case 0x223e48u: goto label_223e48;
        case 0x223e4cu: goto label_223e4c;
        case 0x223e50u: goto label_223e50;
        case 0x223e54u: goto label_223e54;
        case 0x223e58u: goto label_223e58;
        case 0x223e5cu: goto label_223e5c;
        case 0x223e60u: goto label_223e60;
        case 0x223e64u: goto label_223e64;
        case 0x223e68u: goto label_223e68;
        case 0x223e6cu: goto label_223e6c;
        case 0x223e70u: goto label_223e70;
        case 0x223e74u: goto label_223e74;
        case 0x223e78u: goto label_223e78;
        case 0x223e7cu: goto label_223e7c;
        case 0x223e80u: goto label_223e80;
        case 0x223e84u: goto label_223e84;
        case 0x223e88u: goto label_223e88;
        case 0x223e8cu: goto label_223e8c;
        case 0x223e90u: goto label_223e90;
        case 0x223e94u: goto label_223e94;
        case 0x223e98u: goto label_223e98;
        case 0x223e9cu: goto label_223e9c;
        case 0x223ea0u: goto label_223ea0;
        case 0x223ea4u: goto label_223ea4;
        case 0x223ea8u: goto label_223ea8;
        case 0x223eacu: goto label_223eac;
        case 0x223eb0u: goto label_223eb0;
        case 0x223eb4u: goto label_223eb4;
        case 0x223eb8u: goto label_223eb8;
        case 0x223ebcu: goto label_223ebc;
        case 0x223ec0u: goto label_223ec0;
        case 0x223ec4u: goto label_223ec4;
        case 0x223ec8u: goto label_223ec8;
        case 0x223eccu: goto label_223ecc;
        case 0x223ed0u: goto label_223ed0;
        case 0x223ed4u: goto label_223ed4;
        case 0x223ed8u: goto label_223ed8;
        case 0x223edcu: goto label_223edc;
        case 0x223ee0u: goto label_223ee0;
        case 0x223ee4u: goto label_223ee4;
        case 0x223ee8u: goto label_223ee8;
        case 0x223eecu: goto label_223eec;
        case 0x223ef0u: goto label_223ef0;
        case 0x223ef4u: goto label_223ef4;
        default: break;
    }

    ctx->pc = 0x223da8u;

label_223da8:
    // 0x223da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_223dac:
    // 0x223dac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_223db0:
    // 0x223db0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_223db4:
    // 0x223db4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x223db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_223db8:
    // 0x223db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_223dbc:
    // 0x223dbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x223dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_223dc0:
    // 0x223dc0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x223dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_223dc4:
    // 0x223dc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x223dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_223dc8:
    // 0x223dc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x223dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_223dcc:
    // 0x223dcc: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
label_223dd0:
    if (ctx->pc == 0x223DD0u) {
        ctx->pc = 0x223DD0u;
            // 0x223dd0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223DD4u;
        goto label_223dd4;
    }
    ctx->pc = 0x223DCCu;
    {
        const bool branch_taken_0x223dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x223DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223DCCu;
            // 0x223dd0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223dcc) {
            ctx->pc = 0x223E0Cu;
            goto label_223e0c;
        }
    }
    ctx->pc = 0x223DD4u;
label_223dd4:
    // 0x223dd4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_223dd8:
    // 0x223dd8: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_223ddc:
    // 0x223ddc: 0x248433b0  addiu       $a0, $a0, 0x33B0
    ctx->pc = 0x223ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13232));
label_223de0:
    // 0x223de0: 0x250833c0  addiu       $t0, $t0, 0x33C0
    ctx->pc = 0x223de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13248));
label_223de4:
    // 0x223de4: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x223de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_223de8:
    // 0x223de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_223dec:
    // 0x223dec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223df0:
    // 0x223df0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_223df4:
    // 0x223df4: 0x2407d8f0  addiu       $a3, $zero, -0x2710
    ctx->pc = 0x223df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
label_223df8:
    // 0x223df8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x223df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_223dfc:
    // 0x223dfc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x223dfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_223e00:
    // 0x223e00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_223e04:
    // 0x223e04: 0x8089794  j           func_225E50
label_223e08:
    if (ctx->pc == 0x223E08u) {
        ctx->pc = 0x223E08u;
            // 0x223e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x223E0Cu;
        goto label_223e0c;
    }
    ctx->pc = 0x223E04u;
    ctx->pc = 0x223E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223E04u;
            // 0x223e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x223E0Cu;
label_223e0c:
    // 0x223e0c: 0xc088696  jal         func_221A58
label_223e10:
    if (ctx->pc == 0x223E10u) {
        ctx->pc = 0x223E10u;
            // 0x223e10: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x223E14u;
        goto label_223e14;
    }
    ctx->pc = 0x223E0Cu;
    SET_GPR_U32(ctx, 31, 0x223E14u);
    ctx->pc = 0x223E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223E0Cu;
            // 0x223e10: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221A58u;
    if (runtime->hasFunction(0x221A58u)) {
        auto targetFn = runtime->lookupFunction(0x221A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E14u; }
        if (ctx->pc != 0x223E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00221A58_0x221a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E14u; }
        if (ctx->pc != 0x223E14u) { return; }
    }
    ctx->pc = 0x223E14u;
label_223e14:
    // 0x223e14: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x223e14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_223e18:
    // 0x223e18: 0x104f0006  beq         $v0, $t7, . + 4 + (0x6 << 2)
label_223e1c:
    if (ctx->pc == 0x223E1Cu) {
        ctx->pc = 0x223E1Cu;
            // 0x223e1c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x223E20u;
        goto label_223e20;
    }
    ctx->pc = 0x223E18u;
    {
        const bool branch_taken_0x223e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x223E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223E18u;
            // 0x223e1c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e18) {
            ctx->pc = 0x223E34u;
            goto label_223e34;
        }
    }
    ctx->pc = 0x223E20u;
label_223e20:
    // 0x223e20: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223e20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_223e24:
    // 0x223e24: 0x248433b0  addiu       $a0, $a0, 0x33B0
    ctx->pc = 0x223e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13232));
label_223e28:
    // 0x223e28: 0x250833d8  addiu       $t0, $t0, 0x33D8
    ctx->pc = 0x223e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13272));
label_223e2c:
    // 0x223e2c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_223e30:
    if (ctx->pc == 0x223E30u) {
        ctx->pc = 0x223E30u;
            // 0x223e30: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->pc = 0x223E34u;
        goto label_223e34;
    }
    ctx->pc = 0x223E2Cu;
    {
        const bool branch_taken_0x223e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223E2Cu;
            // 0x223e30: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e2c) {
            ctx->pc = 0x223DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223de8;
        }
    }
    ctx->pc = 0x223E34u;
label_223e34:
    // 0x223e34: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x223e34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_223e38:
    // 0x223e38: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x223e38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223e3c:
    // 0x223e3c: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
label_223e40:
    if (ctx->pc == 0x223E40u) {
        ctx->pc = 0x223E40u;
            // 0x223e40: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x223E44u;
        goto label_223e44;
    }
    ctx->pc = 0x223E3Cu;
    {
        const bool branch_taken_0x223e3c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x223E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223E3Cu;
            // 0x223e40: 0x3c08003f  lui         $t0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e3c) {
            ctx->pc = 0x223E54u;
            goto label_223e54;
        }
    }
    ctx->pc = 0x223E44u;
label_223e44:
    // 0x223e44: 0x248433b0  addiu       $a0, $a0, 0x33B0
    ctx->pc = 0x223e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13232));
label_223e48:
    // 0x223e48: 0x250833f0  addiu       $t0, $t0, 0x33F0
    ctx->pc = 0x223e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13296));
label_223e4c:
    // 0x223e4c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_223e50:
    if (ctx->pc == 0x223E50u) {
        ctx->pc = 0x223E50u;
            // 0x223e50: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->pc = 0x223E54u;
        goto label_223e54;
    }
    ctx->pc = 0x223E4Cu;
    {
        const bool branch_taken_0x223e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223E4Cu;
            // 0x223e50: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e4c) {
            ctx->pc = 0x223DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223de8;
        }
    }
    ctx->pc = 0x223E54u;
label_223e54:
    // 0x223e54: 0x8e0f1060  lw          $t7, 0x1060($s0)
    ctx->pc = 0x223e54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
label_223e58:
    // 0x223e58: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
label_223e5c:
    if (ctx->pc == 0x223E5Cu) {
        ctx->pc = 0x223E5Cu;
            // 0x223e5c: 0xae001044  sw          $zero, 0x1044($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4164), GPR_U32(ctx, 0));
        ctx->pc = 0x223E60u;
        goto label_223e60;
    }
    ctx->pc = 0x223E58u;
    {
        const bool branch_taken_0x223e58 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x223e58) {
            ctx->pc = 0x223E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223E58u;
            // 0x223e5c: 0xae001044  sw          $zero, 0x1044($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223E78u;
            goto label_223e78;
        }
    }
    ctx->pc = 0x223E60u;
label_223e60:
    // 0x223e60: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_223e64:
    // 0x223e64: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223e64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_223e68:
    // 0x223e68: 0x248433b0  addiu       $a0, $a0, 0x33B0
    ctx->pc = 0x223e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13232));
label_223e6c:
    // 0x223e6c: 0x25083378  addiu       $t0, $t0, 0x3378
    ctx->pc = 0x223e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13176));
label_223e70:
    // 0x223e70: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
label_223e74:
    if (ctx->pc == 0x223E74u) {
        ctx->pc = 0x223E74u;
            // 0x223e74: 0x2405004b  addiu       $a1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->pc = 0x223E78u;
        goto label_223e78;
    }
    ctx->pc = 0x223E70u;
    {
        const bool branch_taken_0x223e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223E70u;
            // 0x223e74: 0x2405004b  addiu       $a1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e70) {
            ctx->pc = 0x223DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223de8;
        }
    }
    ctx->pc = 0x223E78u;
label_223e78:
    // 0x223e78: 0x2604083c  addiu       $a0, $s0, 0x83C
    ctx->pc = 0x223e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2108));
label_223e7c:
    // 0x223e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223e80:
    // 0x223e80: 0xc049cb6  jal         func_1272D8
label_223e84:
    if (ctx->pc == 0x223E84u) {
        ctx->pc = 0x223E84u;
            // 0x223e84: 0x24060801  addiu       $a2, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->pc = 0x223E88u;
        goto label_223e88;
    }
    ctx->pc = 0x223E80u;
    SET_GPR_U32(ctx, 31, 0x223E88u);
    ctx->pc = 0x223E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223E80u;
            // 0x223e84: 0x24060801  addiu       $a2, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E88u; }
        if (ctx->pc != 0x223E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E88u; }
        if (ctx->pc != 0x223E88u) { return; }
    }
    ctx->pc = 0x223E88u;
label_223e88:
    // 0x223e88: 0xae000838  sw          $zero, 0x838($s0)
    ctx->pc = 0x223e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 0));
label_223e8c:
    // 0x223e8c: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x223e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_223e90:
    // 0x223e90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223e94:
    // 0x223e94: 0xc049cb6  jal         func_1272D8
label_223e98:
    if (ctx->pc == 0x223E98u) {
        ctx->pc = 0x223E98u;
            // 0x223e98: 0x24060801  addiu       $a2, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->pc = 0x223E9Cu;
        goto label_223e9c;
    }
    ctx->pc = 0x223E94u;
    SET_GPR_U32(ctx, 31, 0x223E9Cu);
    ctx->pc = 0x223E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223E94u;
            // 0x223e98: 0x24060801  addiu       $a2, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E9Cu; }
        if (ctx->pc != 0x223E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E9Cu; }
        if (ctx->pc != 0x223E9Cu) { return; }
    }
    ctx->pc = 0x223E9Cu;
label_223e9c:
    // 0x223e9c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x223e9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_223ea0:
    // 0x223ea0: 0xae11104c  sw          $s1, 0x104C($s0)
    ctx->pc = 0x223ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4172), GPR_U32(ctx, 17));
label_223ea4:
    // 0x223ea4: 0xae001048  sw          $zero, 0x1048($s0)
    ctx->pc = 0x223ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4168), GPR_U32(ctx, 0));
label_223ea8:
    // 0x223ea8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x223ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223eac:
    // 0x223eac: 0xae001050  sw          $zero, 0x1050($s0)
    ctx->pc = 0x223eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4176), GPR_U32(ctx, 0));
label_223eb0:
    // 0x223eb0: 0xc08984a  jal         func_226128
label_223eb4:
    if (ctx->pc == 0x223EB4u) {
        ctx->pc = 0x223EB4u;
            // 0x223eb4: 0x8de4ca2c  lw          $a0, -0x35D4($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953516)));
        ctx->pc = 0x223EB8u;
        goto label_223eb8;
    }
    ctx->pc = 0x223EB0u;
    SET_GPR_U32(ctx, 31, 0x223EB8u);
    ctx->pc = 0x223EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223EB0u;
            // 0x223eb4: 0x8de4ca2c  lw          $a0, -0x35D4($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953516)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226128u;
    if (runtime->hasFunction(0x226128u)) {
        auto targetFn = runtime->lookupFunction(0x226128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223EB8u; }
        if (ctx->pc != 0x223EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226128_0x226128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223EB8u; }
        if (ctx->pc != 0x223EB8u) { return; }
    }
    ctx->pc = 0x223EB8u;
label_223eb8:
    // 0x223eb8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_223ebc:
    if (ctx->pc == 0x223EBCu) {
        ctx->pc = 0x223EBCu;
            // 0x223ebc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223EC0u;
        goto label_223ec0;
    }
    ctx->pc = 0x223EB8u;
    {
        const bool branch_taken_0x223eb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x223EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223EB8u;
            // 0x223ebc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223eb8) {
            ctx->pc = 0x223EC8u;
            goto label_223ec8;
        }
    }
    ctx->pc = 0x223EC0u;
label_223ec0:
    // 0x223ec0: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x223ec0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
label_223ec4:
    // 0x223ec4: 0x25e53408  addiu       $a1, $t7, 0x3408
    ctx->pc = 0x223ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 13320));
label_223ec8:
    // 0x223ec8: 0x8e021060  lw          $v0, 0x1060($s0)
    ctx->pc = 0x223ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
label_223ecc:
    // 0x223ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223ed0:
    // 0x223ed0: 0x40f809  jalr        $v0
label_223ed4:
    if (ctx->pc == 0x223ED4u) {
        ctx->pc = 0x223ED4u;
            // 0x223ed4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223ED8u;
        goto label_223ed8;
    }
    ctx->pc = 0x223ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x223ED8u);
        ctx->pc = 0x223ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223ED0u;
            // 0x223ed4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x223ED8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223ED8u; }
            if (ctx->pc != 0x223ED8u) { return; }
        }
        }
    }
    ctx->pc = 0x223ED8u;
label_223ed8:
    // 0x223ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_223edc:
    // 0x223edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_223ee0:
    // 0x223ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x223ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_223ee4:
    // 0x223ee4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x223ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_223ee8:
    // 0x223ee8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x223ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_223eec:
    // 0x223eec: 0x3e00008  jr          $ra
label_223ef0:
    if (ctx->pc == 0x223EF0u) {
        ctx->pc = 0x223EF0u;
            // 0x223ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x223EF4u;
        goto label_223ef4;
    }
    ctx->pc = 0x223EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223EECu;
            // 0x223ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223EF4u;
label_223ef4:
    // 0x223ef4: 0x0  nop
    ctx->pc = 0x223ef4u;
    // NOP
    ctx->pc = 0x223ef8u;
}
