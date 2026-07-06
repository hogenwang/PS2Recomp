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

// Function: sub_0017EC50
// Address: 0x17ec50 - 0x17f730
void sub_0017EC50_0x17ec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EC50_0x17ec50");
#endif

    switch (ctx->pc) {
        case 0x17ec64u: goto label_17ec64;
        case 0x17ec6cu: goto label_17ec6c;
        case 0x17ecc0u: goto label_17ecc0;
        case 0x17ef60u: goto label_17ef60;
        case 0x17ef68u: goto label_17ef68;
        case 0x17f050u: goto label_17f050;
        case 0x17f058u: goto label_17f058;
        case 0x17f0d8u: goto label_17f0d8;
        case 0x17f26cu: goto label_17f26c;
        case 0x17f278u: goto label_17f278;
        case 0x17f28cu: goto label_17f28c;
        case 0x17f324u: goto label_17f324;
        case 0x17f384u: goto label_17f384;
        case 0x17f394u: goto label_17f394;
        case 0x17f3ecu: goto label_17f3ec;
        case 0x17f3fcu: goto label_17f3fc;
        case 0x17f478u: goto label_17f478;
        case 0x17f4c8u: goto label_17f4c8;
        case 0x17f5b8u: goto label_17f5b8;
        case 0x17f63cu: goto label_17f63c;
        case 0x17f6bcu: goto label_17f6bc;
        case 0x17f6d0u: goto label_17f6d0;
        case 0x17f6e4u: goto label_17f6e4;
        default: break;
    }

    ctx->pc = 0x17ec50u;

    // 0x17ec50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ec54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ec58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ec58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ec5c: 0xc05fa60  jal         func_17E980
    ctx->pc = 0x17EC5Cu;
    SET_GPR_U32(ctx, 31, 0x17EC64u);
    ctx->pc = 0x17EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC5Cu;
    // 0x17ec60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E980u, 0x17EC5Cu, 0x17EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC64u;
label_17ec64:
    // 0x17ec64: 0xc06001c  jal         func_180070
    ctx->pc = 0x17EC64u;
    SET_GPR_U32(ctx, 31, 0x17EC6Cu);
    ctx->pc = 0x17EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC64u;
    // 0x17ec68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180070u, 0x17EC64u, 0x17EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC6Cu;
label_17ec6c:
    // 0x17ec6c: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x17ec6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x17ec70: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x17ec70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x17ec74: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x17ec74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x17ec78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ec78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ec7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ec7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ec80: 0x3e00008  jr          $ra
    ctx->pc = 0x17EC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC80u;
        // 0x17ec84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EC88u;
    // 0x17ec88: 0x0  nop
    ctx->pc = 0x17ec88u;
    // NOP
    // 0x17ec8c: 0x0  nop
    ctx->pc = 0x17ec8cu;
    // NOP
    // 0x17ec90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17ec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17ec94: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17ec98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17ec9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17ec9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17eca0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17eca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17eca4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17eca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17eca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17eca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ecac: 0x9063b858  lbu         $v1, -0x47A8($v1)
    ctx->pc = 0x17ecacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948952)));
    // 0x17ecb0: 0x1860016b  blez        $v1, . + 4 + (0x16B << 2)
    ctx->pc = 0x17ECB0u;
    {
        const bool branch_taken_0x17ecb0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECB0u;
        // 0x17ecb4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecb0) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17ECB8u;
    // 0x17ecb8: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x17ecb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x17ecbc: 0x2610b860  addiu       $s0, $s0, -0x47A0
    ctx->pc = 0x17ecbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948960));
label_17ecc0:
    // 0x17ecc0: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x17ecc0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17ecc4: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x17ecc4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17ecc8: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x17ecc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17eccc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x17ecccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x17ecd0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17ECD0u;
    {
        const bool branch_taken_0x17ecd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECD0u;
        // 0x17ecd4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecd0) {
            ctx->pc = 0x17ECF0u;
            goto label_17ecf0;
        }
    }
    ctx->pc = 0x17ECD8u;
    // 0x17ecd8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17ECD8u;
    {
        const bool branch_taken_0x17ecd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ecd8) {
            ctx->pc = 0x17ECF0u;
            goto label_17ecf0;
        }
    }
    ctx->pc = 0x17ECE0u;
    // 0x17ece0: 0x240402a0  addiu       $a0, $zero, 0x2A0
    ctx->pc = 0x17ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x17ece4: 0xa624003e  sh          $a0, 0x3E($s1)
    ctx->pc = 0x17ece4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ece8: 0xa6240002  sh          $a0, 0x2($s1)
    ctx->pc = 0x17ece8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ecec: 0x0  nop
    ctx->pc = 0x17ececu;
    // NOP
label_17ecf0:
    // 0x17ecf0: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x17ecf0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17ecf4: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x17ecf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x17ecf8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17ECF8u;
    {
        const bool branch_taken_0x17ecf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ecf8) {
            ctx->pc = 0x17ED18u;
            goto label_17ed18;
        }
    }
    ctx->pc = 0x17ED00u;
    // 0x17ed00: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x17ED00u;
    {
        const bool branch_taken_0x17ed00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed00) {
            ctx->pc = 0x17ED18u;
            goto label_17ed18;
        }
    }
    ctx->pc = 0x17ED08u;
    // 0x17ed08: 0x240402a0  addiu       $a0, $zero, 0x2A0
    ctx->pc = 0x17ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x17ed0c: 0xa644003e  sh          $a0, 0x3E($s2)
    ctx->pc = 0x17ed0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ed10: 0xa6440002  sh          $a0, 0x2($s2)
    ctx->pc = 0x17ed10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ed14: 0x0  nop
    ctx->pc = 0x17ed14u;
    // NOP
label_17ed18:
    // 0x17ed18: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x17ed18u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17ed1c: 0x30a40040  andi        $a0, $a1, 0x40
    ctx->pc = 0x17ed1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x17ed20: 0x148000f7  bnez        $a0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x17ED20u;
    {
        const bool branch_taken_0x17ed20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ed20) {
            ctx->pc = 0x17F100u;
            goto label_17f100;
        }
    }
    ctx->pc = 0x17ED28u;
    // 0x17ed28: 0x30a40010  andi        $a0, $a1, 0x10
    ctx->pc = 0x17ed28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x17ed2c: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x17ED2Cu;
    {
        const bool branch_taken_0x17ed2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed2c) {
            ctx->pc = 0x17EDF0u;
            goto label_17edf0;
        }
    }
    ctx->pc = 0x17ED34u;
    // 0x17ed34: 0x30a40004  andi        $a0, $a1, 0x4
    ctx->pc = 0x17ed34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x17ed38: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17ED38u;
    {
        const bool branch_taken_0x17ed38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed38) {
            ctx->pc = 0x17ED50u;
            goto label_17ed50;
        }
    }
    ctx->pc = 0x17ED40u;
    // 0x17ed40: 0x30a40400  andi        $a0, $a1, 0x400
    ctx->pc = 0x17ed40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x17ed44: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x17ED44u;
    {
        const bool branch_taken_0x17ed44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed44) {
            ctx->pc = 0x17EDF0u;
            goto label_17edf0;
        }
    }
    ctx->pc = 0x17ED4Cu;
    // 0x17ed4c: 0x0  nop
    ctx->pc = 0x17ed4cu;
    // NOP
