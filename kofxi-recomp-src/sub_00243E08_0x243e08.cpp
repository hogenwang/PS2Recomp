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

// Function: sub_00243E08
// Address: 0x243e08 - 0x244018
void sub_00243E08_0x243e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243E08_0x243e08");
#endif

    switch (ctx->pc) {
        case 0x243e08u: goto label_243e08;
        case 0x243e0cu: goto label_243e0c;
        case 0x243e10u: goto label_243e10;
        case 0x243e14u: goto label_243e14;
        case 0x243e18u: goto label_243e18;
        case 0x243e1cu: goto label_243e1c;
        case 0x243e20u: goto label_243e20;
        case 0x243e24u: goto label_243e24;
        case 0x243e28u: goto label_243e28;
        case 0x243e2cu: goto label_243e2c;
        case 0x243e30u: goto label_243e30;
        case 0x243e34u: goto label_243e34;
        case 0x243e38u: goto label_243e38;
        case 0x243e3cu: goto label_243e3c;
        case 0x243e40u: goto label_243e40;
        case 0x243e44u: goto label_243e44;
        case 0x243e48u: goto label_243e48;
        case 0x243e4cu: goto label_243e4c;
        case 0x243e50u: goto label_243e50;
        case 0x243e54u: goto label_243e54;
        case 0x243e58u: goto label_243e58;
        case 0x243e5cu: goto label_243e5c;
        case 0x243e60u: goto label_243e60;
        case 0x243e64u: goto label_243e64;
        case 0x243e68u: goto label_243e68;
        case 0x243e6cu: goto label_243e6c;
        case 0x243e70u: goto label_243e70;
        case 0x243e74u: goto label_243e74;
        case 0x243e78u: goto label_243e78;
        case 0x243e7cu: goto label_243e7c;
        case 0x243e80u: goto label_243e80;
        case 0x243e84u: goto label_243e84;
        case 0x243e88u: goto label_243e88;
        case 0x243e8cu: goto label_243e8c;
        case 0x243e90u: goto label_243e90;
        case 0x243e94u: goto label_243e94;
        case 0x243e98u: goto label_243e98;
        case 0x243e9cu: goto label_243e9c;
        case 0x243ea0u: goto label_243ea0;
        case 0x243ea4u: goto label_243ea4;
        case 0x243ea8u: goto label_243ea8;
        case 0x243eacu: goto label_243eac;
        case 0x243eb0u: goto label_243eb0;
        case 0x243eb4u: goto label_243eb4;
        case 0x243eb8u: goto label_243eb8;
        case 0x243ebcu: goto label_243ebc;
        case 0x243ec0u: goto label_243ec0;
        case 0x243ec4u: goto label_243ec4;
        case 0x243ec8u: goto label_243ec8;
        case 0x243eccu: goto label_243ecc;
        case 0x243ed0u: goto label_243ed0;
        case 0x243ed4u: goto label_243ed4;
        case 0x243ed8u: goto label_243ed8;
        case 0x243edcu: goto label_243edc;
        case 0x243ee0u: goto label_243ee0;
        case 0x243ee4u: goto label_243ee4;
        case 0x243ee8u: goto label_243ee8;
        case 0x243eecu: goto label_243eec;
        case 0x243ef0u: goto label_243ef0;
        case 0x243ef4u: goto label_243ef4;
        case 0x243ef8u: goto label_243ef8;
        case 0x243efcu: goto label_243efc;
        case 0x243f00u: goto label_243f00;
        case 0x243f04u: goto label_243f04;
        case 0x243f08u: goto label_243f08;
        case 0x243f0cu: goto label_243f0c;
        case 0x243f10u: goto label_243f10;
        case 0x243f14u: goto label_243f14;
        case 0x243f18u: goto label_243f18;
        case 0x243f1cu: goto label_243f1c;
        case 0x243f20u: goto label_243f20;
        case 0x243f24u: goto label_243f24;
        case 0x243f28u: goto label_243f28;
        case 0x243f2cu: goto label_243f2c;
        case 0x243f30u: goto label_243f30;
        case 0x243f34u: goto label_243f34;
        case 0x243f38u: goto label_243f38;
        case 0x243f3cu: goto label_243f3c;
        case 0x243f40u: goto label_243f40;
        case 0x243f44u: goto label_243f44;
        case 0x243f48u: goto label_243f48;
        case 0x243f4cu: goto label_243f4c;
        case 0x243f50u: goto label_243f50;
        case 0x243f54u: goto label_243f54;
        case 0x243f58u: goto label_243f58;
        case 0x243f5cu: goto label_243f5c;
        case 0x243f60u: goto label_243f60;
        case 0x243f64u: goto label_243f64;
        case 0x243f68u: goto label_243f68;
        case 0x243f6cu: goto label_243f6c;
        case 0x243f70u: goto label_243f70;
        case 0x243f74u: goto label_243f74;
        case 0x243f78u: goto label_243f78;
        case 0x243f7cu: goto label_243f7c;
        case 0x243f80u: goto label_243f80;
        case 0x243f84u: goto label_243f84;
        case 0x243f88u: goto label_243f88;
        case 0x243f8cu: goto label_243f8c;
        case 0x243f90u: goto label_243f90;
        case 0x243f94u: goto label_243f94;
        case 0x243f98u: goto label_243f98;
        case 0x243f9cu: goto label_243f9c;
        case 0x243fa0u: goto label_243fa0;
        case 0x243fa4u: goto label_243fa4;
        case 0x243fa8u: goto label_243fa8;
        case 0x243facu: goto label_243fac;
        case 0x243fb0u: goto label_243fb0;
        case 0x243fb4u: goto label_243fb4;
        case 0x243fb8u: goto label_243fb8;
        case 0x243fbcu: goto label_243fbc;
        case 0x243fc0u: goto label_243fc0;
        case 0x243fc4u: goto label_243fc4;
        case 0x243fc8u: goto label_243fc8;
        case 0x243fccu: goto label_243fcc;
        case 0x243fd0u: goto label_243fd0;
        case 0x243fd4u: goto label_243fd4;
        case 0x243fd8u: goto label_243fd8;
        case 0x243fdcu: goto label_243fdc;
        case 0x243fe0u: goto label_243fe0;
        case 0x243fe4u: goto label_243fe4;
        case 0x243fe8u: goto label_243fe8;
        case 0x243fecu: goto label_243fec;
        case 0x243ff0u: goto label_243ff0;
        case 0x243ff4u: goto label_243ff4;
        case 0x243ff8u: goto label_243ff8;
        case 0x243ffcu: goto label_243ffc;
        case 0x244000u: goto label_244000;
        case 0x244004u: goto label_244004;
        case 0x244008u: goto label_244008;
        case 0x24400cu: goto label_24400c;
        case 0x244010u: goto label_244010;
        case 0x244014u: goto label_244014;
        default: break;
    }

    ctx->pc = 0x243e08u;

