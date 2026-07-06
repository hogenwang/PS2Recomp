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

// Function: sub_002AFCD0
// Address: 0x2afcd0 - 0x2afee8
void sub_002AFCD0_0x2afcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFCD0_0x2afcd0");
#endif

    switch (ctx->pc) {
        case 0x2afcd0u: goto label_2afcd0;
        case 0x2afcd4u: goto label_2afcd4;
        case 0x2afcd8u: goto label_2afcd8;
        case 0x2afcdcu: goto label_2afcdc;
        case 0x2afce0u: goto label_2afce0;
        case 0x2afce4u: goto label_2afce4;
        case 0x2afce8u: goto label_2afce8;
        case 0x2afcecu: goto label_2afcec;
        case 0x2afcf0u: goto label_2afcf0;
        case 0x2afcf4u: goto label_2afcf4;
        case 0x2afcf8u: goto label_2afcf8;
        case 0x2afcfcu: goto label_2afcfc;
        case 0x2afd00u: goto label_2afd00;
        case 0x2afd04u: goto label_2afd04;
        case 0x2afd08u: goto label_2afd08;
        case 0x2afd0cu: goto label_2afd0c;
        case 0x2afd10u: goto label_2afd10;
        case 0x2afd14u: goto label_2afd14;
        case 0x2afd18u: goto label_2afd18;
        case 0x2afd1cu: goto label_2afd1c;
        case 0x2afd20u: goto label_2afd20;
        case 0x2afd24u: goto label_2afd24;
        case 0x2afd28u: goto label_2afd28;
        case 0x2afd2cu: goto label_2afd2c;
        case 0x2afd30u: goto label_2afd30;
        case 0x2afd34u: goto label_2afd34;
        case 0x2afd38u: goto label_2afd38;
        case 0x2afd3cu: goto label_2afd3c;
        case 0x2afd40u: goto label_2afd40;
        case 0x2afd44u: goto label_2afd44;
        case 0x2afd48u: goto label_2afd48;
        case 0x2afd4cu: goto label_2afd4c;
        case 0x2afd50u: goto label_2afd50;
        case 0x2afd54u: goto label_2afd54;
        case 0x2afd58u: goto label_2afd58;
        case 0x2afd5cu: goto label_2afd5c;
        case 0x2afd60u: goto label_2afd60;
        case 0x2afd64u: goto label_2afd64;
        case 0x2afd68u: goto label_2afd68;
        case 0x2afd6cu: goto label_2afd6c;
        case 0x2afd70u: goto label_2afd70;
        case 0x2afd74u: goto label_2afd74;
        case 0x2afd78u: goto label_2afd78;
        case 0x2afd7cu: goto label_2afd7c;
        case 0x2afd80u: goto label_2afd80;
        case 0x2afd84u: goto label_2afd84;
        case 0x2afd88u: goto label_2afd88;
        case 0x2afd8cu: goto label_2afd8c;
        case 0x2afd90u: goto label_2afd90;
        case 0x2afd94u: goto label_2afd94;
        case 0x2afd98u: goto label_2afd98;
        case 0x2afd9cu: goto label_2afd9c;
        case 0x2afda0u: goto label_2afda0;
        case 0x2afda4u: goto label_2afda4;
        case 0x2afda8u: goto label_2afda8;
        case 0x2afdacu: goto label_2afdac;
        case 0x2afdb0u: goto label_2afdb0;
        case 0x2afdb4u: goto label_2afdb4;
        case 0x2afdb8u: goto label_2afdb8;
        case 0x2afdbcu: goto label_2afdbc;
        case 0x2afdc0u: goto label_2afdc0;
        case 0x2afdc4u: goto label_2afdc4;
        case 0x2afdc8u: goto label_2afdc8;
        case 0x2afdccu: goto label_2afdcc;
        case 0x2afdd0u: goto label_2afdd0;
        case 0x2afdd4u: goto label_2afdd4;
        case 0x2afdd8u: goto label_2afdd8;
        case 0x2afddcu: goto label_2afddc;
        case 0x2afde0u: goto label_2afde0;
        case 0x2afde4u: goto label_2afde4;
        case 0x2afde8u: goto label_2afde8;
        case 0x2afdecu: goto label_2afdec;
        case 0x2afdf0u: goto label_2afdf0;
        case 0x2afdf4u: goto label_2afdf4;
        case 0x2afdf8u: goto label_2afdf8;
        case 0x2afdfcu: goto label_2afdfc;
        case 0x2afe00u: goto label_2afe00;
        case 0x2afe04u: goto label_2afe04;
        case 0x2afe08u: goto label_2afe08;
        case 0x2afe0cu: goto label_2afe0c;
        case 0x2afe10u: goto label_2afe10;
        case 0x2afe14u: goto label_2afe14;
        case 0x2afe18u: goto label_2afe18;
        case 0x2afe1cu: goto label_2afe1c;
        case 0x2afe20u: goto label_2afe20;
        case 0x2afe24u: goto label_2afe24;
        case 0x2afe28u: goto label_2afe28;
        case 0x2afe2cu: goto label_2afe2c;
        case 0x2afe30u: goto label_2afe30;
        case 0x2afe34u: goto label_2afe34;
        case 0x2afe38u: goto label_2afe38;
        case 0x2afe3cu: goto label_2afe3c;
        case 0x2afe40u: goto label_2afe40;
        case 0x2afe44u: goto label_2afe44;
        case 0x2afe48u: goto label_2afe48;
        case 0x2afe4cu: goto label_2afe4c;
        case 0x2afe50u: goto label_2afe50;
        case 0x2afe54u: goto label_2afe54;
        case 0x2afe58u: goto label_2afe58;
        case 0x2afe5cu: goto label_2afe5c;
        case 0x2afe60u: goto label_2afe60;
        case 0x2afe64u: goto label_2afe64;
        case 0x2afe68u: goto label_2afe68;
        case 0x2afe6cu: goto label_2afe6c;
        case 0x2afe70u: goto label_2afe70;
        case 0x2afe74u: goto label_2afe74;
        case 0x2afe78u: goto label_2afe78;
        case 0x2afe7cu: goto label_2afe7c;
        case 0x2afe80u: goto label_2afe80;
        case 0x2afe84u: goto label_2afe84;
        case 0x2afe88u: goto label_2afe88;
        case 0x2afe8cu: goto label_2afe8c;
        case 0x2afe90u: goto label_2afe90;
        case 0x2afe94u: goto label_2afe94;
        case 0x2afe98u: goto label_2afe98;
        case 0x2afe9cu: goto label_2afe9c;
        case 0x2afea0u: goto label_2afea0;
        case 0x2afea4u: goto label_2afea4;
        case 0x2afea8u: goto label_2afea8;
        case 0x2afeacu: goto label_2afeac;
        case 0x2afeb0u: goto label_2afeb0;
        case 0x2afeb4u: goto label_2afeb4;
        case 0x2afeb8u: goto label_2afeb8;
        case 0x2afebcu: goto label_2afebc;
        case 0x2afec0u: goto label_2afec0;
        case 0x2afec4u: goto label_2afec4;
        case 0x2afec8u: goto label_2afec8;
        case 0x2afeccu: goto label_2afecc;
        case 0x2afed0u: goto label_2afed0;
        case 0x2afed4u: goto label_2afed4;
        case 0x2afed8u: goto label_2afed8;
        case 0x2afedcu: goto label_2afedc;
        case 0x2afee0u: goto label_2afee0;
        case 0x2afee4u: goto label_2afee4;
        default: break;
    }

    ctx->pc = 0x2afcd0u;