label_17ed50:
    // 0x17ed50: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x17ED50u;
    {
        const bool branch_taken_0x17ed50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed50) {
            ctx->pc = 0x17EDF0u;
            goto label_17edf0;
        }
    }
    ctx->pc = 0x17ED58u;
    // 0x17ed58: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x17ED58u;
    {
        const bool branch_taken_0x17ed58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed58) {
            ctx->pc = 0x17EDF0u;
            goto label_17edf0;
        }
    }
    ctx->pc = 0x17ED60u;
    // 0x17ed60: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x17ed60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ed64: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x17ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17ed68: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ed6c: 0xa644003c  sh          $a0, 0x3C($s2)
    ctx->pc = 0x17ed6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ed70: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x17ed70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17ed74: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x17ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x17ed78: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17ed78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ed7c: 0xa644003e  sh          $a0, 0x3E($s2)
    ctx->pc = 0x17ed7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ed80: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x17ed80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ed84: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x17ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17ed88: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ed8c: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x17ed8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ed90: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x17ed90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17ed94: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x17ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x17ed98: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ed9c: 0xa6440002  sh          $a0, 0x2($s2)
    ctx->pc = 0x17ed9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x17eda0: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x17eda0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17eda4: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x17eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17eda8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17edac: 0xa6440012  sh          $a0, 0x12($s2)
    ctx->pc = 0x17edacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x17edb0: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x17edb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17edb4: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x17edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x17edb8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17edb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17edbc: 0xa6440014  sh          $a0, 0x14($s2)
    ctx->pc = 0x17edbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x17edc0: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x17edc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17edc4: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x17edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17edc8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17edcc: 0xa644000a  sh          $a0, 0xA($s2)
    ctx->pc = 0x17edccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x17edd0: 0x84650002  lh          $a1, 0x2($v1)
    ctx->pc = 0x17edd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17edd4: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x17edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x17edd8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17eddc: 0xa644000c  sh          $a0, 0xC($s2)
    ctx->pc = 0x17eddcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ede0: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x17ede0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17ede4: 0x3084ffef  andi        $a0, $a0, 0xFFEF
    ctx->pc = 0x17ede4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65519);
    // 0x17ede8: 0xa6040014  sh          $a0, 0x14($s0)
    ctx->pc = 0x17ede8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x17edec: 0x0  nop
    ctx->pc = 0x17edecu;
    // NOP
label_17edf0:
    // 0x17edf0: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x17edf0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17edf4: 0x30a40020  andi        $a0, $a1, 0x20
    ctx->pc = 0x17edf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x17edf8: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x17EDF8u;
    {
        const bool branch_taken_0x17edf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17edf8) {
            ctx->pc = 0x17EED8u;
            goto label_17eed8;
        }
    }
    ctx->pc = 0x17EE00u;
    // 0x17ee00: 0x30a40008  andi        $a0, $a1, 0x8
    ctx->pc = 0x17ee00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x17ee04: 0x14800034  bnez        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x17EE04u;
    {
        const bool branch_taken_0x17ee04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ee04) {
            ctx->pc = 0x17EED8u;
            goto label_17eed8;
        }
    }
    ctx->pc = 0x17EE0Cu;
    // 0x17ee0c: 0x12400032  beqz        $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x17EE0Cu;
    {
        const bool branch_taken_0x17ee0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ee0c) {
            ctx->pc = 0x17EED8u;
            goto label_17eed8;
        }
    }
    ctx->pc = 0x17EE14u;
    // 0x17ee14: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x17EE14u;
    {
        const bool branch_taken_0x17ee14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ee14) {
            ctx->pc = 0x17EED8u;
            goto label_17eed8;
        }
    }
    ctx->pc = 0x17EE1Cu;
    // 0x17ee1c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x17ee1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17ee20: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x17ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17ee24: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ee28: 0xa464003c  sh          $a0, 0x3C($v1)
    ctx->pc = 0x17ee28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ee2c: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x17ee2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x17ee30: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x17ee30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x17ee34: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17ee34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ee38: 0xa464003e  sh          $a0, 0x3E($v1)
    ctx->pc = 0x17ee38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ee3c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x17ee3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17ee40: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x17ee40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17ee44: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17ee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ee48: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x17ee48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ee4c: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x17ee4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x17ee50: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x17ee50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x17ee54: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ee58: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x17ee58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ee5c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x17ee5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17ee60: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x17ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17ee64: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17ee64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ee68: 0xa4640012  sh          $a0, 0x12($v1)
    ctx->pc = 0x17ee68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ee6c: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x17ee6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x17ee70: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x17ee70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x17ee74: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ee78: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x17ee78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ee7c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x17ee7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17ee80: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x17ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17ee84: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17ee84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ee88: 0xa464000a  sh          $a0, 0xA($v1)
    ctx->pc = 0x17ee88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ee8c: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x17ee8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x17ee90: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x17ee90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x17ee94: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ee98: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x17ee98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ee9c: 0x92450030  lbu         $a1, 0x30($s2)
    ctx->pc = 0x17ee9cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x17eea0: 0x90640030  lbu         $a0, 0x30($v1)
    ctx->pc = 0x17eea0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x17eea4: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x17eea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x17eea8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17eea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17eeac: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17eeacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17eeb0: 0xa0640030  sb          $a0, 0x30($v1)
    ctx->pc = 0x17eeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x17eeb4: 0x92450030  lbu         $a1, 0x30($s2)
    ctx->pc = 0x17eeb4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x17eeb8: 0x90640030  lbu         $a0, 0x30($v1)
    ctx->pc = 0x17eeb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x17eebc: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x17eebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x17eec0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17eec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17eec4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17eec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x17eec8: 0xa0640030  sb          $a0, 0x30($v1)
    ctx->pc = 0x17eec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x17eecc: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x17eeccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17eed0: 0x3063ffdf  andi        $v1, $v1, 0xFFDF
    ctx->pc = 0x17eed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65503);
    // 0x17eed4: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x17eed4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
label_17eed8:
    // 0x17eed8: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x17eed8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17eedc: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x17eedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x17eee0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x17EEE0u;
    {
        const bool branch_taken_0x17eee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eee0) {
            ctx->pc = 0x17EFC8u;
            goto label_17efc8;
        }
    }
    ctx->pc = 0x17EEE8u;
    // 0x17eee8: 0x12400037  beqz        $s2, . + 4 + (0x37 << 2)
    ctx->pc = 0x17EEE8u;
    {
        const bool branch_taken_0x17eee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eee8) {
            ctx->pc = 0x17EFC8u;
            goto label_17efc8;
        }
    }
    ctx->pc = 0x17EEF0u;
    // 0x17eef0: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x17EEF0u;
    {
        const bool branch_taken_0x17eef0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eef0) {
            ctx->pc = 0x17EFC8u;
            goto label_17efc8;
        }
    }
    ctx->pc = 0x17EEF8u;
    // 0x17eef8: 0x8e440270  lw          $a0, 0x270($s2)
    ctx->pc = 0x17eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x17eefc: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x17eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x17ef00: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x17ef00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x17ef04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17ef04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17ef08: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17EF08u;
    {
        const bool branch_taken_0x17ef08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ef08) {
            ctx->pc = 0x17EF20u;
            goto label_17ef20;
        }
    }
    ctx->pc = 0x17EF10u;
    // 0x17ef10: 0x30a30400  andi        $v1, $a1, 0x400
    ctx->pc = 0x17ef10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x17ef14: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x17EF14u;
    {
        const bool branch_taken_0x17ef14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ef14) {
            ctx->pc = 0x17EFC8u;
            goto label_17efc8;
        }
    }
    ctx->pc = 0x17EF1Cu;
    // 0x17ef1c: 0x0  nop
    ctx->pc = 0x17ef1cu;
    // NOP