label_243e08:
    // 0x243e08: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x243e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_243e0c:
    // 0x243e0c: 0xffb500e0  sd          $s5, 0xE0($sp)
    ctx->pc = 0x243e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
label_243e10:
    // 0x243e10: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x243e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
label_243e14:
    // 0x243e14: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x243e14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_243e18:
    // 0x243e18: 0xffb300c0  sd          $s3, 0xC0($sp)
    ctx->pc = 0x243e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
label_243e1c:
    // 0x243e1c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x243e1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_243e20:
    // 0x243e20: 0xffb100a0  sd          $s1, 0xA0($sp)
    ctx->pc = 0x243e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
label_243e24:
    // 0x243e24: 0x32b30004  andi        $s3, $s5, 0x4
    ctx->pc = 0x243e24u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_243e28:
    // 0x243e28: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x243e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_243e2c:
    // 0x243e2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x243e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_243e30:
    // 0x243e30: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x243e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
label_243e34:
    // 0x243e34: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x243e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_243e38:
    // 0x243e38: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_243e3c:
    if (ctx->pc == 0x243E3Cu) {
        ctx->pc = 0x243E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E38u;
        // 0x243e3c: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E40u;
        goto label_243e40;
    }
    ctx->pc = 0x243E38u;
    {
        const bool branch_taken_0x243e38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E38u;
        // 0x243e3c: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e38) {
            ctx->pc = 0x243E48u;
            goto label_243e48;
        }
    }
    ctx->pc = 0x243E40u;