label_2afcd0:
    // 0x2afcd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2afcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2afcd4:
    // 0x2afcd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2afcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2afcd8:
    // 0x2afcd8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2afcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2afcdc:
    // 0x2afcdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2afcdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2afce0:
    // 0x2afce0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2afce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2afce4:
    // 0x2afce4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2afce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2afce8:
    // 0x2afce8: 0xc0aeef6  jal         func_2BBBD8
label_2afcec:
    if (ctx->pc == 0x2AFCECu) {
        ctx->pc = 0x2AFCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCE8u;
        // 0x2afcec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFCF0u;
        goto label_2afcf0;
    }
    ctx->pc = 0x2AFCE8u;
    SET_GPR_U32(ctx, 31, 0x2AFCF0u);
    ctx->pc = 0x2AFCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFCE8u;
    // 0x2afcec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBBD8u, 0x2AFCE8u, 0x2AFCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFCF0u;
label_2afcf0:
    // 0x2afcf0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_2afcf4:
    if (ctx->pc == 0x2AFCF4u) {
        ctx->pc = 0x2AFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCF0u;
        // 0x2afcf4: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFCF8u;
        goto label_2afcf8;
    }
    ctx->pc = 0x2AFCF0u;
    {
        const bool branch_taken_0x2afcf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFCF0u;
        // 0x2afcf4: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afcf0) {
            ctx->pc = 0x2AFD08u;
            goto label_2afd08;
        }
    }
    ctx->pc = 0x2AFCF8u;