label_17ef20:
    // 0x17ef20: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x17ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x17ef24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x17ef24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x17ef28: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17EF28u;
    {
        const bool branch_taken_0x17ef28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ef28) {
            ctx->pc = 0x17EF70u;
            goto label_17ef70;
        }
    }
    ctx->pc = 0x17EF30u;
    // 0x17ef30: 0x24030142  addiu       $v1, $zero, 0x142
    ctx->pc = 0x17ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x17ef34: 0xa64300f2  sh          $v1, 0xF2($s2)
    ctx->pc = 0x17ef34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x17ef38: 0xa643050c  sh          $v1, 0x50C($s2)
    ctx->pc = 0x17ef38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1292), (uint16_t)GPR_U32(ctx, 3));
    // 0x17ef3c: 0x964200ec  lhu         $v0, 0xEC($s2)
    ctx->pc = 0x17ef3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x17ef40: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17EF40u;
    {
        const bool branch_taken_0x17ef40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17ef40) {
            ctx->pc = 0x17EF58u;
            goto label_17ef58;
        }
    }
    ctx->pc = 0x17EF48u;
    // 0x17ef48: 0x96420534  lhu         $v0, 0x534($s2)
    ctx->pc = 0x17ef48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1332)));
    // 0x17ef4c: 0x3042fff3  andi        $v0, $v0, 0xFFF3
    ctx->pc = 0x17ef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65523);
    // 0x17ef50: 0xa6420534  sh          $v0, 0x534($s2)
    ctx->pc = 0x17ef50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1332), (uint16_t)GPR_U32(ctx, 2));
    // 0x17ef54: 0x0  nop
    ctx->pc = 0x17ef54u;
    // NOP
label_17ef58:
    // 0x17ef58: 0xc05fa14  jal         func_17E850
    ctx->pc = 0x17EF58u;
    SET_GPR_U32(ctx, 31, 0x17EF60u);
    ctx->pc = 0x17E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E850u, 0x17EF58u, 0x17EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF60u;
label_17ef60:
    // 0x17ef60: 0xc06001c  jal         func_180070
    ctx->pc = 0x17EF60u;
    SET_GPR_U32(ctx, 31, 0x17EF68u);
    ctx->pc = 0x17EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF60u;
    // 0x17ef64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180070u, 0x17EF60u, 0x17EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF68u;
label_17ef68:
    // 0x17ef68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17EF68u;
    {
        const bool branch_taken_0x17ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ef68) {
            ctx->pc = 0x17EFC8u;
            goto label_17efc8;
        }
    }
    ctx->pc = 0x17EF70u;
label_17ef70:
    // 0x17ef70: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x17ef70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ef74: 0x3c03fff6  lui         $v1, 0xFFF6
    ctx->pc = 0x17ef74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65526 << 16));
    // 0x17ef78: 0x3463dbff  ori         $v1, $v1, 0xDBFF
    ctx->pc = 0x17ef78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56319);
    // 0x17ef7c: 0xa644003c  sh          $a0, 0x3C($s2)
    ctx->pc = 0x17ef7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ef80: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x17ef80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17ef84: 0xa644003e  sh          $a0, 0x3E($s2)
    ctx->pc = 0x17ef84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ef88: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x17ef88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ef8c: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x17ef8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ef90: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x17ef90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17ef94: 0xa6440002  sh          $a0, 0x2($s2)
    ctx->pc = 0x17ef94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ef98: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x17ef98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17ef9c: 0xa6440012  sh          $a0, 0x12($s2)
    ctx->pc = 0x17ef9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x17efa0: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x17efa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17efa4: 0xa6440014  sh          $a0, 0x14($s2)
    ctx->pc = 0x17efa4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x17efa8: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x17efa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17efac: 0xa644000a  sh          $a0, 0xA($s2)
    ctx->pc = 0x17efacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x17efb0: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x17efb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17efb4: 0xa644000c  sh          $a0, 0xC($s2)
    ctx->pc = 0x17efb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x17efb8: 0x8e440270  lw          $a0, 0x270($s2)
    ctx->pc = 0x17efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
    // 0x17efbc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17efbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17efc0: 0xae430270  sw          $v1, 0x270($s2)
    ctx->pc = 0x17efc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 3));
    // 0x17efc4: 0x0  nop
    ctx->pc = 0x17efc4u;
    // NOP
label_17efc8:
    // 0x17efc8: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x17efc8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17efcc: 0x30a30008  andi        $v1, $a1, 0x8
    ctx->pc = 0x17efccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x17efd0: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x17EFD0u;
    {
        const bool branch_taken_0x17efd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17efd0) {
            ctx->pc = 0x17F100u;
            goto label_17f100;
        }
    }
    ctx->pc = 0x17EFD8u;
    // 0x17efd8: 0x12400049  beqz        $s2, . + 4 + (0x49 << 2)
    ctx->pc = 0x17EFD8u;
    {
        const bool branch_taken_0x17efd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17efd8) {
            ctx->pc = 0x17F100u;
            goto label_17f100;
        }
    }
    ctx->pc = 0x17EFE0u;
    // 0x17efe0: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
    ctx->pc = 0x17EFE0u;
    {
        const bool branch_taken_0x17efe0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17efe0) {
            ctx->pc = 0x17F100u;
            goto label_17f100;
        }
    }
    ctx->pc = 0x17EFE8u;
    // 0x17efe8: 0x8e240270  lw          $a0, 0x270($s1)
    ctx->pc = 0x17efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x17efec: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x17efecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x17eff0: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x17eff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x17eff4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17eff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17eff8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17EFF8u;
    {
        const bool branch_taken_0x17eff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eff8) {
            ctx->pc = 0x17F010u;
            goto label_17f010;
        }
    }
    ctx->pc = 0x17F000u;
    // 0x17f000: 0x30a30400  andi        $v1, $a1, 0x400
    ctx->pc = 0x17f000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x17f004: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x17F004u;
    {
        const bool branch_taken_0x17f004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f004) {
            ctx->pc = 0x17F100u;
            goto label_17f100;
        }
    }
    ctx->pc = 0x17F00Cu;
    // 0x17f00c: 0x0  nop
    ctx->pc = 0x17f00cu;
    // NOP
label_17f010:
    // 0x17f010: 0x8e220494  lw          $v0, 0x494($s1)
    ctx->pc = 0x17f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x17f014: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17f014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17f018: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17F018u;
    {
        const bool branch_taken_0x17f018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f018) {
            ctx->pc = 0x17F060u;
            goto label_17f060;
        }
    }
    ctx->pc = 0x17F020u;
    // 0x17f020: 0x24030142  addiu       $v1, $zero, 0x142
    ctx->pc = 0x17f020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x17f024: 0xa64300f2  sh          $v1, 0xF2($s2)
    ctx->pc = 0x17f024u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f028: 0xa643050c  sh          $v1, 0x50C($s2)
    ctx->pc = 0x17f028u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1292), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f02c: 0x964200ec  lhu         $v0, 0xEC($s2)
    ctx->pc = 0x17f02cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x17f030: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F030u;
    {
        const bool branch_taken_0x17f030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17f030) {
            ctx->pc = 0x17F048u;
            goto label_17f048;
        }
    }
    ctx->pc = 0x17F038u;
    // 0x17f038: 0x96420534  lhu         $v0, 0x534($s2)
    ctx->pc = 0x17f038u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1332)));
    // 0x17f03c: 0x3042fff3  andi        $v0, $v0, 0xFFF3
    ctx->pc = 0x17f03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65523);
    // 0x17f040: 0xa6420534  sh          $v0, 0x534($s2)
    ctx->pc = 0x17f040u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1332), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f044: 0x0  nop
    ctx->pc = 0x17f044u;
    // NOP