label_243e40:
    // 0x243e40: 0x10000002  b           . + 4 + (0x2 << 2)
label_243e44:
    if (ctx->pc == 0x243E44u) {
        ctx->pc = 0x243E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E40u;
        // 0x243e44: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E48u;
        goto label_243e48;
    }
    ctx->pc = 0x243E40u;
    {
        const bool branch_taken_0x243e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E40u;
        // 0x243e44: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e40) {
            ctx->pc = 0x243E4Cu;
            goto label_243e4c;
        }
    }
    ctx->pc = 0x243E48u;
label_243e48:
    // 0x243e48: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x243e48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_243e4c:
    // 0x243e4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243e50:
    // 0x243e50: 0x56820018  bnel        $s4, $v0, . + 4 + (0x18 << 2)
label_243e54:
    if (ctx->pc == 0x243E54u) {
        ctx->pc = 0x243E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E50u;
        // 0x243e54: 0x8e28002c  lw          $t0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E58u;
        goto label_243e58;
    }
    ctx->pc = 0x243E50u;
    {
        const bool branch_taken_0x243e50 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x243e50) {
            ctx->pc = 0x243E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243E50u;
            // 0x243e54: 0x8e28002c  lw          $t0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243EB4u;
            goto label_243eb4;
        }
    }
    ctx->pc = 0x243E58u;
label_243e58:
    // 0x243e58: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_243e5c:
    if (ctx->pc == 0x243E5Cu) {
        ctx->pc = 0x243E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E58u;
        // 0x243e5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E60u;
        goto label_243e60;
    }
    ctx->pc = 0x243E58u;
    {
        const bool branch_taken_0x243e58 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x243E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E58u;
        // 0x243e5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e58) {
            ctx->pc = 0x243E78u;
            goto label_243e78;
        }
    }
    ctx->pc = 0x243E60u;
label_243e60:
    // 0x243e60: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x243e60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_243e64:
    // 0x243e64: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_243e68:
    if (ctx->pc == 0x243E68u) {
        ctx->pc = 0x243E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E64u;
        // 0x243e68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E6Cu;
        goto label_243e6c;
    }
    ctx->pc = 0x243E64u;
    {
        const bool branch_taken_0x243e64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E64u;
        // 0x243e68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e64) {
            ctx->pc = 0x243E78u;
            goto label_243e78;
        }
    }
    ctx->pc = 0x243E6Cu;
label_243e6c:
    // 0x243e6c: 0xc090f62  jal         func_243D88
label_243e70:
    if (ctx->pc == 0x243E70u) {
        ctx->pc = 0x243E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E6Cu;
        // 0x243e70: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E74u;
        goto label_243e74;
    }
    ctx->pc = 0x243E6Cu;
    SET_GPR_U32(ctx, 31, 0x243E74u);
    ctx->pc = 0x243E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E6Cu;
    // 0x243e70: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243D88u, 0x243E6Cu, 0x243E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E74u;
label_243e74:
    // 0x243e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x243e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243e78:
    // 0x243e78: 0xc090bf0  jal         func_242FC0
label_243e7c:
    if (ctx->pc == 0x243E7Cu) {
        ctx->pc = 0x243E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E78u;
        // 0x243e7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E80u;
        goto label_243e80;
    }
    ctx->pc = 0x243E78u;
    SET_GPR_U32(ctx, 31, 0x243E80u);
    ctx->pc = 0x243E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E78u;
    // 0x243e7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242FC0u, 0x243E78u, 0x243E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E80u;