label_2afcf8:
    // 0x2afcf8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2afcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2afcfc:
    // 0x2afcfc: 0x240500ba  addiu       $a1, $zero, 0xBA
    ctx->pc = 0x2afcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_2afd00:
    // 0x2afd00: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2afd04:
    if (ctx->pc == 0x2AFD04u) {
        ctx->pc = 0x2AFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD00u;
        // 0x2afd04: 0x240600c3  addiu       $a2, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD08u;
        goto label_2afd08;
    }
    ctx->pc = 0x2AFD00u;
    {
        const bool branch_taken_0x2afd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD00u;
        // 0x2afd04: 0x240600c3  addiu       $a2, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd00) {
            ctx->pc = 0x2AFEBCu;
            goto label_2afebc;
        }
    }
    ctx->pc = 0x2AFD08u;
label_2afd08:
    // 0x2afd08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2afd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afd0c:
    // 0x2afd0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2afd10:
    if (ctx->pc == 0x2AFD10u) {
        ctx->pc = 0x2AFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD0Cu;
        // 0x2afd10: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD14u;
        goto label_2afd14;
    }
    ctx->pc = 0x2AFD0Cu;
    {
        const bool branch_taken_0x2afd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD0Cu;
        // 0x2afd10: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd0c) {
            ctx->pc = 0x2AFD20u;
            goto label_2afd20;
        }
    }
    ctx->pc = 0x2AFD14u;
label_2afd14:
    // 0x2afd14: 0x240500ba  addiu       $a1, $zero, 0xBA
    ctx->pc = 0x2afd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_2afd18:
    // 0x2afd18: 0x10000068  b           . + 4 + (0x68 << 2)
label_2afd1c:
    if (ctx->pc == 0x2AFD1Cu) {
        ctx->pc = 0x2AFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD18u;
        // 0x2afd1c: 0x240600e4  addiu       $a2, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD20u;
        goto label_2afd20;
    }
    ctx->pc = 0x2AFD18u;
    {
        const bool branch_taken_0x2afd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD18u;
        // 0x2afd1c: 0x240600e4  addiu       $a2, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd18) {
            ctx->pc = 0x2AFEBCu;
            goto label_2afebc;
        }
    }
    ctx->pc = 0x2AFD20u;
label_2afd20:
    // 0x2afd20: 0xc0a8bf6  jal         func_2A2FD8
label_2afd24:
    if (ctx->pc == 0x2AFD24u) {
        ctx->pc = 0x2AFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD20u;
        // 0x2afd24: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD28u;
        goto label_2afd28;
    }
    ctx->pc = 0x2AFD20u;
    SET_GPR_U32(ctx, 31, 0x2AFD28u);
    ctx->pc = 0x2AFD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD20u;
    // 0x2afd24: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2AFD20u, 0x2AFD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD28u;
label_2afd28:
    // 0x2afd28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2afd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2afd2c:
    // 0x2afd2c: 0x12000060  beqz        $s0, . + 4 + (0x60 << 2)
label_2afd30:
    if (ctx->pc == 0x2AFD30u) {
        ctx->pc = 0x2AFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD2Cu;
        // 0x2afd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD34u;
        goto label_2afd34;
    }
    ctx->pc = 0x2AFD2Cu;
    {
        const bool branch_taken_0x2afd2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD2Cu;
        // 0x2afd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd2c) {
            ctx->pc = 0x2AFEB0u;
            goto label_2afeb0;
        }
    }
    ctx->pc = 0x2AFD34u;
label_2afd34:
    // 0x2afd34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2afd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2afd38:
    // 0x2afd38: 0xc049cb6  jal         func_1272D8