label_17f048:
    // 0x17f048: 0xc05fa14  jal         func_17E850
    ctx->pc = 0x17F048u;
    SET_GPR_U32(ctx, 31, 0x17F050u);
    ctx->pc = 0x17E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E850u, 0x17F048u, 0x17F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F050u;
label_17f050:
    // 0x17f050: 0xc06001c  jal         func_180070
    ctx->pc = 0x17F050u;
    SET_GPR_U32(ctx, 31, 0x17F058u);
    ctx->pc = 0x17F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F050u;
    // 0x17f054: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180070u, 0x17F050u, 0x17F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F058u;
label_17f058:
    // 0x17f058: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x17F058u;
    {
        const bool branch_taken_0x17f058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f058) {
            ctx->pc = 0x17F100u;
            goto label_17f100;
        }
    }
    ctx->pc = 0x17F060u;
label_17f060:
    // 0x17f060: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x17f060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17f064: 0x26440268  addiu       $a0, $s2, 0x268
    ctx->pc = 0x17f064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
    // 0x17f068: 0xa622003c  sh          $v0, 0x3C($s1)
    ctx->pc = 0x17f068u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f06c: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x17f06cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x17f070: 0xa622003e  sh          $v0, 0x3E($s1)
    ctx->pc = 0x17f070u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f074: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x17f074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17f078: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x17f078u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f07c: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x17f07cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x17f080: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x17f080u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f084: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x17f084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17f088: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x17f088u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f08c: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x17f08cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x17f090: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x17f090u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f094: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x17f094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17f098: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x17f098u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f09c: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x17f09cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x17f0a0: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x17f0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f0a4: 0x92430030  lbu         $v1, 0x30($s2)
    ctx->pc = 0x17f0a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x17f0a8: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x17f0a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17f0ac: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x17f0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x17f0b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17f0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17f0b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17f0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17f0b8: 0xa2220030  sb          $v0, 0x30($s1)
    ctx->pc = 0x17f0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x17f0bc: 0x92430031  lbu         $v1, 0x31($s2)
    ctx->pc = 0x17f0bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x17f0c0: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x17f0c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x17f0c4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x17f0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x17f0c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17f0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17f0cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17f0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17f0d0: 0xc05806c  jal         func_1601B0
    ctx->pc = 0x17F0D0u;
    SET_GPR_U32(ctx, 31, 0x17F0D8u);
    ctx->pc = 0x17F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F0D0u;
    // 0x17f0d4: 0xa2220031  sb          $v0, 0x31($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1601B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1601B0u, 0x17F0D0u, 0x17F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0D8u;
label_17f0d8:
    // 0x17f0d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F0D8u;
    {
        const bool branch_taken_0x17f0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f0d8) {
            ctx->pc = 0x17F100u;
            goto label_17f100;
        }
    }
    ctx->pc = 0x17F0E0u;
    // 0x17f0e0: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x17f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x17f0e4: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x17f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x17f0e8: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x17f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17f0ec: 0x31823  negu        $v1, $v1
    ctx->pc = 0x17f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x17f0f0: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x17f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x17f0f4: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x17f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x17f0f8: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x17f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x17f0fc: 0x0  nop
    ctx->pc = 0x17f0fcu;
    // NOP
label_17f100:
    // 0x17f100: 0x12400051  beqz        $s2, . + 4 + (0x51 << 2)
    ctx->pc = 0x17F100u;
    {
        const bool branch_taken_0x17f100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f100) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F108u;
    // 0x17f108: 0x8e430530  lw          $v1, 0x530($s2)
    ctx->pc = 0x17f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x17f10c: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x17f10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x17f110: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F110u;
    {
        const bool branch_taken_0x17f110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f110) {
            ctx->pc = 0x17F120u;
            goto label_17f120;
        }
    }
    ctx->pc = 0x17F118u;
    // 0x17f118: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x17f118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x17f11c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x17f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_17f120:
    // 0x17f120: 0x8e440494  lw          $a0, 0x494($s2)
    ctx->pc = 0x17f120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x17f124: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x17f124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x17f128: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F128u;
    {
        const bool branch_taken_0x17f128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f128) {
            ctx->pc = 0x17F140u;
            goto label_17f140;
        }
    }
    ctx->pc = 0x17F130u;
    // 0x17f130: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x17f130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x17f134: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x17F134u;
    {
        const bool branch_taken_0x17f134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F134u;
        // 0x17f138: 0xa2430204  sb          $v1, 0x204($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 516), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f134) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F13Cu;
    // 0x17f13c: 0x0  nop
    ctx->pc = 0x17f13cu;
    // NOP
label_17f140:
    // 0x17f140: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x17f140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x17f144: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F144u;
    {
        const bool branch_taken_0x17f144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f144) {
            ctx->pc = 0x17F158u;
            goto label_17f158;
        }
    }
    ctx->pc = 0x17F14Cu;
    // 0x17f14c: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x17f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x17f150: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x17F150u;
    {
        const bool branch_taken_0x17f150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F150u;
        // 0x17f154: 0xa2430204  sb          $v1, 0x204($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 516), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f150) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F158u;
label_17f158:
    // 0x17f158: 0x8e440538  lw          $a0, 0x538($s2)
    ctx->pc = 0x17f158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1336)));
    // 0x17f15c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x17f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x17f160: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17f160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17f164: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x17f164u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x17f168: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x17f168u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x17f16c: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x17F16Cu;
    {
        const bool branch_taken_0x17f16c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f16c) {
            ctx->pc = 0x17F240u;
            goto label_17f240;
        }
    }
    ctx->pc = 0x17F174u;
    // 0x17f174: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x17f174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x17f178: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f17c: 0x2484e6f0  addiu       $a0, $a0, -0x1910
    ctx->pc = 0x17f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960880));
    // 0x17f180: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f184: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17f184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f188: 0x600008  jr          $v1
    ctx->pc = 0x17F188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F190u: goto label_17f190;
            case 0x17F1A0u: goto label_17f1a0;
            case 0x17F1B0u: goto label_17f1b0;
            case 0x17F1C8u: goto label_17f1c8;
            case 0x17F1E0u: goto label_17f1e0;
            case 0x17F1F0u: goto label_17f1f0;
            case 0x17F200u: goto label_17f200;
            case 0x17F218u: goto label_17f218;
            case 0x17F230u: goto label_17f230;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F188u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17F190u;