label_243e80:
    // 0x243e80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x243e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243e84:
    // 0x243e84: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_243e88:
    if (ctx->pc == 0x243E88u) {
        ctx->pc = 0x243E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E84u;
        // 0x243e88: 0x8e28002c  lw          $t0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E8Cu;
        goto label_243e8c;
    }
    ctx->pc = 0x243E84u;
    {
        const bool branch_taken_0x243e84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x243e84) {
            ctx->pc = 0x243E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243E84u;
            // 0x243e88: 0x8e28002c  lw          $t0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243EB4u;
            goto label_243eb4;
        }
    }
    ctx->pc = 0x243E8Cu;
label_243e8c:
    // 0x243e8c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x243e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_243e90:
    // 0x243e90: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x243e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_243e94:
    // 0x243e94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x243e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_243e98:
    // 0x243e98: 0x10710005  beq         $v1, $s1, . + 4 + (0x5 << 2)
label_243e9c:
    if (ctx->pc == 0x243E9Cu) {
        ctx->pc = 0x243E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E98u;
        // 0x243e9c: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EA0u;
        goto label_243ea0;
    }
    ctx->pc = 0x243E98u;
    {
        const bool branch_taken_0x243e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x243E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E98u;
        // 0x243e9c: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e98) {
            ctx->pc = 0x243EB0u;
            goto label_243eb0;
        }
    }
    ctx->pc = 0x243EA0u;
label_243ea0:
    // 0x243ea0: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x243ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_243ea4:
    // 0x243ea4: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x243ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_243ea8:
    // 0x243ea8: 0x10000052  b           . + 4 + (0x52 << 2)
label_243eac:
    if (ctx->pc == 0x243EACu) {
        ctx->pc = 0x243EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EA8u;
        // 0x243eac: 0x73100a  movz        $v0, $v1, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EB0u;
        goto label_243eb0;
    }
    ctx->pc = 0x243EA8u;
    {
        const bool branch_taken_0x243ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EA8u;
        // 0x243eac: 0x73100a  movz        $v0, $v1, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ea8) {
            ctx->pc = 0x243FF4u;
            goto label_243ff4;
        }
    }
    ctx->pc = 0x243EB0u;
label_243eb0:
    // 0x243eb0: 0x8e28002c  lw          $t0, 0x2C($s1)
    ctx->pc = 0x243eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_243eb4:
    // 0x243eb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x243eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243eb8:
    // 0x243eb8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x243eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_243ebc:
    // 0x243ebc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x243ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_243ec0:
    // 0x243ec0: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x243ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_243ec4:
    // 0x243ec4: 0x2a84025  or          $t0, $s5, $t0
    ctx->pc = 0x243ec4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) | GPR_U64(ctx, 8));
label_243ec8:
    // 0x243ec8: 0xc090d8e  jal         func_243638
label_243ecc:
    if (ctx->pc == 0x243ECCu) {
        ctx->pc = 0x243ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EC8u;
        // 0x243ecc: 0x27a90080  addiu       $t1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243ED0u;
        goto label_243ed0;
    }
    ctx->pc = 0x243EC8u;
    SET_GPR_U32(ctx, 31, 0x243ED0u);
    ctx->pc = 0x243ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243EC8u;
    // 0x243ecc: 0x27a90080  addiu       $t1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243638u, 0x243EC8u, 0x243ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243ED0u;
label_243ed0:
    // 0x243ed0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x243ed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243ed4:
    // 0x243ed4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243ed8:
    // 0x243ed8: 0x16820012  bne         $s4, $v0, . + 4 + (0x12 << 2)
label_243edc:
    if (ctx->pc == 0x243EDCu) {
        ctx->pc = 0x243EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243ED8u;
        // 0x243edc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EE0u;
        goto label_243ee0;
    }
    ctx->pc = 0x243ED8u;
    {
        const bool branch_taken_0x243ed8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x243EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243ED8u;
        // 0x243edc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ed8) {
            ctx->pc = 0x243F24u;
            goto label_243f24;
        }
    }
    ctx->pc = 0x243EE0u;