label_2afd3c:
    if (ctx->pc == 0x2AFD3Cu) {
        ctx->pc = 0x2AFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD38u;
        // 0x2afd3c: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD40u;
        goto label_2afd40;
    }
    ctx->pc = 0x2AFD38u;
    SET_GPR_U32(ctx, 31, 0x2AFD40u);
    ctx->pc = 0x2AFD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD38u;
    // 0x2afd3c: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2AFD38u, 0x2AFD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD40u;
label_2afd40:
    // 0x2afd40: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x2afd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_2afd44:
    // 0x2afd44: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2afd48:
    if (ctx->pc == 0x2AFD48u) {
        ctx->pc = 0x2AFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD44u;
        // 0x2afd48: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD4Cu;
        goto label_2afd4c;
    }
    ctx->pc = 0x2AFD44u;
    {
        const bool branch_taken_0x2afd44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD44u;
        // 0x2afd48: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd44) {
            ctx->pc = 0x2AFD70u;
            goto label_2afd70;
        }
    }
    ctx->pc = 0x2AFD4Cu;
label_2afd4c:
    // 0x2afd4c: 0x2484006c  addiu       $a0, $a0, 0x6C
    ctx->pc = 0x2afd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
label_2afd50:
    // 0x2afd50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2afd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2afd54:
    // 0x2afd54: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2afd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2afd58:
    // 0x2afd58: 0x2647d240  addiu       $a3, $s2, -0x2DC0
    ctx->pc = 0x2afd58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955584));
label_2afd5c:
    // 0x2afd5c: 0xc0a8b46  jal         func_2A2D18
label_2afd60:
    if (ctx->pc == 0x2AFD60u) {
        ctx->pc = 0x2AFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD5Cu;
        // 0x2afd60: 0x24080121  addiu       $t0, $zero, 0x121 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 289));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD64u;
        goto label_2afd64;
    }
    ctx->pc = 0x2AFD5Cu;
    SET_GPR_U32(ctx, 31, 0x2AFD64u);
    ctx->pc = 0x2AFD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFD5Cu;
    // 0x2afd60: 0x24080121  addiu       $t0, $zero, 0x121 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 289));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2AFD5Cu, 0x2AFD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFD64u;
label_2afd64:
    // 0x2afd64: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x2afd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_2afd68:
    // 0x2afd68: 0x10000002  b           . + 4 + (0x2 << 2)
label_2afd6c:
    if (ctx->pc == 0x2AFD6Cu) {
        ctx->pc = 0x2AFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD68u;
        // 0x2afd6c: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFD70u;
        goto label_2afd70;
    }
    ctx->pc = 0x2AFD68u;
    {
        const bool branch_taken_0x2afd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFD68u;
        // 0x2afd6c: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd68) {
            ctx->pc = 0x2AFD74u;
            goto label_2afd74;
        }
    }
    ctx->pc = 0x2AFD70u;
label_2afd70:
    // 0x2afd70: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2afd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_2afd74:
    // 0x2afd74: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x2afd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_2afd78:
    // 0x2afd78: 0x2647d240  addiu       $a3, $s2, -0x2DC0
    ctx->pc = 0x2afd78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955584));