label_17f190:
    // 0x17f190: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x17f190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x17f194: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x17F194u;
    {
        const bool branch_taken_0x17f194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F194u;
        // 0x17f198: 0xa2430204  sb          $v1, 0x204($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 516), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f194) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F19Cu;
    // 0x17f19c: 0x0  nop
    ctx->pc = 0x17f19cu;
    // NOP
label_17f1a0:
    // 0x17f1a0: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x17f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x17f1a4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x17F1A4u;
    {
        const bool branch_taken_0x17f1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1A4u;
        // 0x17f1a8: 0xa2430204  sb          $v1, 0x204($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 516), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1a4) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F1ACu;
    // 0x17f1ac: 0x0  nop
    ctx->pc = 0x17f1acu;
    // NOP
label_17f1b0:
    // 0x17f1b0: 0x240300a2  addiu       $v1, $zero, 0xA2
    ctx->pc = 0x17f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x17f1b4: 0xa2430204  sb          $v1, 0x204($s2)
    ctx->pc = 0x17f1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 516), (uint8_t)GPR_U32(ctx, 3));
    // 0x17f1b8: 0x8e430494  lw          $v1, 0x494($s2)
    ctx->pc = 0x17f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x17f1bc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x17f1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x17f1c0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x17F1C0u;
    {
        const bool branch_taken_0x17f1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1C0u;
        // 0x17f1c4: 0xae430494  sw          $v1, 0x494($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1c0) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F1C8u;
label_17f1c8:
    // 0x17f1c8: 0x240300a3  addiu       $v1, $zero, 0xA3
    ctx->pc = 0x17f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x17f1cc: 0xa2430204  sb          $v1, 0x204($s2)
    ctx->pc = 0x17f1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 516), (uint8_t)GPR_U32(ctx, 3));
    // 0x17f1d0: 0x8e430494  lw          $v1, 0x494($s2)
    ctx->pc = 0x17f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x17f1d4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x17f1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x17f1d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x17F1D8u;
    {
        const bool branch_taken_0x17f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1D8u;
        // 0x17f1dc: 0xae430494  sw          $v1, 0x494($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1d8) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F1E0u;
label_17f1e0:
    // 0x17f1e0: 0x240300a4  addiu       $v1, $zero, 0xA4
    ctx->pc = 0x17f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x17f1e4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17F1E4u;
    {
        const bool branch_taken_0x17f1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1E4u;
        // 0x17f1e8: 0xa2430204  sb          $v1, 0x204($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 516), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1e4) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F1ECu;
    // 0x17f1ec: 0x0  nop
    ctx->pc = 0x17f1ecu;
    // NOP
label_17f1f0:
    // 0x17f1f0: 0x240300a5  addiu       $v1, $zero, 0xA5
    ctx->pc = 0x17f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x17f1f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17F1F4u;
    {
        const bool branch_taken_0x17f1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1F4u;
        // 0x17f1f8: 0xa2430204  sb          $v1, 0x204($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 516), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1f4) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F1FCu;
    // 0x17f1fc: 0x0  nop
    ctx->pc = 0x17f1fcu;
    // NOP
label_17f200:
    // 0x17f200: 0x240300a6  addiu       $v1, $zero, 0xA6
    ctx->pc = 0x17f200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x17f204: 0xa2430204  sb          $v1, 0x204($s2)
    ctx->pc = 0x17f204u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 516), (uint8_t)GPR_U32(ctx, 3));
    // 0x17f208: 0x8e430494  lw          $v1, 0x494($s2)
    ctx->pc = 0x17f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x17f20c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x17f20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x17f210: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17F210u;
    {
        const bool branch_taken_0x17f210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F210u;
        // 0x17f214: 0xae430494  sw          $v1, 0x494($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f210) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F218u;
label_17f218:
    // 0x17f218: 0x240300a7  addiu       $v1, $zero, 0xA7
    ctx->pc = 0x17f218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x17f21c: 0xa2430204  sb          $v1, 0x204($s2)
    ctx->pc = 0x17f21cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 516), (uint8_t)GPR_U32(ctx, 3));
    // 0x17f220: 0x8e430494  lw          $v1, 0x494($s2)
    ctx->pc = 0x17f220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x17f224: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x17f224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x17f228: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17F228u;
    {
        const bool branch_taken_0x17f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F228u;
        // 0x17f22c: 0xae430494  sw          $v1, 0x494($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f228) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F230u;
label_17f230:
    // 0x17f230: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x17f230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x17f234: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17F234u;
    {
        const bool branch_taken_0x17f234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F234u;
        // 0x17f238: 0xa2430204  sb          $v1, 0x204($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 516), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f234) {
            ctx->pc = 0x17F248u;
            goto label_17f248;
        }
    }
    ctx->pc = 0x17F23Cu;
    // 0x17f23c: 0x0  nop
    ctx->pc = 0x17f23cu;
    // NOP
label_17f240:
    // 0x17f240: 0x240300a9  addiu       $v1, $zero, 0xA9
    ctx->pc = 0x17f240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x17f244: 0xa2430204  sb          $v1, 0x204($s2)
    ctx->pc = 0x17f244u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 516), (uint8_t)GPR_U32(ctx, 3));
label_17f248:
    // 0x17f248: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17f248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17f24c: 0x9063b858  lbu         $v1, -0x47A8($v1)
    ctx->pc = 0x17f24cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948952)));
    // 0x17f250: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17f250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17f254: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x17f254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17f258: 0x1460fe99  bnez        $v1, . + 4 + (-0x167 << 2)
    ctx->pc = 0x17F258u;
    {
        const bool branch_taken_0x17f258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F258u;
        // 0x17f25c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f258) {
            ctx->pc = 0x17ECC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17ecc0;
        }
    }
    ctx->pc = 0x17F260u;
label_17f260:
    // 0x17f260: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x17f260u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x17f264: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17f264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f268: 0x2652db50  addiu       $s2, $s2, -0x24B0
    ctx->pc = 0x17f268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957904));
label_17f26c:
    // 0x17f26c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17f26cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f270: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x17f270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f274: 0x0  nop
    ctx->pc = 0x17f274u;
    // NOP
label_17f278:
    // 0x17f278: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x17f278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x17f27c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F27Cu;
    {
        const bool branch_taken_0x17f27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f27c) {
            ctx->pc = 0x17F290u;
            goto label_17f290;
        }
    }
    ctx->pc = 0x17F284u;
    // 0x17f284: 0xc060688  jal         func_181A20
    ctx->pc = 0x17F284u;
    SET_GPR_U32(ctx, 31, 0x17F28Cu);
    ctx->pc = 0x17F288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F284u;
    // 0x17f288: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181A20u, 0x17F284u, 0x17F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F28Cu;
label_17f28c:
    // 0x17f28c: 0x0  nop
    ctx->pc = 0x17f28cu;
    // NOP
label_17f290:
    // 0x17f290: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17f290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17f294: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x17f294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17f298: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17F298u;
    {
        const bool branch_taken_0x17f298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F298u;
        // 0x17f29c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f298) {
            ctx->pc = 0x17F278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f278;
        }
    }
    ctx->pc = 0x17F2A0u;
    // 0x17f2a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17f2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17f2a4: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x17f2a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17f2a8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x17F2A8u;
    {
        const bool branch_taken_0x17f2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2A8u;
        // 0x17f2ac: 0x26520248  addiu       $s2, $s2, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2a8) {
            ctx->pc = 0x17F26Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f26c;
        }
    }
    ctx->pc = 0x17F2B0u;
    // 0x17f2b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17f2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f2b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17f2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f2b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f2b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f2bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2C4u;
        // 0x17f2c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F2CCu;
    // 0x17f2cc: 0x0  nop
    ctx->pc = 0x17f2ccu;
    // NOP
    // 0x17f2d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17f2d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17f2d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17f2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17f2dc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17f2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x17f2e0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17f2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x17f2e4: 0x2417fffe  addiu       $s7, $zero, -0x2
    ctx->pc = 0x17f2e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x17f2e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17f2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17f2ec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x17f2ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2f0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17f2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17f2f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17f2f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17f2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17f2fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17f2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17f300: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17f300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17f304: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17f304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f308: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f30c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17f30cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17f310: 0x9063b858  lbu         $v1, -0x47A8($v1)
    ctx->pc = 0x17f310u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948952)));
    // 0x17f314: 0x186000a2  blez        $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x17F314u;
    {
        const bool branch_taken_0x17f314 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x17F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F314u;
        // 0x17f318: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f314) {
            ctx->pc = 0x17F5A0u;
            goto label_17f5a0;
        }
    }
    ctx->pc = 0x17F31Cu;
    // 0x17f31c: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x17f31cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x17f320: 0x2610b860  addiu       $s0, $s0, -0x47A0
    ctx->pc = 0x17f320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948960));