label_243ee0:
    // 0x243ee0: 0x16400010  bnez        $s2, . + 4 + (0x10 << 2)
label_243ee4:
    if (ctx->pc == 0x243EE4u) {
        ctx->pc = 0x243EE8u;
        goto label_243ee8;
    }
    ctx->pc = 0x243EE0u;
    {
        const bool branch_taken_0x243ee0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x243ee0) {
            ctx->pc = 0x243F24u;
            goto label_243f24;
        }
    }
    ctx->pc = 0x243EE8u;
label_243ee8:
    // 0x243ee8: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x243ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_243eec:
    // 0x243eec: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_243ef0:
    if (ctx->pc == 0x243EF0u) {
        ctx->pc = 0x243EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EECu;
        // 0x243ef0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243EF4u;
        goto label_243ef4;
    }
    ctx->pc = 0x243EECu;
    {
        const bool branch_taken_0x243eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EECu;
        // 0x243ef0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243eec) {
            ctx->pc = 0x243F24u;
            goto label_243f24;
        }
    }
    ctx->pc = 0x243EF4u;
label_243ef4:
    // 0x243ef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x243ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243ef8:
    // 0x243ef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243efc:
    // 0x243efc: 0xc091572  jal         func_2455C8
label_243f00:
    if (ctx->pc == 0x243F00u) {
        ctx->pc = 0x243F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243EFCu;
        // 0x243f00: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F04u;
        goto label_243f04;
    }
    ctx->pc = 0x243EFCu;
    SET_GPR_U32(ctx, 31, 0x243F04u);
    ctx->pc = 0x243F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243EFCu;
    // 0x243f00: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2455C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455C8u, 0x243EFCu, 0x243F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F04u;
label_243f04:
    // 0x243f04: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x243f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_243f08:
    // 0x243f08: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_243f0c:
    if (ctx->pc == 0x243F0Cu) {
        ctx->pc = 0x243F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F08u;
        // 0x243f0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F10u;
        goto label_243f10;
    }
    ctx->pc = 0x243F08u;
    {
        const bool branch_taken_0x243f08 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x243f08) {
            ctx->pc = 0x243F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243F08u;
            // 0x243f0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243F24u;
            goto label_243f24;
        }
    }
    ctx->pc = 0x243F10u;
label_243f10:
    // 0x243f10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_243f14:
    // 0x243f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243f18:
    // 0x243f18: 0xc090c4c  jal         func_243130
label_243f1c:
    if (ctx->pc == 0x243F1Cu) {
        ctx->pc = 0x243F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F18u;
        // 0x243f1c: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F20u;
        goto label_243f20;
    }
    ctx->pc = 0x243F18u;
    SET_GPR_U32(ctx, 31, 0x243F20u);
    ctx->pc = 0x243F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F18u;
    // 0x243f1c: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x243F18u, 0x243F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F20u;
label_243f20:
    // 0x243f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243f24:
    // 0x243f24: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
label_243f28:
    if (ctx->pc == 0x243F28u) {
        ctx->pc = 0x243F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F24u;
        // 0x243f28: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F2Cu;
        goto label_243f2c;
    }
    ctx->pc = 0x243F24u;
    {
        const bool branch_taken_0x243f24 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x243F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F24u;
        // 0x243f28: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f24) {
            ctx->pc = 0x243FF4u;
            goto label_243ff4;
        }
    }
    ctx->pc = 0x243F2Cu;
label_243f2c:
    // 0x243f2c: 0x16400032  bnez        $s2, . + 4 + (0x32 << 2)
label_243f30:
    if (ctx->pc == 0x243F30u) {
        ctx->pc = 0x243F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F2Cu;
        // 0x243f30: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F34u;
        goto label_243f34;
    }
    ctx->pc = 0x243F2Cu;
    {
        const bool branch_taken_0x243f2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x243F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F2Cu;
        // 0x243f30: 0xdfbf00f0  ld          $ra, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f2c) {
            ctx->pc = 0x243FF8u;
            goto label_243ff8;
        }
    }
    ctx->pc = 0x243F34u;