label_2afd7c:
    // 0x2afd7c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2afd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2afd80:
    // 0x2afd80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2afd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2afd84:
    // 0x2afd84: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x2afd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_2afd88:
    // 0x2afd88: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2afd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2afd8c:
    // 0x2afd8c: 0x6a2200bf  ldl         $v0, 0xBF($s1)
    ctx->pc = 0x2afd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2afd90:
    // 0x2afd90: 0x6e2200b8  ldr         $v0, 0xB8($s1)
    ctx->pc = 0x2afd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2afd94:
    // 0x2afd94: 0x6a2300c7  ldl         $v1, 0xC7($s1)
    ctx->pc = 0x2afd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2afd98:
    // 0x2afd98: 0x6e2300c0  ldr         $v1, 0xC0($s1)
    ctx->pc = 0x2afd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2afd9c:
    // 0x2afd9c: 0x6a2800cf  ldl         $t0, 0xCF($s1)
    ctx->pc = 0x2afd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2afda0:
    // 0x2afda0: 0x6e2800c8  ldr         $t0, 0xC8($s1)
    ctx->pc = 0x2afda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2afda4:
    // 0x2afda4: 0x6a2900d7  ldl         $t1, 0xD7($s1)
    ctx->pc = 0x2afda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2afda8:
    // 0x2afda8: 0x6e2900d0  ldr         $t1, 0xD0($s1)
    ctx->pc = 0x2afda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2afdac:
    // 0x2afdac: 0xb2020097  sdl         $v0, 0x97($s0)
    ctx->pc = 0x2afdacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2afdb0:
    // 0x2afdb0: 0xb6020090  sdr         $v0, 0x90($s0)
    ctx->pc = 0x2afdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2afdb4:
    // 0x2afdb4: 0xb203009f  sdl         $v1, 0x9F($s0)
    ctx->pc = 0x2afdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2afdb8:
    // 0x2afdb8: 0xb6030098  sdr         $v1, 0x98($s0)
    ctx->pc = 0x2afdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2afdbc:
    // 0x2afdbc: 0xb20800a7  sdl         $t0, 0xA7($s0)
    ctx->pc = 0x2afdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2afdc0:
    // 0x2afdc0: 0xb60800a0  sdr         $t0, 0xA0($s0)
    ctx->pc = 0x2afdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2afdc4:
    // 0x2afdc4: 0xb20900af  sdl         $t1, 0xAF($s0)
    ctx->pc = 0x2afdc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2afdc8:
    // 0x2afdc8: 0xb60900a8  sdr         $t1, 0xA8($s0)
    ctx->pc = 0x2afdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2afdcc:
    // 0x2afdcc: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x2afdccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_2afdd0:
    // 0x2afdd0: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x2afdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_2afdd4:
    // 0x2afdd4: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x2afdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_2afdd8:
    // 0x2afdd8: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x2afdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_2afddc:
    // 0x2afddc: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x2afddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
label_2afde0:
    // 0x2afde0: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2afde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2afde4:
    // 0x2afde4: 0xc0a8b46  jal         func_2A2D18
label_2afde8:
    if (ctx->pc == 0x2AFDE8u) {
        ctx->pc = 0x2AFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDE4u;
        // 0x2afde8: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFDECu;
        goto label_2afdec;
    }
    ctx->pc = 0x2AFDE4u;
    SET_GPR_U32(ctx, 31, 0x2AFDECu);
    ctx->pc = 0x2AFDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFDE4u;
    // 0x2afde8: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2AFDE4u, 0x2AFDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFDECu;
label_2afdec:
    // 0x2afdec: 0xae1100dc  sw          $s1, 0xDC($s0)
    ctx->pc = 0x2afdecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 17));
label_2afdf0:
    // 0x2afdf0: 0xfe0000e8  sd          $zero, 0xE8($s0)
    ctx->pc = 0x2afdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 0));
label_2afdf4:
    // 0x2afdf4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2afdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afdf8:
    // 0x2afdf8: 0xc0a5b7e  jal         func_296DF8
label_2afdfc:
    if (ctx->pc == 0x2AFDFCu) {
        ctx->pc = 0x2AFDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFDF8u;
        // 0x2afdfc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE00u;
        goto label_2afe00;
    }
    ctx->pc = 0x2AFDF8u;
    SET_GPR_U32(ctx, 31, 0x2AFE00u);
    ctx->pc = 0x2AFDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFDF8u;
    // 0x2afdfc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x2AFDF8u, 0x2AFE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE00u;
label_2afe00:
    // 0x2afe00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2afe04:
    if (ctx->pc == 0x2AFE04u) {
        ctx->pc = 0x2AFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE00u;
        // 0x2afe04: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE08u;
        goto label_2afe08;
    }
    ctx->pc = 0x2AFE00u;
    {
        const bool branch_taken_0x2afe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE00u;
        // 0x2afe04: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe00) {
            ctx->pc = 0x2AFE20u;
            goto label_2afe20;
        }
    }
    ctx->pc = 0x2AFE08u;
label_2afe08:
    // 0x2afe08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2afe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2afe0c:
    // 0x2afe0c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2afe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2afe10:
    // 0x2afe10: 0x40f809  jalr        $v0