label_17f324:
    // 0x17f324: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x17f324u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f328: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17f328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17f32c: 0x1280009c  beqz        $s4, . + 4 + (0x9C << 2)
    ctx->pc = 0x17F32Cu;
    {
        const bool branch_taken_0x17f32c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F32Cu;
        // 0x17f330: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f32c) {
            ctx->pc = 0x17F5A0u;
            goto label_17f5a0;
        }
    }
    ctx->pc = 0x17F334u;
    // 0x17f334: 0x1260009a  beqz        $s3, . + 4 + (0x9A << 2)
    ctx->pc = 0x17F334u;
    {
        const bool branch_taken_0x17f334 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f334) {
            ctx->pc = 0x17F5A0u;
            goto label_17f5a0;
        }
    }
    ctx->pc = 0x17F33Cu;
    // 0x17f33c: 0x30830300  andi        $v1, $a0, 0x300
    ctx->pc = 0x17f33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)768);
    // 0x17f340: 0x10600097  beqz        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x17F340u;
    {
        const bool branch_taken_0x17f340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f340) {
            ctx->pc = 0x17F5A0u;
            goto label_17f5a0;
        }
    }
    ctx->pc = 0x17F348u;
    // 0x17f348: 0x12920095  beq         $s4, $s2, . + 4 + (0x95 << 2)
    ctx->pc = 0x17F348u;
    {
        const bool branch_taken_0x17f348 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        if (branch_taken_0x17f348) {
            ctx->pc = 0x17F5A0u;
            goto label_17f5a0;
        }
    }
    ctx->pc = 0x17F350u;
    // 0x17f350: 0x30830c00  andi        $v1, $a0, 0xC00
    ctx->pc = 0x17f350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3072);
    // 0x17f354: 0x14600052  bnez        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x17F354u;
    {
        const bool branch_taken_0x17f354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F354u;
        // 0x17f358: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f354) {
            ctx->pc = 0x17F4A0u;
            goto label_17f4a0;
        }
    }
    ctx->pc = 0x17F35Cu;
    // 0x17f35c: 0x8e650538  lw          $a1, 0x538($s3)
    ctx->pc = 0x17f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1336)));
    // 0x17f360: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x17f360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x17f364: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17f364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f368: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x17f368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x17f36c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x17f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x17f370: 0x14830039  bne         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x17F370u;
    {
        const bool branch_taken_0x17f370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17f370) {
            ctx->pc = 0x17F458u;
            goto label_17f458;
        }
    }
    ctx->pc = 0x17F378u;
    // 0x17f378: 0xc6800050  lwc1        $f0, 0x50($s4)
    ctx->pc = 0x17f378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f37c: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x17F37Cu;
    SET_GPR_U32(ctx, 31, 0x17F384u);
    ctx->pc = 0x17F380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F37Cu;
    // 0x17f380: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x17F37Cu, 0x17F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F384u;
label_17f384:
    // 0x17f384: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17f384u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x17f388: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x17f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f38c: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x17F38Cu;
    SET_GPR_U32(ctx, 31, 0x17F394u);
    ctx->pc = 0x17F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F38Cu;
    // 0x17f390: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x17F38Cu, 0x17F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F394u;
label_17f394:
    // 0x17f394: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x17f394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f398: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x17F398u;
    {
        const bool branch_taken_0x17f398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f398) {
            ctx->pc = 0x17F3E0u;
            goto label_17f3e0;
        }
    }
    ctx->pc = 0x17F3A0u;
    // 0x17f3a0: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x17f3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x17f3a4: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x17f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x17f3a8: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x17f3a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17f3ac: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x17f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17f3b0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x17f3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x17f3b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f3b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f3b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f3bc: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x17f3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f3c0: 0xa683000e  sh          $v1, 0xE($s4)
    ctx->pc = 0x17f3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f3c4: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x17f3c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17f3c8: 0xa683003c  sh          $v1, 0x3C($s4)
    ctx->pc = 0x17f3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f3cc: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x17f3ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17f3d0: 0xa6830012  sh          $v1, 0x12($s4)
    ctx->pc = 0x17f3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f3d4: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x17f3d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17f3d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x17F3D8u;
    {
        const bool branch_taken_0x17f3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3D8u;
        // 0x17f3dc: 0xa683000a  sh          $v1, 0xA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3d8) {
            ctx->pc = 0x17F448u;
            goto label_17f448;
        }
    }
    ctx->pc = 0x17F3E0u;
label_17f3e0:
    // 0x17f3e0: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x17f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f3e4: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x17F3E4u;
    SET_GPR_U32(ctx, 31, 0x17F3ECu);
    ctx->pc = 0x17F3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F3E4u;
    // 0x17f3e8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x17F3E4u, 0x17F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F3ECu;
label_17f3ec:
    // 0x17f3ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17f3ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x17f3f0: 0xc6800050  lwc1        $f0, 0x50($s4)
    ctx->pc = 0x17f3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f3f4: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x17F3F4u;
    SET_GPR_U32(ctx, 31, 0x17F3FCu);
    ctx->pc = 0x17F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F3F4u;
    // 0x17f3f8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x17F3F4u, 0x17F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F3FCu;
label_17f3fc:
    // 0x17f3fc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x17f3fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17f400: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x17F400u;
    {
        const bool branch_taken_0x17f400 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17f400) {
            ctx->pc = 0x17F448u;
            goto label_17f448;
        }
    }
    ctx->pc = 0x17F408u;
    // 0x17f408: 0x8e850050  lw          $a1, 0x50($s4)
    ctx->pc = 0x17f408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x17f40c: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x17f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x17f410: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x17f410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f414: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x17f414u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17f418: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x17f418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x17f41c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17f41cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17f420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f424: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x17f424u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f428: 0xa663000e  sh          $v1, 0xE($s3)
    ctx->pc = 0x17f428u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f42c: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x17f42cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f430: 0xa663003c  sh          $v1, 0x3C($s3)
    ctx->pc = 0x17f430u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f434: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x17f434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f438: 0xa6630012  sh          $v1, 0x12($s3)
    ctx->pc = 0x17f438u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f43c: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x17f43cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f440: 0xa663000a  sh          $v1, 0xA($s3)
    ctx->pc = 0x17f440u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f444: 0x0  nop
    ctx->pc = 0x17f444u;
    // NOP
label_17f448:
    // 0x17f448: 0xae800050  sw          $zero, 0x50($s4)
    ctx->pc = 0x17f448u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 0));
    // 0x17f44c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17F44Cu;
    {
        const bool branch_taken_0x17f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F44Cu;
        // 0x17f450: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f44c) {
            ctx->pc = 0x17F4A0u;
            goto label_17f4a0;
        }
    }
    ctx->pc = 0x17F454u;
    // 0x17f454: 0x0  nop
    ctx->pc = 0x17f454u;
    // NOP
label_17f458:
    // 0x17f458: 0x8e830490  lw          $v1, 0x490($s4)
    ctx->pc = 0x17f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1168)));
    // 0x17f45c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x17f45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x17f460: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x17F460u;
    {
        const bool branch_taken_0x17f460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f460) {
            ctx->pc = 0x17F4A0u;
            goto label_17f4a0;
        }
    }
    ctx->pc = 0x17F468u;
    // 0x17f468: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F468u;
    {
        const bool branch_taken_0x17f468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f468) {
            ctx->pc = 0x17F488u;
            goto label_17f488;
        }
    }
    ctx->pc = 0x17F470u;
    // 0x17f470: 0xc060eb4  jal         func_183AD0
    ctx->pc = 0x17F470u;
    SET_GPR_U32(ctx, 31, 0x17F478u);
    ctx->pc = 0x17F474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F470u;
    // 0x17f474: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183AD0u, 0x17F470u, 0x17F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F478u;