label_243f34:
    // 0x243f34: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x243f34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_243f38:
    // 0x243f38: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_243f3c:
    if (ctx->pc == 0x243F3Cu) {
        ctx->pc = 0x243F40u;
        goto label_243f40;
    }
    ctx->pc = 0x243F38u;
    {
        const bool branch_taken_0x243f38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x243f38) {
            ctx->pc = 0x243FF8u;
            goto label_243ff8;
        }
    }
    ctx->pc = 0x243F40u;
label_243f40:
    // 0x243f40: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x243f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_243f44:
    // 0x243f44: 0x8e07004c  lw          $a3, 0x4C($s0)
    ctx->pc = 0x243f44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_243f48:
    // 0x243f48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x243f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_243f4c:
    // 0x243f4c: 0x10f10023  beq         $a3, $s1, . + 4 + (0x23 << 2)
label_243f50:
    if (ctx->pc == 0x243F50u) {
        ctx->pc = 0x243F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F4Cu;
        // 0x243f50: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F54u;
        goto label_243f54;
    }
    ctx->pc = 0x243F4Cu;
    {
        const bool branch_taken_0x243f4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 17));
        ctx->pc = 0x243F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F4Cu;
        // 0x243f50: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f4c) {
            ctx->pc = 0x243FDCu;
            goto label_243fdc;
        }
    }
    ctx->pc = 0x243F54u;
label_243f54:
    // 0x243f54: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x243f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_243f58:
    // 0x243f58: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x243f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_243f5c:
    // 0x243f5c: 0x24a566f0  addiu       $a1, $a1, 0x66F0
    ctx->pc = 0x243f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26352));
label_243f60:
    // 0x243f60: 0xc08b5ac  jal         func_22D6B0
label_243f64:
    if (ctx->pc == 0x243F64u) {
        ctx->pc = 0x243F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F60u;
        // 0x243f64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F68u;
        goto label_243f68;
    }
    ctx->pc = 0x243F60u;
    SET_GPR_U32(ctx, 31, 0x243F68u);
    ctx->pc = 0x243F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F60u;
    // 0x243f64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x243F60u, 0x243F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F68u;
label_243f68:
    // 0x243f68: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x243f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_243f6c:
    // 0x243f6c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x243f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_243f70:
    // 0x243f70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_243f74:
    if (ctx->pc == 0x243F74u) {
        ctx->pc = 0x243F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F70u;
        // 0x243f74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F78u;
        goto label_243f78;
    }
    ctx->pc = 0x243F70u;
    {
        const bool branch_taken_0x243f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F70u;
        // 0x243f74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f70) {
            ctx->pc = 0x243F88u;
            goto label_243f88;
        }
    }
    ctx->pc = 0x243F78u;
label_243f78:
    // 0x243f78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243f7c:
    // 0x243f7c: 0x40f809  jalr        $v0
label_243f80:
    if (ctx->pc == 0x243F80u) {
        ctx->pc = 0x243F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F7Cu;
        // 0x243f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F84u;
        goto label_243f84;
    }
    ctx->pc = 0x243F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243F84u);
        ctx->pc = 0x243F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F7Cu;
        // 0x243f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243F7Cu, 0x243F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243F84u;
label_243f84:
    // 0x243f84: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x243f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_243f88:
    // 0x243f88: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x243f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_243f8c:
    // 0x243f8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x243f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_243f90:
    // 0x243f90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_243f94:
    if (ctx->pc == 0x243F94u) {
        ctx->pc = 0x243F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F90u;
        // 0x243f94: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243F98u;
        goto label_243f98;
    }
    ctx->pc = 0x243F90u;
    {
        const bool branch_taken_0x243f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F90u;
        // 0x243f94: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f90) {
            ctx->pc = 0x243FA0u;
            goto label_243fa0;
        }
    }
    ctx->pc = 0x243F98u;