label_2afe14:
    if (ctx->pc == 0x2AFE14u) {
        ctx->pc = 0x2AFE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE10u;
        // 0x2afe14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE18u;
        goto label_2afe18;
    }
    ctx->pc = 0x2AFE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AFE18u);
        ctx->pc = 0x2AFE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE10u;
        // 0x2afe14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFE10u, 0x2AFE18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AFE18u;
label_2afe18:
    // 0x2afe18: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2afe1c:
    if (ctx->pc == 0x2AFE1Cu) {
        ctx->pc = 0x2AFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE18u;
        // 0x2afe1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE20u;
        goto label_2afe20;
    }
    ctx->pc = 0x2AFE18u;
    {
        const bool branch_taken_0x2afe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE18u;
        // 0x2afe1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe18) {
            ctx->pc = 0x2AFE4Cu;
            goto label_2afe4c;
        }
    }
    ctx->pc = 0x2AFE20u;
label_2afe20:
    // 0x2afe20: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2afe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_2afe24:
    // 0x2afe24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2afe28:
    if (ctx->pc == 0x2AFE28u) {
        ctx->pc = 0x2AFE2Cu;
        goto label_2afe2c;
    }
    ctx->pc = 0x2AFE24u;
    {
        const bool branch_taken_0x2afe24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afe24) {
            ctx->pc = 0x2AFE34u;
            goto label_2afe34;
        }
    }
    ctx->pc = 0x2AFE2Cu;
label_2afe2c:
    // 0x2afe2c: 0xc0a5b9c  jal         func_296E70
label_2afe30:
    if (ctx->pc == 0x2AFE30u) {
        ctx->pc = 0x2AFE34u;
        goto label_2afe34;
    }
    ctx->pc = 0x2AFE2Cu;
    SET_GPR_U32(ctx, 31, 0x2AFE34u);
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x2AFE2Cu, 0x2AFE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE34u;
label_2afe34:
    // 0x2afe34: 0xc0ac330  jal         func_2B0CC0
label_2afe38:
    if (ctx->pc == 0x2AFE38u) {
        ctx->pc = 0x2AFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE34u;
        // 0x2afe38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE3Cu;
        goto label_2afe3c;
    }
    ctx->pc = 0x2AFE34u;
    SET_GPR_U32(ctx, 31, 0x2AFE3Cu);
    ctx->pc = 0x2AFE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE34u;
    // 0x2afe38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0CC0u, 0x2AFE34u, 0x2AFE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE3Cu;
label_2afe3c:
    // 0x2afe3c: 0xc0a8c0a  jal         func_2A3028
label_2afe40:
    if (ctx->pc == 0x2AFE40u) {
        ctx->pc = 0x2AFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE3Cu;
        // 0x2afe40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE44u;
        goto label_2afe44;
    }
    ctx->pc = 0x2AFE3Cu;
    SET_GPR_U32(ctx, 31, 0x2AFE44u);
    ctx->pc = 0x2AFE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE3Cu;
    // 0x2afe40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2AFE3Cu, 0x2AFE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE44u;
label_2afe44:
    // 0x2afe44: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2afe48:
    if (ctx->pc == 0x2AFE48u) {
        ctx->pc = 0x2AFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE44u;
        // 0x2afe48: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE4Cu;
        goto label_2afe4c;
    }
    ctx->pc = 0x2AFE44u;
    {
        const bool branch_taken_0x2afe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE44u;
        // 0x2afe48: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afe44) {
            ctx->pc = 0x2AFEB4u;
            goto label_2afeb4;
        }
    }
    ctx->pc = 0x2AFE4Cu;
label_2afe4c:
    // 0x2afe4c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2afe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_2afe50:
    // 0x2afe50: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x2afe50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
label_2afe54:
    // 0x2afe54: 0x246314d8  addiu       $v1, $v1, 0x14D8
    ctx->pc = 0x2afe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5336));
label_2afe58:
    // 0x2afe58: 0x8e0700dc  lw          $a3, 0xDC($s0)
    ctx->pc = 0x2afe58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2afe5c:
    // 0x2afe5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2afe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2afe60:
    // 0x2afe60: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2afe60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2afe64:
    // 0x2afe64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2afe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2afe68:
    // 0x2afe68: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2afe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2afe6c:
    // 0x2afe6c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2afe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_2afe70:
    // 0x2afe70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2afe70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2afe74:
    // 0x2afe74: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2afe74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2afe78:
    // 0x2afe78: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x2afe78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