label_17f478:
    // 0x17f478: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17f478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f47c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F47Cu;
    {
        const bool branch_taken_0x17f47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17f47c) {
            ctx->pc = 0x17F4A0u;
            goto label_17f4a0;
        }
    }
    ctx->pc = 0x17F484u;
    // 0x17f484: 0x0  nop
    ctx->pc = 0x17f484u;
    // NOP
label_17f488:
    // 0x17f488: 0x86640050  lh          $a0, 0x50($s3)
    ctx->pc = 0x17f488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x17f48c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x17f48cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17f490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f494: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x17f494u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f498: 0xae600050  sw          $zero, 0x50($s3)
    ctx->pc = 0x17f498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
    // 0x17f49c: 0x0  nop
    ctx->pc = 0x17f49cu;
    // NOP
label_17f4a0:
    // 0x17f4a0: 0x96030014  lhu         $v1, 0x14($s0)
    ctx->pc = 0x17f4a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17f4a4: 0x30632040  andi        $v1, $v1, 0x2040
    ctx->pc = 0x17f4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8256);
    // 0x17f4a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F4A8u;
    {
        const bool branch_taken_0x17f4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f4a8) {
            ctx->pc = 0x17F4B8u;
            goto label_17f4b8;
        }
    }
    ctx->pc = 0x17F4B0u;
    // 0x17f4b0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x17F4B0u;
    {
        const bool branch_taken_0x17f4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4B0u;
        // 0x17f4b4: 0xa6000014  sh          $zero, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4b0) {
            ctx->pc = 0x17F588u;
            goto label_17f588;
        }
    }
    ctx->pc = 0x17F4B8u;
label_17f4b8:
    // 0x17f4b8: 0x1aa00021  blez        $s5, . + 4 + (0x21 << 2)
    ctx->pc = 0x17F4B8u;
    {
        const bool branch_taken_0x17f4b8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x17F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4B8u;
        // 0x17f4bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4b8) {
            ctx->pc = 0x17F540u;
            goto label_17f540;
        }
    }
    ctx->pc = 0x17F4C0u;
    // 0x17f4c0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17f4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17f4c4: 0x24a5b860  addiu       $a1, $a1, -0x47A0
    ctx->pc = 0x17f4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948960));
label_17f4c8:
    // 0x17f4c8: 0x94a40014  lhu         $a0, 0x14($a1)
    ctx->pc = 0x17f4c8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x17f4cc: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x17f4ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17f4d0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x17f4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x17f4d4: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17F4D4u;
    {
        const bool branch_taken_0x17f4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f4d4) {
            ctx->pc = 0x17F530u;
            goto label_17f530;
        }
    }
    ctx->pc = 0x17F4DCu;
    // 0x17f4dc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x17f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17f4e0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17f4e4: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x17f4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17f4e8: 0x24a5b860  addiu       $a1, $a1, -0x47A0
    ctx->pc = 0x17f4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948960));
    // 0x17f4ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17f4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f4f0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x17f4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17f4f4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17f4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17f4f8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x17f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x17f4fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x17f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17f500: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x17f500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x17f504: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x17f504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f508: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x17f508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x17f50c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17f510: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x17f510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x17f514: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x17f514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17f518: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x17f518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x17f51c: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x17f51cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17f520: 0xa4a40014  sh          $a0, 0x14($a1)
    ctx->pc = 0x17f520u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x17f524: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17F524u;
    {
        const bool branch_taken_0x17f524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F524u;
        // 0x17f528: 0xa6000014  sh          $zero, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f524) {
            ctx->pc = 0x17F540u;
            goto label_17f540;
        }
    }
    ctx->pc = 0x17F52Cu;
    // 0x17f52c: 0x0  nop
    ctx->pc = 0x17f52cu;
    // NOP
label_17f530:
    // 0x17f530: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17f530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17f534: 0x75202a  slt         $a0, $v1, $s5
    ctx->pc = 0x17f534u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x17f538: 0x1480ffe3  bnez        $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x17F538u;
    {
        const bool branch_taken_0x17f538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F538u;
        // 0x17f53c: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f538) {
            ctx->pc = 0x17F4C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f4c8;
        }
    }
    ctx->pc = 0x17F540u;
label_17f540:
    // 0x17f540: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x17f540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17f544: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x17f544u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17f548: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x17f548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17f54c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x17f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17f550: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17f550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17f554: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17f554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17f558: 0x2463b860  addiu       $v1, $v1, -0x47A0
    ctx->pc = 0x17f558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948960));
    // 0x17f55c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f560: 0x94640014  lhu         $a0, 0x14($v1)
    ctx->pc = 0x17f560u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x17f564: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x17f564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x17f568: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x17f568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x17f56c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F56Cu;
    {
        const bool branch_taken_0x17f56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f56c) {
            ctx->pc = 0x17F588u;
            goto label_17f588;
        }
    }
    ctx->pc = 0x17F574u;
    // 0x17f574: 0x3083dfff  andi        $v1, $a0, 0xDFFF
    ctx->pc = 0x17f574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)57343);
    // 0x17f578: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x17f578u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f57c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x17f57cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17f580: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x17f580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x17f584: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x17f584u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_17f588:
    // 0x17f588: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17f588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17f58c: 0x9063b858  lbu         $v1, -0x47A8($v1)
    ctx->pc = 0x17f58cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948952)));
    // 0x17f590: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x17f590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x17f594: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x17f594u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17f598: 0x1460ff62  bnez        $v1, . + 4 + (-0x9E << 2)
    ctx->pc = 0x17F598u;
    {
        const bool branch_taken_0x17f598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F598u;
        // 0x17f59c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f598) {
            ctx->pc = 0x17F324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f324;
        }
    }
    ctx->pc = 0x17F5A0u;
label_17f5a0:
    // 0x17f5a0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x17f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x17f5a4: 0x90644060  lbu         $a0, 0x4060($v1)
    ctx->pc = 0x17f5a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16480)));
    // 0x17f5a8: 0x18800021  blez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x17F5A8u;
    {
        const bool branch_taken_0x17f5a8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x17F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5A8u;
        // 0x17f5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5a8) {
            ctx->pc = 0x17F630u;
            goto label_17f630;
        }
    }
    ctx->pc = 0x17F5B0u;
    // 0x17f5b0: 0x3c06009b  lui         $a2, 0x9B
    ctx->pc = 0x17f5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)155 << 16));
    // 0x17f5b4: 0x24c63fe0  addiu       $a2, $a2, 0x3FE0
    ctx->pc = 0x17f5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16352));
label_17f5b8:
    // 0x17f5b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x17f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17f5bc: 0x8c6705dc  lw          $a3, 0x5DC($v1)
    ctx->pc = 0x17f5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1500)));
    // 0x17f5c0: 0x8ce7001c  lw          $a3, 0x1C($a3)
    ctx->pc = 0x17f5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x17f5c4: 0x8ce90010  lw          $t1, 0x10($a3)
    ctx->pc = 0x17f5c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x17f5c8: 0x9127008c  lbu         $a3, 0x8C($t1)
    ctx->pc = 0x17f5c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 140)));
    // 0x17f5cc: 0x30e70002  andi        $a3, $a3, 0x2
    ctx->pc = 0x17f5ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x17f5d0: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x17F5D0u;
    {
        const bool branch_taken_0x17f5d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f5d0) {
            ctx->pc = 0x17F600u;
            goto label_17f600;
        }
    }
    ctx->pc = 0x17F5D8u;
    // 0x17f5d8: 0x85280000  lh          $t0, 0x0($t1)
    ctx->pc = 0x17f5d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17f5dc: 0x846705ec  lh          $a3, 0x5EC($v1)
    ctx->pc = 0x17f5dcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1516)));
    // 0x17f5e0: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x17f5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x17f5e4: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x17f5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x17f5e8: 0x85280002  lh          $t0, 0x2($t1)
    ctx->pc = 0x17f5e8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x17f5ec: 0x846705ee  lh          $a3, 0x5EE($v1)
    ctx->pc = 0x17f5ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1518)));
    // 0x17f5f0: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x17f5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x17f5f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17F5F4u;
    {
        const bool branch_taken_0x17f5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5F4u;
        // 0x17f5f8: 0xa4670002  sh          $a3, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5f4) {
            ctx->pc = 0x17F620u;
            goto label_17f620;
        }
    }
    ctx->pc = 0x17F5FCu;
    // 0x17f5fc: 0x0  nop
    ctx->pc = 0x17f5fcu;
    // NOP