label_243f98:
    // 0x243f98: 0xc090c82  jal         func_243208
label_243f9c:
    if (ctx->pc == 0x243F9Cu) {
        ctx->pc = 0x243F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F98u;
        // 0x243f9c: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243FA0u;
        goto label_243fa0;
    }
    ctx->pc = 0x243F98u;
    SET_GPR_U32(ctx, 31, 0x243FA0u);
    ctx->pc = 0x243F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F98u;
    // 0x243f9c: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243208u, 0x243F98u, 0x243FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FA0u;
label_243fa0:
    // 0x243fa0: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x243fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
label_243fa4:
    // 0x243fa4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x243fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_243fa8:
    // 0x243fa8: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x243fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_243fac:
    // 0x243fac: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x243facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_243fb0:
    // 0x243fb0: 0xdc620040  ld          $v0, 0x40($v1)
    ctx->pc = 0x243fb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 64)));
label_243fb4:
    // 0x243fb4: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x243fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
label_243fb8:
    // 0x243fb8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x243fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_243fbc:
    // 0x243fbc: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x243fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_243fc0:
    // 0x243fc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_243fc4:
    // 0x243fc4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_243fc8:
    if (ctx->pc == 0x243FC8u) {
        ctx->pc = 0x243FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FC4u;
        // 0x243fc8: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243FCCu;
        goto label_243fcc;
    }
    ctx->pc = 0x243FC4u;
    {
        const bool branch_taken_0x243fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FC4u;
        // 0x243fc8: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243fc4) {
            ctx->pc = 0x243FDCu;
            goto label_243fdc;
        }
    }
    ctx->pc = 0x243FCCu;
label_243fcc:
    // 0x243fcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243fd0:
    // 0x243fd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x243fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243fd4:
    // 0x243fd4: 0x60f809  jalr        $v1
label_243fd8:
    if (ctx->pc == 0x243FD8u) {
        ctx->pc = 0x243FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FD4u;
        // 0x243fd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243FDCu;
        goto label_243fdc;
    }
    ctx->pc = 0x243FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x243FDCu);
        ctx->pc = 0x243FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FD4u;
        // 0x243fd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243FD4u, 0x243FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243FDCu;
label_243fdc:
    // 0x243fdc: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x243fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_243fe0:
    // 0x243fe0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x243fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_243fe4:
    // 0x243fe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x243fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243fe8:
    // 0x243fe8: 0xc091572  jal         func_2455C8
label_243fec:
    if (ctx->pc == 0x243FECu) {
        ctx->pc = 0x243FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FE8u;
        // 0x243fec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243FF0u;
        goto label_243ff0;
    }
    ctx->pc = 0x243FE8u;
    SET_GPR_U32(ctx, 31, 0x243FF0u);
    ctx->pc = 0x243FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243FE8u;
    // 0x243fec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2455C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455C8u, 0x243FE8u, 0x243FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FF0u;
label_243ff0:
    // 0x243ff0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x243ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243ff4:
    // 0x243ff4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x243ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_243ff8:
    // 0x243ff8: 0xdfb500e0  ld          $s5, 0xE0($sp)
    ctx->pc = 0x243ff8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_243ffc:
    // 0x243ffc: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x243ffcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_244000:
    // 0x244000: 0xdfb300c0  ld          $s3, 0xC0($sp)
    ctx->pc = 0x244000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_244004:
    // 0x244004: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x244004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_244008:
    // 0x244008: 0xdfb100a0  ld          $s1, 0xA0($sp)
    ctx->pc = 0x244008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24400c:
    // 0x24400c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x24400cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_244010:
    // 0x244010: 0x3e00008  jr          $ra
label_244014:
    if (ctx->pc == 0x244014u) {
        ctx->pc = 0x244014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244010u;
        // 0x244014: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244018u;
        goto label_fallthrough_0x244010;
    }
    ctx->pc = 0x244010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244010u;
        // 0x244014: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244010:
    ctx->pc = 0x244018u;
}