label_2afe7c:
    // 0x2afe7c: 0xfe030100  sd          $v1, 0x100($s0)
    ctx->pc = 0x2afe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 3));
label_2afe80:
    // 0x2afe80: 0x8ce20118  lw          $v0, 0x118($a3)
    ctx->pc = 0x2afe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 280)));
label_2afe84:
    // 0x2afe84: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x2afe84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_2afe88:
    // 0x2afe88: 0x8ce30114  lw          $v1, 0x114($a3)
    ctx->pc = 0x2afe88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 276)));
label_2afe8c:
    // 0x2afe8c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x2afe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_2afe90:
    // 0x2afe90: 0xc0abee6  jal         func_2AFB98
label_2afe94:
    if (ctx->pc == 0x2AFE94u) {
        ctx->pc = 0x2AFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFE90u;
        // 0x2afe94: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFE98u;
        goto label_2afe98;
    }
    ctx->pc = 0x2AFE90u;
    SET_GPR_U32(ctx, 31, 0x2AFE98u);
    ctx->pc = 0x2AFE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFE90u;
    // 0x2afe94: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFB98u, 0x2AFE90u, 0x2AFE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFE98u;
label_2afe98:
    // 0x2afe98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2afe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2afe9c:
    // 0x2afe9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2afe9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2afea0:
    // 0x2afea0: 0xc0a5d8e  jal         func_297638
label_2afea4:
    if (ctx->pc == 0x2AFEA4u) {
        ctx->pc = 0x2AFEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEA0u;
        // 0x2afea4: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFEA8u;
        goto label_2afea8;
    }
    ctx->pc = 0x2AFEA0u;
    SET_GPR_U32(ctx, 31, 0x2AFEA8u);
    ctx->pc = 0x2AFEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFEA0u;
    // 0x2afea4: 0x260600f0  addiu       $a2, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297638u, 0x2AFEA0u, 0x2AFEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFEA8u;
label_2afea8:
    // 0x2afea8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2afeac:
    if (ctx->pc == 0x2AFEACu) {
        ctx->pc = 0x2AFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEA8u;
        // 0x2afeac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFEB0u;
        goto label_2afeb0;
    }
    ctx->pc = 0x2AFEA8u;
    {
        const bool branch_taken_0x2afea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEA8u;
        // 0x2afeac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afea8) {
            ctx->pc = 0x2AFECCu;
            goto label_2afecc;
        }
    }
    ctx->pc = 0x2AFEB0u;
label_2afeb0:
    // 0x2afeb0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2afeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2afeb4:
    // 0x2afeb4: 0x240500ba  addiu       $a1, $zero, 0xBA
    ctx->pc = 0x2afeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_2afeb8:
    // 0x2afeb8: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2afeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2afebc:
    // 0x2afebc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2afebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2afec0:
    // 0x2afec0: 0xc0a5648  jal         func_295920
label_2afec4:
    if (ctx->pc == 0x2AFEC4u) {
        ctx->pc = 0x2AFEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEC0u;
        // 0x2afec4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFEC8u;
        goto label_2afec8;
    }
    ctx->pc = 0x2AFEC0u;
    SET_GPR_U32(ctx, 31, 0x2AFEC8u);
    ctx->pc = 0x2AFEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFEC0u;
    // 0x2afec4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2AFEC0u, 0x2AFEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFEC8u;
label_2afec8:
    // 0x2afec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2afec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2afecc:
    // 0x2afecc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2afeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2afed0:
    // 0x2afed0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2afed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2afed4:
    // 0x2afed4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2afed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2afed8:
    // 0x2afed8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2afed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2afedc:
    // 0x2afedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2afedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2afee0:
    // 0x2afee0: 0x3e00008  jr          $ra
label_2afee4:
    if (ctx->pc == 0x2AFEE4u) {
        ctx->pc = 0x2AFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEE0u;
        // 0x2afee4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AFEE8u;
        goto label_fallthrough_0x2afee0;
    }
    ctx->pc = 0x2AFEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFEE0u;
        // 0x2afee4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2afee0:
    ctx->pc = 0x2AFEE8u;
}