label_17f600:
    // 0x17f600: 0x85280000  lh          $t0, 0x0($t1)
    ctx->pc = 0x17f600u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17f604: 0x846705ec  lh          $a3, 0x5EC($v1)
    ctx->pc = 0x17f604u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1516)));
    // 0x17f608: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x17f608u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x17f60c: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x17f60cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x17f610: 0x85280002  lh          $t0, 0x2($t1)
    ctx->pc = 0x17f610u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x17f614: 0x846705ee  lh          $a3, 0x5EE($v1)
    ctx->pc = 0x17f614u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1518)));
    // 0x17f618: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x17f618u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x17f61c: 0xa4670002  sh          $a3, 0x2($v1)
    ctx->pc = 0x17f61cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
label_17f620:
    // 0x17f620: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17f620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17f624: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x17f624u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x17f628: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x17F628u;
    {
        const bool branch_taken_0x17f628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F628u;
        // 0x17f62c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f628) {
            ctx->pc = 0x17F5B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f5b8;
        }
    }
    ctx->pc = 0x17F630u;
label_17f630:
    // 0x17f630: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x17f630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x17f634: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17f634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f638: 0x24a54070  addiu       $a1, $a1, 0x4070
    ctx->pc = 0x17f638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16496));
label_17f63c:
    // 0x17f63c: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x17f63cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17f640: 0x5860000a  blezl       $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17F640u;
    {
        const bool branch_taken_0x17f640 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x17f640) {
            ctx->pc = 0x17F644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F640u;
            // 0x17f644: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F66Cu;
            goto label_17f66c;
        }
    }
    ctx->pc = 0x17F648u;
    // 0x17f648: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x17f648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17f64c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f650: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x17f650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x17f654: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17f654u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17f658: 0x24634080  addiu       $v1, $v1, 0x4080
    ctx->pc = 0x17f658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16512));
    // 0x17f65c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f660: 0x80770000  lb          $s7, 0x0($v1)
    ctx->pc = 0x17f660u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f664: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17F664u;
    {
        const bool branch_taken_0x17f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F664u;
        // 0x17f668: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f664) {
            ctx->pc = 0x17F678u;
            goto label_17f678;
        }
    }
    ctx->pc = 0x17F66Cu;
label_17f66c:
    // 0x17f66c: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x17f66cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17f670: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x17F670u;
    {
        const bool branch_taken_0x17f670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F670u;
        // 0x17f674: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f670) {
            ctx->pc = 0x17F63Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f63c;
        }
    }
    ctx->pc = 0x17F678u;
label_17f678:
    // 0x17f678: 0x12c0001a  beqz        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x17F678u;
    {
        const bool branch_taken_0x17f678 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f678) {
            ctx->pc = 0x17F6E4u;
            goto label_17f6e4;
        }
    }
    ctx->pc = 0x17F680u;
    // 0x17f680: 0x17263c  dsll32      $a0, $s7, 24
    ctx->pc = 0x17f680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 24));
    // 0x17f684: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17f684u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x17f688: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x17F688u;
    {
        const bool branch_taken_0x17f688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f688) {
            ctx->pc = 0x17F68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F688u;
            // 0x17f68c: 0x3c04ff00  lui         $a0, 0xFF00 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F6D8u;
            goto label_17f6d8;
        }
    }
    ctx->pc = 0x17F690u;
    // 0x17f690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17f690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f694: 0x5083000b  beql        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17F694u;
    {
        const bool branch_taken_0x17f694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f694) {
            ctx->pc = 0x17F698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F694u;
            // 0x17f698: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F6C4u;
            goto label_17f6c4;
        }
    }
    ctx->pc = 0x17F69Cu;
    // 0x17f69c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f6a0: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F6A0u;
    {
        const bool branch_taken_0x17f6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f6a0) {
            ctx->pc = 0x17F6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F6A0u;
            // 0x17f6a4: 0x3c04ffff  lui         $a0, 0xFFFF (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F6B0u;
            goto label_17f6b0;
        }
    }
    ctx->pc = 0x17F6A8u;
    // 0x17f6a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17F6A8u;
    {
        const bool branch_taken_0x17f6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f6a8) {
            ctx->pc = 0x17F6E4u;
            goto label_17f6e4;
        }
    }
    ctx->pc = 0x17F6B0u;
label_17f6b0:
    // 0x17f6b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17f6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6b4: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17F6B4u;
    SET_GPR_U32(ctx, 31, 0x17F6BCu);
    ctx->pc = 0x17F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F6B4u;
    // 0x17f6b8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17F6B4u, 0x17F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F6BCu;
label_17f6bc:
    // 0x17f6bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17F6BCu;
    {
        const bool branch_taken_0x17f6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f6bc) {
            ctx->pc = 0x17F6E4u;
            goto label_17f6e4;
        }
    }
    ctx->pc = 0x17F6C4u;
label_17f6c4:
    // 0x17f6c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17f6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6c8: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17F6C8u;
    SET_GPR_U32(ctx, 31, 0x17F6D0u);
    ctx->pc = 0x17F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F6C8u;
    // 0x17f6cc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17F6C8u, 0x17F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F6D0u;
label_17f6d0:
    // 0x17f6d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17F6D0u;
    {
        const bool branch_taken_0x17f6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f6d0) {
            ctx->pc = 0x17F6E4u;
            goto label_17f6e4;
        }
    }
    ctx->pc = 0x17F6D8u;
label_17f6d8:
    // 0x17f6d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17f6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6dc: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x17F6DCu;
    SET_GPR_U32(ctx, 31, 0x17F6E4u);
    ctx->pc = 0x17F6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F6DCu;
    // 0x17f6e0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x17F6DCu, 0x17F6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F6E4u;
label_17f6e4:
    // 0x17f6e4: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x17f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x17f6e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17f6ec: 0xa071b858  sb          $s1, -0x47A8($v1)
    ctx->pc = 0x17f6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948952), (uint8_t)GPR_U32(ctx, 17));
    // 0x17f6f0: 0xa0804060  sb          $zero, 0x4060($a0)
    ctx->pc = 0x17f6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16480), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f6f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17f6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17f6f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17f6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f6fc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17f6fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17f700: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17f700u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17f704: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17f704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17f708: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17f708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f70c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17f70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f710: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17f710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f714: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17f714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f718: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f71c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F71Cu;
        // 0x17f720: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F724u;
    // 0x17f724: 0x0  nop
    ctx->pc = 0x17f724u;
    // NOP
    // 0x17f728: 0x0  nop
    ctx->pc = 0x17f728u;
    // NOP
    // 0x17f72c: 0x0  nop
    ctx->pc = 0x17f72cu;
    // NOP
}
