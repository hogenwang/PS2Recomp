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

// Function: sub_00154AB0
// Address: 0x154ab0 - 0x155780
void sub_00154AB0_0x154ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154AB0_0x154ab0");
#endif

    switch (ctx->pc) {
        case 0x154ad8u: goto label_154ad8;
        case 0x154ae0u: goto label_154ae0;
        case 0x154b68u: goto label_154b68;
        case 0x154c08u: goto label_154c08;
        case 0x154c1cu: goto label_154c1c;
        case 0x154c3cu: goto label_154c3c;
        case 0x154c48u: goto label_154c48;
        case 0x154c78u: goto label_154c78;
        case 0x154c8cu: goto label_154c8c;
        case 0x154cacu: goto label_154cac;
        case 0x154cb8u: goto label_154cb8;
        case 0x154ce8u: goto label_154ce8;
        case 0x154cfcu: goto label_154cfc;
        case 0x154d1cu: goto label_154d1c;
        case 0x154d28u: goto label_154d28;
        case 0x154d88u: goto label_154d88;
        case 0x154da4u: goto label_154da4;
        case 0x154db0u: goto label_154db0;
        case 0x154dc4u: goto label_154dc4;
        case 0x154dd0u: goto label_154dd0;
        case 0x154decu: goto label_154dec;
        case 0x154df8u: goto label_154df8;
        case 0x154e28u: goto label_154e28;
        case 0x154e48u: goto label_154e48;
        case 0x154e54u: goto label_154e54;
        case 0x154e6cu: goto label_154e6c;
        case 0x154e8cu: goto label_154e8c;
        case 0x154e98u: goto label_154e98;
        case 0x154ec8u: goto label_154ec8;
        case 0x154ee8u: goto label_154ee8;
        case 0x154ef4u: goto label_154ef4;
        case 0x154f0cu: goto label_154f0c;
        case 0x154f2cu: goto label_154f2c;
        case 0x154f38u: goto label_154f38;
        case 0x154f68u: goto label_154f68;
        case 0x154f84u: goto label_154f84;
        case 0x154f90u: goto label_154f90;
        case 0x154fa4u: goto label_154fa4;
        case 0x154fc0u: goto label_154fc0;
        case 0x154fccu: goto label_154fcc;
        case 0x155000u: goto label_155000;
        case 0x155014u: goto label_155014;
        case 0x155060u: goto label_155060;
        case 0x155080u: goto label_155080;
        case 0x1551fcu: goto label_1551fc;
        case 0x155204u: goto label_155204;
        case 0x155230u: goto label_155230;
        case 0x155250u: goto label_155250;
        case 0x15525cu: goto label_15525c;
        case 0x1552a4u: goto label_1552a4;
        case 0x1552acu: goto label_1552ac;
        case 0x1552b4u: goto label_1552b4;
        case 0x1552e0u: goto label_1552e0;
        case 0x155300u: goto label_155300;
        case 0x15530cu: goto label_15530c;
        case 0x15535cu: goto label_15535c;
        case 0x1553d0u: goto label_1553d0;
        case 0x1553d8u: goto label_1553d8;
        case 0x155410u: goto label_155410;
        case 0x15542cu: goto label_15542c;
        case 0x155438u: goto label_155438;
        case 0x155468u: goto label_155468;
        case 0x155470u: goto label_155470;
        case 0x1554a8u: goto label_1554a8;
        case 0x1554c4u: goto label_1554c4;
        case 0x1554d0u: goto label_1554d0;
        case 0x155500u: goto label_155500;
        case 0x155508u: goto label_155508;
        case 0x155540u: goto label_155540;
        case 0x15555cu: goto label_15555c;
        case 0x155568u: goto label_155568;
        case 0x1555a4u: goto label_1555a4;
        case 0x1555acu: goto label_1555ac;
        case 0x1555e0u: goto label_1555e0;
        case 0x1555fcu: goto label_1555fc;
        case 0x155608u: goto label_155608;
        case 0x155644u: goto label_155644;
        case 0x15564cu: goto label_15564c;
        case 0x155654u: goto label_155654;
        case 0x155694u: goto label_155694;
        case 0x15569cu: goto label_15569c;
        case 0x1556a4u: goto label_1556a4;
        case 0x1556acu: goto label_1556ac;
        case 0x1556ecu: goto label_1556ec;
        case 0x1556f4u: goto label_1556f4;
        case 0x1556fcu: goto label_1556fc;
        case 0x155708u: goto label_155708;
        case 0x155724u: goto label_155724;
        case 0x155730u: goto label_155730;
        case 0x155758u: goto label_155758;
        case 0x155760u: goto label_155760;
        default: break;
    }

    ctx->pc = 0x154ab0u;

    // 0x154ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x154ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x154ab4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154ab8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x154ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x154abc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154ac4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154ac8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x154ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154acc: 0x9042daa0  lbu         $v0, -0x2560($v0)
    ctx->pc = 0x154accu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x154ad0: 0x1840031f  blez        $v0, . + 4 + (0x31F << 2)
    ctx->pc = 0x154AD0u;
    {
        const bool branch_taken_0x154ad0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x154AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AD0u;
        // 0x154ad4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ad0) {
            ctx->pc = 0x155750u;
            goto label_155750;
        }
    }
    ctx->pc = 0x154AD8u;
label_154ad8:
    // 0x154ad8: 0xc05d17c  jal         func_1745F0
    ctx->pc = 0x154AD8u;
    SET_GPR_U32(ctx, 31, 0x154AE0u);
    ctx->pc = 0x154ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AD8u;
    // 0x154adc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1745F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1745F0u, 0x154AD8u, 0x154AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AE0u;
label_154ae0:
    // 0x154ae0: 0x10400313  beqz        $v0, . + 4 + (0x313 << 2)
    ctx->pc = 0x154AE0u;
    {
        const bool branch_taken_0x154ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154ae0) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154AE8u;
    // 0x154ae8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x154ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x154aec: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x154aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x154af0: 0x9484dab0  lhu         $a0, -0x2550($a0)
    ctx->pc = 0x154af0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957744)));
    // 0x154af4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x154af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x154af8: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x154af8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x154afc: 0x3086ff00  andi        $a2, $a0, 0xFF00
    ctx->pc = 0x154afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x154b00: 0x1465001b  bne         $v1, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x154B00u;
    {
        const bool branch_taken_0x154b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x154B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B00u;
        // 0x154b04: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b00) {
            ctx->pc = 0x154B70u;
            goto label_154b70;
        }
    }
    ctx->pc = 0x154B08u;
    // 0x154b08: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x154b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x154b0c: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x154b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x154b10: 0x54a30314  bnel        $a1, $v1, . + 4 + (0x314 << 2)
    ctx->pc = 0x154B10u;
    {
        const bool branch_taken_0x154b10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x154b10) {
            ctx->pc = 0x154B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154B10u;
            // 0x154b14: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155764u;
            goto label_155764;
        }
    }
    ctx->pc = 0x154B18u;
    // 0x154b18: 0x24030303  addiu       $v1, $zero, 0x303
    ctx->pc = 0x154b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x154b1c: 0x14830310  bne         $a0, $v1, . + 4 + (0x310 << 2)
    ctx->pc = 0x154B1Cu;
    {
        const bool branch_taken_0x154b1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x154b1c) {
            ctx->pc = 0x155760u;
            goto label_155760;
        }
    }
    ctx->pc = 0x154B24u;
    // 0x154b24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x154b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x154b28: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x154b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154b2c: 0x9063d9d0  lbu         $v1, -0x2630($v1)
    ctx->pc = 0x154b2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957520)));
    // 0x154b30: 0x1064030b  beq         $v1, $a0, . + 4 + (0x30B << 2)
    ctx->pc = 0x154B30u;
    {
        const bool branch_taken_0x154b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x154b30) {
            ctx->pc = 0x155760u;
            goto label_155760;
        }
    }
    ctx->pc = 0x154B38u;
    // 0x154b38: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x154b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x154b3c: 0x8c64d918  lw          $a0, -0x26E8($v1)
    ctx->pc = 0x154b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x154b40: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x154b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x154b44: 0x10600306  beqz        $v1, . + 4 + (0x306 << 2)
    ctx->pc = 0x154B44u;
    {
        const bool branch_taken_0x154b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b44) {
            ctx->pc = 0x155760u;
            goto label_155760;
        }
    }
    ctx->pc = 0x154B4Cu;
    // 0x154b4c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x154b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x154b50: 0x34420180  ori         $v0, $v0, 0x180
    ctx->pc = 0x154b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
    // 0x154b54: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x154b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x154b58: 0x144002fd  bnez        $v0, . + 4 + (0x2FD << 2)
    ctx->pc = 0x154B58u;
    {
        const bool branch_taken_0x154b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154b58) {
            ctx->pc = 0x155750u;
            goto label_155750;
        }
    }
    ctx->pc = 0x154B60u;
    // 0x154b60: 0xc0c1534  jal         func_3054D0
    ctx->pc = 0x154B60u;
    SET_GPR_U32(ctx, 31, 0x154B68u);
    ctx->pc = 0x3054D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3054D0u, 0x154B60u, 0x154B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B68u;
label_154b68:
    // 0x154b68: 0x100002fd  b           . + 4 + (0x2FD << 2)
    ctx->pc = 0x154B68u;
    {
        const bool branch_taken_0x154b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b68) {
            ctx->pc = 0x155760u;
            goto label_155760;
        }
    }
    ctx->pc = 0x154B70u;
label_154b70:
    // 0x154b70: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x154b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x154b74: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x154b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x154b78: 0x10c502ed  beq         $a2, $a1, . + 4 + (0x2ED << 2)
    ctx->pc = 0x154B78u;
    {
        const bool branch_taken_0x154b78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x154b78) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154B80u;
    // 0x154b80: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x154b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x154b84: 0x10c50140  beq         $a2, $a1, . + 4 + (0x140 << 2)
    ctx->pc = 0x154B84u;
    {
        const bool branch_taken_0x154b84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x154b84) {
            ctx->pc = 0x155088u;
            goto label_155088;
        }
    }
    ctx->pc = 0x154B8Cu;
    // 0x154b8c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x154b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x154b90: 0x10c30123  beq         $a2, $v1, . + 4 + (0x123 << 2)
    ctx->pc = 0x154B90u;
    {
        const bool branch_taken_0x154b90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x154b90) {
            ctx->pc = 0x155020u;
            goto label_155020;
        }
    }
    ctx->pc = 0x154B98u;
    // 0x154b98: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x154b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x154b9c: 0x10c30064  beq         $a2, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x154B9Cu;
    {
        const bool branch_taken_0x154b9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x154b9c) {
            ctx->pc = 0x154D30u;
            goto label_154d30;
        }
    }
    ctx->pc = 0x154BA4u;
    // 0x154ba4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x154BA4u;
    {
        const bool branch_taken_0x154ba4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x154ba4) {
            ctx->pc = 0x154BB8u;
            goto label_154bb8;
        }
    }
    ctx->pc = 0x154BACu;
    // 0x154bac: 0x100002e0  b           . + 4 + (0x2E0 << 2)
    ctx->pc = 0x154BACu;
    {
        const bool branch_taken_0x154bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154bac) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154BB4u;
    // 0x154bb4: 0x0  nop
    ctx->pc = 0x154bb4u;
    // NOP
label_154bb8:
    // 0x154bb8: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x154bb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x154bbc: 0x102002dc  beqz        $at, . + 4 + (0x2DC << 2)
    ctx->pc = 0x154BBCu;
    {
        const bool branch_taken_0x154bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x154bbc) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154BC4u;
    // 0x154bc4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x154bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x154bc8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x154bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x154bcc: 0x2484d220  addiu       $a0, $a0, -0x2DE0
    ctx->pc = 0x154bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955552));
    // 0x154bd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154bd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x154bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154bd8: 0x600008  jr          $v1
    ctx->pc = 0x154BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154BE0u: goto label_154be0;
            case 0x154C50u: goto label_154c50;
            case 0x154CC0u: goto label_154cc0;
            case 0x155730u: goto label_155730;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154BD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x154BE0u;
label_154be0:
    // 0x154be0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x154be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x154be4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154be8: 0x108302d1  beq         $a0, $v1, . + 4 + (0x2D1 << 2)
    ctx->pc = 0x154BE8u;
    {
        const bool branch_taken_0x154be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154be8) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154BF0u;
    // 0x154bf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154bf4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154BF4u;
    {
        const bool branch_taken_0x154bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154bf4) {
            ctx->pc = 0x154C10u;
            goto label_154c10;
        }
    }
    ctx->pc = 0x154BFCu;
    // 0x154bfc: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154c00: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154C00u;
    SET_GPR_U32(ctx, 31, 0x154C08u);
    ctx->pc = 0x154C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C00u;
    // 0x154c04: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154C00u, 0x154C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C08u;
label_154c08:
    // 0x154c08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x154C08u;
    {
        const bool branch_taken_0x154c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C08u;
        // 0x154c0c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c08) {
            ctx->pc = 0x154C20u;
            goto label_154c20;
        }
    }
    ctx->pc = 0x154C10u;
label_154c10:
    // 0x154c10: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154c14: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154C14u;
    SET_GPR_U32(ctx, 31, 0x154C1Cu);
    ctx->pc = 0x154C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C14u;
    // 0x154c18: 0x2484b4e0  addiu       $a0, $a0, -0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154C14u, 0x154C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C1Cu;
label_154c1c:
    // 0x154c1c: 0x64100002  daddiu      $s0, $zero, 0x2
    ctx->pc = 0x154c1cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_154c20:
    // 0x154c20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154c24: 0x9043d9d0  lbu         $v1, -0x2630($v0)
    ctx->pc = 0x154c24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x154c28: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x154c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154c2c: 0x106202c0  beq         $v1, $v0, . + 4 + (0x2C0 << 2)
    ctx->pc = 0x154C2Cu;
    {
        const bool branch_taken_0x154c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x154c2c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154C34u;
    // 0x154c34: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x154C34u;
    SET_GPR_U32(ctx, 31, 0x154C3Cu);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x154C34u, 0x154C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C3Cu;
label_154c3c:
    // 0x154c3c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x154c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x154c40: 0xc0558e0  jal         func_156380
    ctx->pc = 0x154C40u;
    SET_GPR_U32(ctx, 31, 0x154C48u);
    ctx->pc = 0x154C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C40u;
    // 0x154c44: 0x24843c10  addiu       $a0, $a0, 0x3C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x154C40u, 0x154C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C48u;
label_154c48:
    // 0x154c48: 0x100002b9  b           . + 4 + (0x2B9 << 2)
    ctx->pc = 0x154C48u;
    {
        const bool branch_taken_0x154c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154c48) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154C50u;
label_154c50:
    // 0x154c50: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x154c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x154c54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154c58: 0x108302b5  beq         $a0, $v1, . + 4 + (0x2B5 << 2)
    ctx->pc = 0x154C58u;
    {
        const bool branch_taken_0x154c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154c58) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154C60u;
    // 0x154c60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154c64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154C64u;
    {
        const bool branch_taken_0x154c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154c64) {
            ctx->pc = 0x154C80u;
            goto label_154c80;
        }
    }
    ctx->pc = 0x154C6Cu;
    // 0x154c6c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154c70: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154C70u;
    SET_GPR_U32(ctx, 31, 0x154C78u);
    ctx->pc = 0x154C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C70u;
    // 0x154c74: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154C70u, 0x154C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C78u;
label_154c78:
    // 0x154c78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x154C78u;
    {
        const bool branch_taken_0x154c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C78u;
        // 0x154c7c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c78) {
            ctx->pc = 0x154C90u;
            goto label_154c90;
        }
    }
    ctx->pc = 0x154C80u;
label_154c80:
    // 0x154c80: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154c84: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154C84u;
    SET_GPR_U32(ctx, 31, 0x154C8Cu);
    ctx->pc = 0x154C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C84u;
    // 0x154c88: 0x2484b4e0  addiu       $a0, $a0, -0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154C84u, 0x154C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C8Cu;
label_154c8c:
    // 0x154c8c: 0x64100002  daddiu      $s0, $zero, 0x2
    ctx->pc = 0x154c8cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_154c90:
    // 0x154c90: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154c94: 0x9043d9d0  lbu         $v1, -0x2630($v0)
    ctx->pc = 0x154c94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x154c98: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x154c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154c9c: 0x106202a4  beq         $v1, $v0, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x154C9Cu;
    {
        const bool branch_taken_0x154c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x154c9c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154CA4u;
    // 0x154ca4: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x154CA4u;
    SET_GPR_U32(ctx, 31, 0x154CACu);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x154CA4u, 0x154CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CACu;
label_154cac:
    // 0x154cac: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154cb0: 0xc0558e0  jal         func_156380
    ctx->pc = 0x154CB0u;
    SET_GPR_U32(ctx, 31, 0x154CB8u);
    ctx->pc = 0x154CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154CB0u;
    // 0x154cb4: 0x2484baa0  addiu       $a0, $a0, -0x4560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x154CB0u, 0x154CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CB8u;
label_154cb8:
    // 0x154cb8: 0x1000029d  b           . + 4 + (0x29D << 2)
    ctx->pc = 0x154CB8u;
    {
        const bool branch_taken_0x154cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154cb8) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154CC0u;
label_154cc0:
    // 0x154cc0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x154cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x154cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154cc8: 0x10830299  beq         $a0, $v1, . + 4 + (0x299 << 2)
    ctx->pc = 0x154CC8u;
    {
        const bool branch_taken_0x154cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154cc8) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154CD0u;
    // 0x154cd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154cd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154CD4u;
    {
        const bool branch_taken_0x154cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154cd4) {
            ctx->pc = 0x154CF0u;
            goto label_154cf0;
        }
    }
    ctx->pc = 0x154CDCu;
    // 0x154cdc: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154ce0: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154CE0u;
    SET_GPR_U32(ctx, 31, 0x154CE8u);
    ctx->pc = 0x154CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154CE0u;
    // 0x154ce4: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154CE0u, 0x154CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CE8u;
label_154ce8:
    // 0x154ce8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x154CE8u;
    {
        const bool branch_taken_0x154ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154CE8u;
        // 0x154cec: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ce8) {
            ctx->pc = 0x154D00u;
            goto label_154d00;
        }
    }
    ctx->pc = 0x154CF0u;
label_154cf0:
    // 0x154cf0: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154cf4: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154CF4u;
    SET_GPR_U32(ctx, 31, 0x154CFCu);
    ctx->pc = 0x154CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154CF4u;
    // 0x154cf8: 0x2484b4e0  addiu       $a0, $a0, -0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154CF4u, 0x154CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CFCu;
label_154cfc:
    // 0x154cfc: 0x64100002  daddiu      $s0, $zero, 0x2
    ctx->pc = 0x154cfcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_154d00:
    // 0x154d00: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154d04: 0x9043d9d0  lbu         $v1, -0x2630($v0)
    ctx->pc = 0x154d04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x154d08: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x154d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154d0c: 0x10620288  beq         $v1, $v0, . + 4 + (0x288 << 2)
    ctx->pc = 0x154D0Cu;
    {
        const bool branch_taken_0x154d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x154d0c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154D14u;
    // 0x154d14: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x154D14u;
    SET_GPR_U32(ctx, 31, 0x154D1Cu);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x154D14u, 0x154D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D1Cu;
label_154d1c:
    // 0x154d1c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x154d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x154d20: 0xc0558e0  jal         func_156380
    ctx->pc = 0x154D20u;
    SET_GPR_U32(ctx, 31, 0x154D28u);
    ctx->pc = 0x154D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D20u;
    // 0x154d24: 0x248497d0  addiu       $a0, $a0, -0x6830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x154D20u, 0x154D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D28u;
label_154d28:
    // 0x154d28: 0x10000281  b           . + 4 + (0x281 << 2)
    ctx->pc = 0x154D28u;
    {
        const bool branch_taken_0x154d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154d28) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154D30u;
label_154d30:
    // 0x154d30: 0x2483ff00  addiu       $v1, $a0, -0x100
    ctx->pc = 0x154d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    // 0x154d34: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x154d34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x154d38: 0x1020027d  beqz        $at, . + 4 + (0x27D << 2)
    ctx->pc = 0x154D38u;
    {
        const bool branch_taken_0x154d38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x154d38) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154D40u;
    // 0x154d40: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x154d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x154d44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x154d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x154d48: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x154d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x154d4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154d50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x154d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154d54: 0x600008  jr          $v1
    ctx->pc = 0x154D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154D60u: goto label_154d60;
            case 0x154E00u: goto label_154e00;
            case 0x154EA0u: goto label_154ea0;
            case 0x154F40u: goto label_154f40;
            case 0x154FD8u: goto label_154fd8;
            case 0x155730u: goto label_155730;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154D54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x154D5Cu;
    // 0x154d5c: 0x0  nop
    ctx->pc = 0x154d5cu;
    // NOP
label_154d60:
    // 0x154d60: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x154d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x154d64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154d68: 0x10830271  beq         $a0, $v1, . + 4 + (0x271 << 2)
    ctx->pc = 0x154D68u;
    {
        const bool branch_taken_0x154d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154d68) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154D70u;
    // 0x154d70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154d74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x154D74u;
    {
        const bool branch_taken_0x154d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154d74) {
            ctx->pc = 0x154DB8u;
            goto label_154db8;
        }
    }
    ctx->pc = 0x154D7Cu;
    // 0x154d7c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154d80: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154D80u;
    SET_GPR_U32(ctx, 31, 0x154D88u);
    ctx->pc = 0x154D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D80u;
    // 0x154d84: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154D80u, 0x154D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D88u;
label_154d88:
    // 0x154d88: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154d8c: 0x9043d9d0  lbu         $v1, -0x2630($v0)
    ctx->pc = 0x154d8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x154d90: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x154d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154d94: 0x10620266  beq         $v1, $v0, . + 4 + (0x266 << 2)
    ctx->pc = 0x154D94u;
    {
        const bool branch_taken_0x154d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D94u;
        // 0x154d98: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d94) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154D9Cu;
    // 0x154d9c: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x154D9Cu;
    SET_GPR_U32(ctx, 31, 0x154DA4u);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x154D9Cu, 0x154DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DA4u;
label_154da4:
    // 0x154da4: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154da8: 0xc0558e0  jal         func_156380
    ctx->pc = 0x154DA8u;
    SET_GPR_U32(ctx, 31, 0x154DB0u);
    ctx->pc = 0x154DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DA8u;
    // 0x154dac: 0x2484bca0  addiu       $a0, $a0, -0x4360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x154DA8u, 0x154DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DB0u;
label_154db0:
    // 0x154db0: 0x1000025f  b           . + 4 + (0x25F << 2)
    ctx->pc = 0x154DB0u;
    {
        const bool branch_taken_0x154db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154db0) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154DB8u;
label_154db8:
    // 0x154db8: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154dbc: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154DBCu;
    SET_GPR_U32(ctx, 31, 0x154DC4u);
    ctx->pc = 0x154DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DBCu;
    // 0x154dc0: 0x2484b4e0  addiu       $a0, $a0, -0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154DBCu, 0x154DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DC4u;
label_154dc4:
    // 0x154dc4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x154dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x154dc8: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154DC8u;
    SET_GPR_U32(ctx, 31, 0x154DD0u);
    ctx->pc = 0x154DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DC8u;
    // 0x154dcc: 0x2484faf0  addiu       $a0, $a0, -0x510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154DC8u, 0x154DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DD0u;
label_154dd0:
    // 0x154dd0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154dd4: 0x9043d9d0  lbu         $v1, -0x2630($v0)
    ctx->pc = 0x154dd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x154dd8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x154dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154ddc: 0x10620254  beq         $v1, $v0, . + 4 + (0x254 << 2)
    ctx->pc = 0x154DDCu;
    {
        const bool branch_taken_0x154ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DDCu;
        // 0x154de0: 0x64100002  daddiu      $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ddc) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154DE4u;
    // 0x154de4: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x154DE4u;
    SET_GPR_U32(ctx, 31, 0x154DECu);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x154DE4u, 0x154DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DECu;
label_154dec:
    // 0x154dec: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154df0: 0xc0558e0  jal         func_156380
    ctx->pc = 0x154DF0u;
    SET_GPR_U32(ctx, 31, 0x154DF8u);
    ctx->pc = 0x154DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DF0u;
    // 0x154df4: 0x2484bca0  addiu       $a0, $a0, -0x4360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x154DF0u, 0x154DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DF8u;
label_154df8:
    // 0x154df8: 0x1000024d  b           . + 4 + (0x24D << 2)
    ctx->pc = 0x154DF8u;
    {
        const bool branch_taken_0x154df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154df8) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154E00u;
label_154e00:
    // 0x154e00: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x154e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x154e04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154e08: 0x10830249  beq         $a0, $v1, . + 4 + (0x249 << 2)
    ctx->pc = 0x154E08u;
    {
        const bool branch_taken_0x154e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154e08) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154E10u;
    // 0x154e10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154e14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x154E14u;
    {
        const bool branch_taken_0x154e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154e14) {
            ctx->pc = 0x154E60u;
            goto label_154e60;
        }
    }
    ctx->pc = 0x154E1Cu;
    // 0x154e1c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154e20: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154E20u;
    SET_GPR_U32(ctx, 31, 0x154E28u);
    ctx->pc = 0x154E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E20u;
    // 0x154e24: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154E20u, 0x154E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E28u;
label_154e28:
    // 0x154e28: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154e2c: 0x9043d9d0  lbu         $v1, -0x2630($v0)
    ctx->pc = 0x154e2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x154e30: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x154e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154e34: 0x1062023e  beq         $v1, $v0, . + 4 + (0x23E << 2)
    ctx->pc = 0x154E34u;
    {
        const bool branch_taken_0x154e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E34u;
        // 0x154e38: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e34) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154E3Cu;
    // 0x154e3c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154e40: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x154E40u;
    SET_GPR_U32(ctx, 31, 0x154E48u);
    ctx->pc = 0x154E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E40u;
    // 0x154e44: 0xac40da48  sw          $zero, -0x25B8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957640), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x154E40u, 0x154E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E48u;
label_154e48:
    // 0x154e48: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x154e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x154e4c: 0xc0558e0  jal         func_156380
    ctx->pc = 0x154E4Cu;
    SET_GPR_U32(ctx, 31, 0x154E54u);
    ctx->pc = 0x154E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E4Cu;
    // 0x154e50: 0x248495b0  addiu       $a0, $a0, -0x6A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x154E4Cu, 0x154E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E54u;
label_154e54:
    // 0x154e54: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x154E54u;
    {
        const bool branch_taken_0x154e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154e54) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154E5Cu;
    // 0x154e5c: 0x0  nop
    ctx->pc = 0x154e5cu;
    // NOP
label_154e60:
    // 0x154e60: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154e64: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154E64u;
    SET_GPR_U32(ctx, 31, 0x154E6Cu);
    ctx->pc = 0x154E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E64u;
    // 0x154e68: 0x2484b4e0  addiu       $a0, $a0, -0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154E64u, 0x154E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E6Cu;
label_154e6c:
    // 0x154e6c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154e70: 0x9043d9d0  lbu         $v1, -0x2630($v0)
    ctx->pc = 0x154e70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x154e74: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x154e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154e78: 0x1062022d  beq         $v1, $v0, . + 4 + (0x22D << 2)
    ctx->pc = 0x154E78u;
    {
        const bool branch_taken_0x154e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E78u;
        // 0x154e7c: 0x64100002  daddiu      $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e78) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154E80u;
    // 0x154e80: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154e84: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x154E84u;
    SET_GPR_U32(ctx, 31, 0x154E8Cu);
    ctx->pc = 0x154E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E84u;
    // 0x154e88: 0xac40da48  sw          $zero, -0x25B8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957640), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x154E84u, 0x154E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E8Cu;
label_154e8c:
    // 0x154e8c: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x154e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x154e90: 0xc0558e0  jal         func_156380
    ctx->pc = 0x154E90u;
    SET_GPR_U32(ctx, 31, 0x154E98u);
    ctx->pc = 0x154E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E90u;
    // 0x154e94: 0x248495b0  addiu       $a0, $a0, -0x6A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x154E90u, 0x154E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E98u;
label_154e98:
    // 0x154e98: 0x10000225  b           . + 4 + (0x225 << 2)
    ctx->pc = 0x154E98u;
    {
        const bool branch_taken_0x154e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154e98) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154EA0u;
label_154ea0:
    // 0x154ea0: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x154ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x154ea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154ea8: 0x10830221  beq         $a0, $v1, . + 4 + (0x221 << 2)
    ctx->pc = 0x154EA8u;
    {
        const bool branch_taken_0x154ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154ea8) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154EB0u;
    // 0x154eb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154eb4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x154EB4u;
    {
        const bool branch_taken_0x154eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154eb4) {
            ctx->pc = 0x154F00u;
            goto label_154f00;
        }
    }
    ctx->pc = 0x154EBCu;
    // 0x154ebc: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154ec0: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154EC0u;
    SET_GPR_U32(ctx, 31, 0x154EC8u);
    ctx->pc = 0x154EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EC0u;
    // 0x154ec4: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154EC0u, 0x154EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EC8u;
label_154ec8:
    // 0x154ec8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154ecc: 0x9043d9d0  lbu         $v1, -0x2630($v0)
    ctx->pc = 0x154eccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x154ed0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x154ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154ed4: 0x10620216  beq         $v1, $v0, . + 4 + (0x216 << 2)
    ctx->pc = 0x154ED4u;
    {
        const bool branch_taken_0x154ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154ED4u;
        // 0x154ed8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ed4) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154EDCu;
    // 0x154edc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154ee0: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x154EE0u;
    SET_GPR_U32(ctx, 31, 0x154EE8u);
    ctx->pc = 0x154EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EE0u;
    // 0x154ee4: 0xac40da48  sw          $zero, -0x25B8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957640), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x154EE0u, 0x154EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EE8u;
label_154ee8:
    // 0x154ee8: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x154ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x154eec: 0xc0558e0  jal         func_156380
    ctx->pc = 0x154EECu;
    SET_GPR_U32(ctx, 31, 0x154EF4u);
    ctx->pc = 0x154EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154EECu;
    // 0x154ef0: 0x24840dd0  addiu       $a0, $a0, 0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x154EECu, 0x154EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EF4u;
label_154ef4:
    // 0x154ef4: 0x1000020e  b           . + 4 + (0x20E << 2)
    ctx->pc = 0x154EF4u;
    {
        const bool branch_taken_0x154ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154ef4) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154EFCu;
    // 0x154efc: 0x0  nop
    ctx->pc = 0x154efcu;
    // NOP
label_154f00:
    // 0x154f00: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154f04: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154F04u;
    SET_GPR_U32(ctx, 31, 0x154F0Cu);
    ctx->pc = 0x154F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F04u;
    // 0x154f08: 0x2484b4e0  addiu       $a0, $a0, -0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154F04u, 0x154F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F0Cu;
label_154f0c:
    // 0x154f0c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154f10: 0x9043d9d0  lbu         $v1, -0x2630($v0)
    ctx->pc = 0x154f10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x154f14: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x154f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154f18: 0x10620205  beq         $v1, $v0, . + 4 + (0x205 << 2)
    ctx->pc = 0x154F18u;
    {
        const bool branch_taken_0x154f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F18u;
        // 0x154f1c: 0x64100002  daddiu      $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f18) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154F20u;
    // 0x154f20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154f24: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x154F24u;
    SET_GPR_U32(ctx, 31, 0x154F2Cu);
    ctx->pc = 0x154F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F24u;
    // 0x154f28: 0xac40da48  sw          $zero, -0x25B8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957640), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x154F24u, 0x154F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F2Cu;
label_154f2c:
    // 0x154f2c: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x154f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x154f30: 0xc0558e0  jal         func_156380
    ctx->pc = 0x154F30u;
    SET_GPR_U32(ctx, 31, 0x154F38u);
    ctx->pc = 0x154F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F30u;
    // 0x154f34: 0x24840dd0  addiu       $a0, $a0, 0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x154F30u, 0x154F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F38u;
label_154f38:
    // 0x154f38: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x154F38u;
    {
        const bool branch_taken_0x154f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154f38) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154F40u;
label_154f40:
    // 0x154f40: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x154f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x154f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154f48: 0x108301f9  beq         $a0, $v1, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x154F48u;
    {
        const bool branch_taken_0x154f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154f48) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154F50u;
    // 0x154f50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154f54: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x154F54u;
    {
        const bool branch_taken_0x154f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154f54) {
            ctx->pc = 0x154F98u;
            goto label_154f98;
        }
    }
    ctx->pc = 0x154F5Cu;
    // 0x154f5c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154f60: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154F60u;
    SET_GPR_U32(ctx, 31, 0x154F68u);
    ctx->pc = 0x154F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F60u;
    // 0x154f64: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154F60u, 0x154F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F68u;
label_154f68:
    // 0x154f68: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154f6c: 0x9043d9d0  lbu         $v1, -0x2630($v0)
    ctx->pc = 0x154f6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x154f70: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x154f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154f74: 0x106201ee  beq         $v1, $v0, . + 4 + (0x1EE << 2)
    ctx->pc = 0x154F74u;
    {
        const bool branch_taken_0x154f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F74u;
        // 0x154f78: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f74) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154F7Cu;
    // 0x154f7c: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x154F7Cu;
    SET_GPR_U32(ctx, 31, 0x154F84u);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x154F7Cu, 0x154F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F84u;
label_154f84:
    // 0x154f84: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x154f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x154f88: 0xc0558e0  jal         func_156380
    ctx->pc = 0x154F88u;
    SET_GPR_U32(ctx, 31, 0x154F90u);
    ctx->pc = 0x154F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F88u;
    // 0x154f8c: 0x24840130  addiu       $a0, $a0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x154F88u, 0x154F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F90u;
label_154f90:
    // 0x154f90: 0x100001e7  b           . + 4 + (0x1E7 << 2)
    ctx->pc = 0x154F90u;
    {
        const bool branch_taken_0x154f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154f90) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154F98u;
label_154f98:
    // 0x154f98: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154f9c: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154F9Cu;
    SET_GPR_U32(ctx, 31, 0x154FA4u);
    ctx->pc = 0x154FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F9Cu;
    // 0x154fa0: 0x2484b4e0  addiu       $a0, $a0, -0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154F9Cu, 0x154FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FA4u;
label_154fa4:
    // 0x154fa4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x154fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x154fa8: 0x9043d9d0  lbu         $v1, -0x2630($v0)
    ctx->pc = 0x154fa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x154fac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x154facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x154fb0: 0x106201df  beq         $v1, $v0, . + 4 + (0x1DF << 2)
    ctx->pc = 0x154FB0u;
    {
        const bool branch_taken_0x154fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x154FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FB0u;
        // 0x154fb4: 0x64100002  daddiu      $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fb0) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154FB8u;
    // 0x154fb8: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x154FB8u;
    SET_GPR_U32(ctx, 31, 0x154FC0u);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x154FB8u, 0x154FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FC0u;
label_154fc0:
    // 0x154fc0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x154fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x154fc4: 0xc0558e0  jal         func_156380
    ctx->pc = 0x154FC4u;
    SET_GPR_U32(ctx, 31, 0x154FCCu);
    ctx->pc = 0x154FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FC4u;
    // 0x154fc8: 0x24840130  addiu       $a0, $a0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x154FC4u, 0x154FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154FCCu;
label_154fcc:
    // 0x154fcc: 0x100001d8  b           . + 4 + (0x1D8 << 2)
    ctx->pc = 0x154FCCu;
    {
        const bool branch_taken_0x154fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154fcc) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154FD4u;
    // 0x154fd4: 0x0  nop
    ctx->pc = 0x154fd4u;
    // NOP
label_154fd8:
    // 0x154fd8: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x154fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x154fdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154fe0: 0x108301d3  beq         $a0, $v1, . + 4 + (0x1D3 << 2)
    ctx->pc = 0x154FE0u;
    {
        const bool branch_taken_0x154fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154fe0) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x154FE8u;
    // 0x154fe8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x154fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x154fec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154FECu;
    {
        const bool branch_taken_0x154fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154fec) {
            ctx->pc = 0x155008u;
            goto label_155008;
        }
    }
    ctx->pc = 0x154FF4u;
    // 0x154ff4: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x154ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x154ff8: 0xc0558d0  jal         func_156340
    ctx->pc = 0x154FF8u;
    SET_GPR_U32(ctx, 31, 0x155000u);
    ctx->pc = 0x154FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154FF8u;
    // 0x154ffc: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x154FF8u, 0x155000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155000u;
label_155000:
    // 0x155000: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x155000u;
    {
        const bool branch_taken_0x155000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155000u;
        // 0x155004: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155000) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155008u;
label_155008:
    // 0x155008: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x155008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x15500c: 0xc0558d0  jal         func_156340
    ctx->pc = 0x15500Cu;
    SET_GPR_U32(ctx, 31, 0x155014u);
    ctx->pc = 0x155010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15500Cu;
    // 0x155010: 0x2484b4e0  addiu       $a0, $a0, -0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x15500Cu, 0x155014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155014u;
label_155014:
    // 0x155014: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x155014u;
    {
        const bool branch_taken_0x155014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155014u;
        // 0x155018: 0x64100002  daddiu      $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155014) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x15501Cu;
    // 0x15501c: 0x0  nop
    ctx->pc = 0x15501cu;
    // NOP
label_155020:
    // 0x155020: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x155020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x155024: 0x108201c2  beq         $a0, $v0, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x155024u;
    {
        const bool branch_taken_0x155024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x155024) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x15502Cu;
    // 0x15502c: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x15502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x155030: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155030u;
    {
        const bool branch_taken_0x155030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x155030) {
            ctx->pc = 0x155040u;
            goto label_155040;
        }
    }
    ctx->pc = 0x155038u;
    // 0x155038: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x155038u;
    {
        const bool branch_taken_0x155038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155038) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155040u;
label_155040:
    // 0x155040: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155044: 0x9043dae0  lbu         $v1, -0x2520($v0)
    ctx->pc = 0x155044u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957792)));
    // 0x155048: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x15504c: 0x2484faf0  addiu       $a0, $a0, -0x510
    ctx->pc = 0x15504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966000));
    // 0x155050: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155054: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x155054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x155058: 0xc0558d0  jal         func_156340
    ctx->pc = 0x155058u;
    SET_GPR_U32(ctx, 31, 0x155060u);
    ctx->pc = 0x15505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155058u;
    // 0x15505c: 0xa043dae0  sb          $v1, -0x2520($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957792), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x155058u, 0x155060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155060u;
label_155060:
    // 0x155060: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155064: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x155064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x155068: 0x9042d9d0  lbu         $v0, -0x2630($v0)
    ctx->pc = 0x155068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x15506c: 0x104301b0  beq         $v0, $v1, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x15506Cu;
    {
        const bool branch_taken_0x15506c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15506c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155074u;
    // 0x155074: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x155074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x155078: 0xc0558e0  jal         func_156380
    ctx->pc = 0x155078u;
    SET_GPR_U32(ctx, 31, 0x155080u);
    ctx->pc = 0x15507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155078u;
    // 0x15507c: 0x2484b830  addiu       $a0, $a0, -0x47D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x155078u, 0x155080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155080u;
label_155080:
    // 0x155080: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x155080u;
    {
        const bool branch_taken_0x155080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155080) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155088u;
label_155088:
    // 0x155088: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x155088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15508c: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x15508Cu;
    {
        const bool branch_taken_0x15508c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x15508c) {
            ctx->pc = 0x1550B8u;
            goto label_1550b8;
        }
    }
    ctx->pc = 0x155094u;
    // 0x155094: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x155094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x155098: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x155098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x15509c: 0x90a7db10  lbu         $a3, -0x24F0($a1)
    ctx->pc = 0x15509cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294957840)));
    // 0x1550a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1550a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1550a4: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x1550a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x1550a8: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1550a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1550ac: 0x10a001a0  beqz        $a1, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x1550ACu;
    {
        const bool branch_taken_0x1550ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1550ac) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1550B4u;
    // 0x1550b4: 0x0  nop
    ctx->pc = 0x1550b4u;
    // NOP
label_1550b8:
    // 0x1550b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1550b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1550bc: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1550BCu;
    {
        const bool branch_taken_0x1550bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1550bc) {
            ctx->pc = 0x1550E8u;
            goto label_1550e8;
        }
    }
    ctx->pc = 0x1550C4u;
    // 0x1550c4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1550c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1550c8: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x1550c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1550cc: 0x90a7db10  lbu         $a3, -0x24F0($a1)
    ctx->pc = 0x1550ccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294957840)));
    // 0x1550d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1550d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1550d4: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x1550d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x1550d8: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1550d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1550dc: 0x10a00194  beqz        $a1, . + 4 + (0x194 << 2)
    ctx->pc = 0x1550DCu;
    {
        const bool branch_taken_0x1550dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1550dc) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1550E4u;
    // 0x1550e4: 0x0  nop
    ctx->pc = 0x1550e4u;
    // NOP
label_1550e8:
    // 0x1550e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1550e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1550ec: 0x14650012  bne         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1550ECu;
    {
        const bool branch_taken_0x1550ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1550ec) {
            ctx->pc = 0x155138u;
            goto label_155138;
        }
    }
    ctx->pc = 0x1550F4u;
    // 0x1550f4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1550f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1550f8: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x1550f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1550fc: 0x90a6db10  lbu         $a2, -0x24F0($a1)
    ctx->pc = 0x1550fcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294957840)));
    // 0x155100: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155104: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x155104u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x155108: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x155108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x15510c: 0x10a00188  beqz        $a1, . + 4 + (0x188 << 2)
    ctx->pc = 0x15510Cu;
    {
        const bool branch_taken_0x15510c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15510c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155114u;
    // 0x155114: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x155114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x155118: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x155118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15511c: 0x90a595c0  lbu         $a1, -0x6A40($a1)
    ctx->pc = 0x15511cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294940096)));
    // 0x155120: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x155120u;
    {
        const bool branch_taken_0x155120 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x155120) {
            ctx->pc = 0x155138u;
            goto label_155138;
        }
    }
    ctx->pc = 0x155128u;
    // 0x155128: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x155128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x15512c: 0x90a59730  lbu         $a1, -0x68D0($a1)
    ctx->pc = 0x15512cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294940464)));
    // 0x155130: 0x14a7017f  bne         $a1, $a3, . + 4 + (0x17F << 2)
    ctx->pc = 0x155130u;
    {
        const bool branch_taken_0x155130 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x155130) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155138u;
label_155138:
    // 0x155138: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x155138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15513c: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x15513Cu;
    {
        const bool branch_taken_0x15513c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x15513c) {
            ctx->pc = 0x155168u;
            goto label_155168;
        }
    }
    ctx->pc = 0x155144u;
    // 0x155144: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x155144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x155148: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x155148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x15514c: 0x90a7db10  lbu         $a3, -0x24F0($a1)
    ctx->pc = 0x15514cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294957840)));
    // 0x155150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155154: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x155154u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x155158: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x155158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x15515c: 0x10a00174  beqz        $a1, . + 4 + (0x174 << 2)
    ctx->pc = 0x15515Cu;
    {
        const bool branch_taken_0x15515c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15515c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155164u;
    // 0x155164: 0x0  nop
    ctx->pc = 0x155164u;
    // NOP
label_155168:
    // 0x155168: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x155168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15516c: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x15516Cu;
    {
        const bool branch_taken_0x15516c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x15516c) {
            ctx->pc = 0x155198u;
            goto label_155198;
        }
    }
    ctx->pc = 0x155174u;
    // 0x155174: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x155174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x155178: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x155178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x15517c: 0x9066db10  lbu         $a2, -0x24F0($v1)
    ctx->pc = 0x15517cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x155180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155184: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x155184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x155188: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x155188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x15518c: 0x10600168  beqz        $v1, . + 4 + (0x168 << 2)
    ctx->pc = 0x15518Cu;
    {
        const bool branch_taken_0x15518c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15518c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155194u;
    // 0x155194: 0x0  nop
    ctx->pc = 0x155194u;
    // NOP
label_155198:
    // 0x155198: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x155198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15519c: 0x2463fd00  addiu       $v1, $v1, -0x300
    ctx->pc = 0x15519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966528));
    // 0x1551a0: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x1551a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1551a4: 0x10200162  beqz        $at, . + 4 + (0x162 << 2)
    ctx->pc = 0x1551A4u;
    {
        const bool branch_taken_0x1551a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1551a4) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1551ACu;
    // 0x1551ac: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1551acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1551b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1551b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1551b4: 0x2484d1c0  addiu       $a0, $a0, -0x2E40
    ctx->pc = 0x1551b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955456));
    // 0x1551b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1551b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1551bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1551bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1551c0: 0x600008  jr          $v1
    ctx->pc = 0x1551C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1551C8u: goto label_1551c8;
            case 0x155268u: goto label_155268;
            case 0x155368u: goto label_155368;
            case 0x155570u: goto label_155570;
            case 0x155610u: goto label_155610;
            case 0x155660u: goto label_155660;
            case 0x1556B8u: goto label_1556b8;
            case 0x155730u: goto label_155730;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1551C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1551C8u;
label_1551c8:
    // 0x1551c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1551c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1551cc: 0x14430158  bne         $v0, $v1, . + 4 + (0x158 << 2)
    ctx->pc = 0x1551CCu;
    {
        const bool branch_taken_0x1551cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1551cc) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1551D4u;
    // 0x1551d4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1551d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1551d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1551d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1551dc: 0x629004  sllv        $s2, $v0, $v1
    ctx->pc = 0x1551dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1551e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1551e4: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x1551e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x1551e8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1551e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x1551ec: 0x14400150  bnez        $v0, . + 4 + (0x150 << 2)
    ctx->pc = 0x1551ECu;
    {
        const bool branch_taken_0x1551ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1551ec) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1551F4u;
    // 0x1551f4: 0xc0555e0  jal         func_155780
    ctx->pc = 0x1551F4u;
    SET_GPR_U32(ctx, 31, 0x1551FCu);
    ctx->pc = 0x1551F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551F4u;
    // 0x1551f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155780u, 0x1551F4u, 0x1551FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551FCu;
label_1551fc:
    // 0x1551fc: 0xc06821c  jal         func_1A0870
    ctx->pc = 0x1551FCu;
    SET_GPR_U32(ctx, 31, 0x155204u);
    ctx->pc = 0x155200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551FCu;
    // 0x155200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0870u, 0x1551FCu, 0x155204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155204u;
label_155204:
    // 0x155204: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155208: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x155208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x15520c: 0xa040daf8  sb          $zero, -0x2508($v0)
    ctx->pc = 0x15520cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957816), (uint8_t)GPR_U32(ctx, 0));
    // 0x155210: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x155210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x155214: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155218: 0x24843980  addiu       $a0, $a0, 0x3980
    ctx->pc = 0x155218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
    // 0x15521c: 0x9043daf8  lbu         $v1, -0x2508($v0)
    ctx->pc = 0x15521cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957816)));
    // 0x155220: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155224: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x155224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x155228: 0xc0558d0  jal         func_156340
    ctx->pc = 0x155228u;
    SET_GPR_U32(ctx, 31, 0x155230u);
    ctx->pc = 0x15522Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155228u;
    // 0x15522c: 0xa043daf8  sb          $v1, -0x2508($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957816), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x155228u, 0x155230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155230u;
label_155230:
    // 0x155230: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155234: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x155234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x155238: 0x9042d9d0  lbu         $v0, -0x2630($v0)
    ctx->pc = 0x155238u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x15523c: 0x1043013c  beq         $v0, $v1, . + 4 + (0x13C << 2)
    ctx->pc = 0x15523Cu;
    {
        const bool branch_taken_0x15523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15523c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155244u;
    // 0x155244: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155248: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x155248u;
    SET_GPR_U32(ctx, 31, 0x155250u);
    ctx->pc = 0x15524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155248u;
    // 0x15524c: 0xac40da48  sw          $zero, -0x25B8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957640), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x155248u, 0x155250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155250u;
label_155250:
    // 0x155250: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x155250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x155254: 0xc0558e0  jal         func_156380
    ctx->pc = 0x155254u;
    SET_GPR_U32(ctx, 31, 0x15525Cu);
    ctx->pc = 0x155258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155254u;
    // 0x155258: 0x248495b0  addiu       $a0, $a0, -0x6A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x155254u, 0x15525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15525Cu;
label_15525c:
    // 0x15525c: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x15525Cu;
    {
        const bool branch_taken_0x15525c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15525c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155264u;
    // 0x155264: 0x0  nop
    ctx->pc = 0x155264u;
    // NOP
label_155268:
    // 0x155268: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x155268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15526c: 0x14430130  bne         $v0, $v1, . + 4 + (0x130 << 2)
    ctx->pc = 0x15526Cu;
    {
        const bool branch_taken_0x15526c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15526c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155274u;
    // 0x155274: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x155274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x155278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15527c: 0x629004  sllv        $s2, $v0, $v1
    ctx->pc = 0x15527cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x155280: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155284: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x155284u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x155288: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x155288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x15528c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15528Cu;
    {
        const bool branch_taken_0x15528c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15528c) {
            ctx->pc = 0x155318u;
            goto label_155318;
        }
    }
    ctx->pc = 0x155294u;
    // 0x155294: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x155294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x155298: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x155298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15529c: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x15529Cu;
    SET_GPR_U32(ctx, 31, 0x1552A4u);
    ctx->pc = 0x1552A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15529Cu;
    // 0x1552a0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x15529Cu, 0x1552A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552A4u;
label_1552a4:
    // 0x1552a4: 0xc0555e0  jal         func_155780
    ctx->pc = 0x1552A4u;
    SET_GPR_U32(ctx, 31, 0x1552ACu);
    ctx->pc = 0x1552A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552A4u;
    // 0x1552a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155780u, 0x1552A4u, 0x1552ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552ACu;
label_1552ac:
    // 0x1552ac: 0xc06821c  jal         func_1A0870
    ctx->pc = 0x1552ACu;
    SET_GPR_U32(ctx, 31, 0x1552B4u);
    ctx->pc = 0x1552B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552ACu;
    // 0x1552b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0870u, 0x1552ACu, 0x1552B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552B4u;
label_1552b4:
    // 0x1552b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1552b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1552b8: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x1552b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x1552bc: 0xa040daf8  sb          $zero, -0x2508($v0)
    ctx->pc = 0x1552bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957816), (uint8_t)GPR_U32(ctx, 0));
    // 0x1552c0: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1552c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1552c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1552c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1552c8: 0x24843980  addiu       $a0, $a0, 0x3980
    ctx->pc = 0x1552c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
    // 0x1552cc: 0x9043daf8  lbu         $v1, -0x2508($v0)
    ctx->pc = 0x1552ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957816)));
    // 0x1552d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1552d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1552d4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1552d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1552d8: 0xc0558d0  jal         func_156340
    ctx->pc = 0x1552D8u;
    SET_GPR_U32(ctx, 31, 0x1552E0u);
    ctx->pc = 0x1552DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552D8u;
    // 0x1552dc: 0xa043daf8  sb          $v1, -0x2508($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957816), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x1552D8u, 0x1552E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552E0u;
label_1552e0:
    // 0x1552e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1552e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1552e4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1552e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1552e8: 0x9042d9d0  lbu         $v0, -0x2630($v0)
    ctx->pc = 0x1552e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x1552ec: 0x10430110  beq         $v0, $v1, . + 4 + (0x110 << 2)
    ctx->pc = 0x1552ECu;
    {
        const bool branch_taken_0x1552ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1552ec) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1552F4u;
    // 0x1552f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1552f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1552f8: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x1552F8u;
    SET_GPR_U32(ctx, 31, 0x155300u);
    ctx->pc = 0x1552FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552F8u;
    // 0x1552fc: 0xac40da48  sw          $zero, -0x25B8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957640), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x1552F8u, 0x155300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155300u;
label_155300:
    // 0x155300: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x155300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x155304: 0xc0558e0  jal         func_156380
    ctx->pc = 0x155304u;
    SET_GPR_U32(ctx, 31, 0x15530Cu);
    ctx->pc = 0x155308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155304u;
    // 0x155308: 0x24840dd0  addiu       $a0, $a0, 0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x155304u, 0x15530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15530Cu;
label_15530c:
    // 0x15530c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x15530Cu;
    {
        const bool branch_taken_0x15530c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15530c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155314u;
    // 0x155314: 0x0  nop
    ctx->pc = 0x155314u;
    // NOP
label_155318:
    // 0x155318: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15531c: 0x9043d9d0  lbu         $v1, -0x2630($v0)
    ctx->pc = 0x15531cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x155320: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x155320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x155324: 0x10620102  beq         $v1, $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x155324u;
    {
        const bool branch_taken_0x155324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155324) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x15532Cu;
    // 0x15532c: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x15532cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x155330: 0x8c43d918  lw          $v1, -0x26E8($v0)
    ctx->pc = 0x155330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
    // 0x155334: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x155334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x155338: 0x104000fd  beqz        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x155338u;
    {
        const bool branch_taken_0x155338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155338) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155340u;
    // 0x155340: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x155340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x155344: 0x34420180  ori         $v0, $v0, 0x180
    ctx->pc = 0x155344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
    // 0x155348: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15534c: 0x144000f8  bnez        $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x15534Cu;
    {
        const bool branch_taken_0x15534c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15534c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155354u;
    // 0x155354: 0xc0c1534  jal         func_3054D0
    ctx->pc = 0x155354u;
    SET_GPR_U32(ctx, 31, 0x15535Cu);
    ctx->pc = 0x3054D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3054D0u, 0x155354u, 0x15535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15535Cu;
label_15535c:
    // 0x15535c: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x15535Cu;
    {
        const bool branch_taken_0x15535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15535c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155364u;
    // 0x155364: 0x0  nop
    ctx->pc = 0x155364u;
    // NOP
label_155368:
    // 0x155368: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x155368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15536c: 0x144300f0  bne         $v0, $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x15536Cu;
    {
        const bool branch_taken_0x15536c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15536c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155374u;
    // 0x155374: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155378: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x155378u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x15537c: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x15537cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x155380: 0x102000eb  beqz        $at, . + 4 + (0xEB << 2)
    ctx->pc = 0x155380u;
    {
        const bool branch_taken_0x155380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x155380) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155388u;
    // 0x155388: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x155388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x15538c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15538cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155390: 0x2463d170  addiu       $v1, $v1, -0x2E90
    ctx->pc = 0x155390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955376));
    // 0x155394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155398: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x155398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15539c: 0x400008  jr          $v0
    ctx->pc = 0x15539Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1553A8u: goto label_1553a8;
            case 0x155440u: goto label_155440;
            case 0x1554D8u: goto label_1554d8;
            case 0x155730u: goto label_155730;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15539Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1553A4u;
    // 0x1553a4: 0x0  nop
    ctx->pc = 0x1553a4u;
    // NOP
label_1553a8:
    // 0x1553a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1553a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1553ac: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x1553acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x1553b0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x1553b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1553b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1553b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1553b8: 0x839004  sllv        $s2, $v1, $a0
    ctx->pc = 0x1553b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1553bc: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1553bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x1553c0: 0x144000db  bnez        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x1553C0u;
    {
        const bool branch_taken_0x1553c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1553c0) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1553C8u;
    // 0x1553c8: 0xc0555e0  jal         func_155780
    ctx->pc = 0x1553C8u;
    SET_GPR_U32(ctx, 31, 0x1553D0u);
    ctx->pc = 0x1553CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553C8u;
    // 0x1553cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155780u, 0x1553C8u, 0x1553D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553D0u;
label_1553d0:
    // 0x1553d0: 0xc06821c  jal         func_1A0870
    ctx->pc = 0x1553D0u;
    SET_GPR_U32(ctx, 31, 0x1553D8u);
    ctx->pc = 0x1553D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553D0u;
    // 0x1553d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0870u, 0x1553D0u, 0x1553D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553D8u;
label_1553d8:
    // 0x1553d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1553d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1553dc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1553dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1553e0: 0xa040daf8  sb          $zero, -0x2508($v0)
    ctx->pc = 0x1553e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957816), (uint8_t)GPR_U32(ctx, 0));
    // 0x1553e4: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x1553e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1553e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1553e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1553ec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1553ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1553f0: 0x9045daf8  lbu         $a1, -0x2508($v0)
    ctx->pc = 0x1553f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957816)));
    // 0x1553f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1553f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1553f8: 0xa044da08  sb          $a0, -0x25F8($v0)
    ctx->pc = 0x1553f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 4));
    // 0x1553fc: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x1553fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x155400: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x155400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x155404: 0x24843980  addiu       $a0, $a0, 0x3980
    ctx->pc = 0x155404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
    // 0x155408: 0xc0558d0  jal         func_156340
    ctx->pc = 0x155408u;
    SET_GPR_U32(ctx, 31, 0x155410u);
    ctx->pc = 0x15540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155408u;
    // 0x15540c: 0xa062daf8  sb          $v0, -0x2508($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957816), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x155408u, 0x155410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155410u;
label_155410:
    // 0x155410: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155414: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x155414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x155418: 0x9042d9d0  lbu         $v0, -0x2630($v0)
    ctx->pc = 0x155418u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x15541c: 0x104300c4  beq         $v0, $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x15541Cu;
    {
        const bool branch_taken_0x15541c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15541c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155424u;
    // 0x155424: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x155424u;
    SET_GPR_U32(ctx, 31, 0x15542Cu);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x155424u, 0x15542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15542Cu;
label_15542c:
    // 0x15542c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x15542cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x155430: 0xc0558e0  jal         func_156380
    ctx->pc = 0x155430u;
    SET_GPR_U32(ctx, 31, 0x155438u);
    ctx->pc = 0x155434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155430u;
    // 0x155434: 0x24849560  addiu       $a0, $a0, -0x6AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x155430u, 0x155438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155438u;
label_155438:
    // 0x155438: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x155438u;
    {
        const bool branch_taken_0x155438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155438) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155440u;
label_155440:
    // 0x155440: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155444: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x155444u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x155448: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x155448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x15544c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15544cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155450: 0x839004  sllv        $s2, $v1, $a0
    ctx->pc = 0x155450u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x155454: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x155454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x155458: 0x144000b5  bnez        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x155458u;
    {
        const bool branch_taken_0x155458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155458) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155460u;
    // 0x155460: 0xc0555e0  jal         func_155780
    ctx->pc = 0x155460u;
    SET_GPR_U32(ctx, 31, 0x155468u);
    ctx->pc = 0x155464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155460u;
    // 0x155464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155780u, 0x155460u, 0x155468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155468u;
label_155468:
    // 0x155468: 0xc06821c  jal         func_1A0870
    ctx->pc = 0x155468u;
    SET_GPR_U32(ctx, 31, 0x155470u);
    ctx->pc = 0x15546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155468u;
    // 0x15546c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0870u, 0x155468u, 0x155470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155470u;
label_155470:
    // 0x155470: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155474: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x155474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x155478: 0xa040daf8  sb          $zero, -0x2508($v0)
    ctx->pc = 0x155478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957816), (uint8_t)GPR_U32(ctx, 0));
    // 0x15547c: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x15547cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x155480: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155484: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x155484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x155488: 0x9045daf8  lbu         $a1, -0x2508($v0)
    ctx->pc = 0x155488u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957816)));
    // 0x15548c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15548cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155490: 0xa044da08  sb          $a0, -0x25F8($v0)
    ctx->pc = 0x155490u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 4));
    // 0x155494: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x155494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x155498: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x155498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x15549c: 0x24843980  addiu       $a0, $a0, 0x3980
    ctx->pc = 0x15549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
    // 0x1554a0: 0xc0558d0  jal         func_156340
    ctx->pc = 0x1554A0u;
    SET_GPR_U32(ctx, 31, 0x1554A8u);
    ctx->pc = 0x1554A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1554A0u;
    // 0x1554a4: 0xa062daf8  sb          $v0, -0x2508($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957816), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x1554A0u, 0x1554A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554A8u;
label_1554a8:
    // 0x1554a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1554a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1554ac: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1554acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1554b0: 0x9042d9d0  lbu         $v0, -0x2630($v0)
    ctx->pc = 0x1554b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x1554b4: 0x1043009e  beq         $v0, $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x1554B4u;
    {
        const bool branch_taken_0x1554b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1554b4) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1554BCu;
    // 0x1554bc: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x1554BCu;
    SET_GPR_U32(ctx, 31, 0x1554C4u);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x1554BCu, 0x1554C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554C4u;
label_1554c4:
    // 0x1554c4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1554c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1554c8: 0xc0558e0  jal         func_156380
    ctx->pc = 0x1554C8u;
    SET_GPR_U32(ctx, 31, 0x1554D0u);
    ctx->pc = 0x1554CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1554C8u;
    // 0x1554cc: 0x24849310  addiu       $a0, $a0, -0x6CF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x1554C8u, 0x1554D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554D0u;
label_1554d0:
    // 0x1554d0: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1554D0u;
    {
        const bool branch_taken_0x1554d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1554d0) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1554D8u;
label_1554d8:
    // 0x1554d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1554d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1554dc: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x1554dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x1554e0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x1554e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1554e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1554e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1554e8: 0x839004  sllv        $s2, $v1, $a0
    ctx->pc = 0x1554e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1554ec: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1554ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x1554f0: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x1554F0u;
    {
        const bool branch_taken_0x1554f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1554f0) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1554F8u;
    // 0x1554f8: 0xc0555e0  jal         func_155780
    ctx->pc = 0x1554F8u;
    SET_GPR_U32(ctx, 31, 0x155500u);
    ctx->pc = 0x1554FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1554F8u;
    // 0x1554fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155780u, 0x1554F8u, 0x155500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155500u;
label_155500:
    // 0x155500: 0xc06821c  jal         func_1A0870
    ctx->pc = 0x155500u;
    SET_GPR_U32(ctx, 31, 0x155508u);
    ctx->pc = 0x155504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155500u;
    // 0x155504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0870u, 0x155500u, 0x155508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155508u;
label_155508:
    // 0x155508: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15550c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x15550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x155510: 0xa040daf8  sb          $zero, -0x2508($v0)
    ctx->pc = 0x155510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957816), (uint8_t)GPR_U32(ctx, 0));
    // 0x155514: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x155514u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x155518: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15551c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15551cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x155520: 0x9045daf8  lbu         $a1, -0x2508($v0)
    ctx->pc = 0x155520u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957816)));
    // 0x155524: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155528: 0xa044da08  sb          $a0, -0x25F8($v0)
    ctx->pc = 0x155528u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957576), (uint8_t)GPR_U32(ctx, 4));
    // 0x15552c: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x15552cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x155530: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x155530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x155534: 0x24843980  addiu       $a0, $a0, 0x3980
    ctx->pc = 0x155534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
    // 0x155538: 0xc0558d0  jal         func_156340
    ctx->pc = 0x155538u;
    SET_GPR_U32(ctx, 31, 0x155540u);
    ctx->pc = 0x15553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155538u;
    // 0x15553c: 0xa062daf8  sb          $v0, -0x2508($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957816), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x155538u, 0x155540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155540u;
label_155540:
    // 0x155540: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155544: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x155544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x155548: 0x9042d9d0  lbu         $v0, -0x2630($v0)
    ctx->pc = 0x155548u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x15554c: 0x10430078  beq         $v0, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x15554Cu;
    {
        const bool branch_taken_0x15554c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15554c) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155554u;
    // 0x155554: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x155554u;
    SET_GPR_U32(ctx, 31, 0x15555Cu);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x155554u, 0x15555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15555Cu;
label_15555c:
    // 0x15555c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x15555cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x155560: 0xc0558e0  jal         func_156380
    ctx->pc = 0x155560u;
    SET_GPR_U32(ctx, 31, 0x155568u);
    ctx->pc = 0x155564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155560u;
    // 0x155564: 0x2484b3d0  addiu       $a0, $a0, -0x4C30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x155560u, 0x155568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155568u;
label_155568:
    // 0x155568: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x155568u;
    {
        const bool branch_taken_0x155568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155568) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155570u;
label_155570:
    // 0x155570: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x155570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x155574: 0x1443006e  bne         $v0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x155574u;
    {
        const bool branch_taken_0x155574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x155574) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x15557Cu;
    // 0x15557c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x15557cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x155580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155584: 0x629004  sllv        $s2, $v0, $v1
    ctx->pc = 0x155584u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x155588: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15558c: 0x9042db10  lbu         $v0, -0x24F0($v0)
    ctx->pc = 0x15558cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x155590: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x155590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x155594: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x155594u;
    {
        const bool branch_taken_0x155594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155594) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x15559Cu;
    // 0x15559c: 0xc0555e0  jal         func_155780
    ctx->pc = 0x15559Cu;
    SET_GPR_U32(ctx, 31, 0x1555A4u);
    ctx->pc = 0x1555A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15559Cu;
    // 0x1555a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155780u, 0x15559Cu, 0x1555A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555A4u;
label_1555a4:
    // 0x1555a4: 0xc06821c  jal         func_1A0870
    ctx->pc = 0x1555A4u;
    SET_GPR_U32(ctx, 31, 0x1555ACu);
    ctx->pc = 0x1555A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555A4u;
    // 0x1555a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0870u, 0x1555A4u, 0x1555ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555ACu;
label_1555ac:
    // 0x1555ac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1555acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1555b0: 0x3c040019  lui         $a0, 0x19
    ctx->pc = 0x1555b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    // 0x1555b4: 0xac40da48  sw          $zero, -0x25B8($v0)
    ctx->pc = 0x1555b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957640), GPR_U32(ctx, 0));
    // 0x1555b8: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1555b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1555bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1555bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1555c0: 0x24843980  addiu       $a0, $a0, 0x3980
    ctx->pc = 0x1555c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
    // 0x1555c4: 0xa040daf8  sb          $zero, -0x2508($v0)
    ctx->pc = 0x1555c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957816), (uint8_t)GPR_U32(ctx, 0));
    // 0x1555c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1555c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1555cc: 0x9043daf8  lbu         $v1, -0x2508($v0)
    ctx->pc = 0x1555ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957816)));
    // 0x1555d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1555d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1555d4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1555d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1555d8: 0xc0558d0  jal         func_156340
    ctx->pc = 0x1555D8u;
    SET_GPR_U32(ctx, 31, 0x1555E0u);
    ctx->pc = 0x1555DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555D8u;
    // 0x1555dc: 0xa043daf8  sb          $v1, -0x2508($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957816), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x1555D8u, 0x1555E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555E0u;
label_1555e0:
    // 0x1555e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1555e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1555e4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1555e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1555e8: 0x9042d9d0  lbu         $v0, -0x2630($v0)
    ctx->pc = 0x1555e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x1555ec: 0x10430050  beq         $v0, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1555ECu;
    {
        const bool branch_taken_0x1555ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1555ec) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1555F4u;
    // 0x1555f4: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x1555F4u;
    SET_GPR_U32(ctx, 31, 0x1555FCu);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x1555F4u, 0x1555FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555FCu;
label_1555fc:
    // 0x1555fc: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x1555fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x155600: 0xc0558e0  jal         func_156380
    ctx->pc = 0x155600u;
    SET_GPR_U32(ctx, 31, 0x155608u);
    ctx->pc = 0x155604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155600u;
    // 0x155604: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x155600u, 0x155608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155608u;
label_155608:
    // 0x155608: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x155608u;
    {
        const bool branch_taken_0x155608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155608) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x155610u;
label_155610:
    // 0x155610: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x155610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x155614: 0x14430046  bne         $v0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x155614u;
    {
        const bool branch_taken_0x155614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x155614) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x15561Cu;
    // 0x15561c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155620: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x155620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x155624: 0x9044db10  lbu         $a0, -0x24F0($v0)
    ctx->pc = 0x155624u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x155628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15562c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x15562cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x155630: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x155630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x155634: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x155634u;
    {
        const bool branch_taken_0x155634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155634) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x15563Cu;
    // 0x15563c: 0xc0555e0  jal         func_155780
    ctx->pc = 0x15563Cu;
    SET_GPR_U32(ctx, 31, 0x155644u);
    ctx->pc = 0x155640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15563Cu;
    // 0x155640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155780u, 0x15563Cu, 0x155644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155644u;
label_155644:
    // 0x155644: 0xc06821c  jal         func_1A0870
    ctx->pc = 0x155644u;
    SET_GPR_U32(ctx, 31, 0x15564Cu);
    ctx->pc = 0x155648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155644u;
    // 0x155648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0870u, 0x155644u, 0x15564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15564Cu;
label_15564c:
    // 0x15564c: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x15564Cu;
    SET_GPR_U32(ctx, 31, 0x155654u);
    ctx->pc = 0x1A0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D40u, 0x15564Cu, 0x155654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155654u;
label_155654:
    // 0x155654: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x155654u;
    {
        const bool branch_taken_0x155654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155654) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x15565Cu;
    // 0x15565c: 0x0  nop
    ctx->pc = 0x15565cu;
    // NOP
label_155660:
    // 0x155660: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x155660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x155664: 0x14430032  bne         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x155664u;
    {
        const bool branch_taken_0x155664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x155664) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x15566Cu;
    // 0x15566c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15566cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x155670: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x155670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x155674: 0x9044db10  lbu         $a0, -0x24F0($v0)
    ctx->pc = 0x155674u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x155678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15567c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x15567cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x155680: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x155680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x155684: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x155684u;
    {
        const bool branch_taken_0x155684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155684) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x15568Cu;
    // 0x15568c: 0xc0555e0  jal         func_155780
    ctx->pc = 0x15568Cu;
    SET_GPR_U32(ctx, 31, 0x155694u);
    ctx->pc = 0x155690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15568Cu;
    // 0x155690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155780u, 0x15568Cu, 0x155694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155694u;
label_155694:
    // 0x155694: 0xc06821c  jal         func_1A0870
    ctx->pc = 0x155694u;
    SET_GPR_U32(ctx, 31, 0x15569Cu);
    ctx->pc = 0x155698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155694u;
    // 0x155698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0870u, 0x155694u, 0x15569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15569Cu;
label_15569c:
    // 0x15569c: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x15569Cu;
    SET_GPR_U32(ctx, 31, 0x1556A4u);
    ctx->pc = 0x1A0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D40u, 0x15569Cu, 0x1556A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556A4u;
label_1556a4:
    // 0x1556a4: 0xc04c200  jal         func_130800
    ctx->pc = 0x1556A4u;
    SET_GPR_U32(ctx, 31, 0x1556ACu);
    ctx->pc = 0x130800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130800u, 0x1556A4u, 0x1556ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556ACu;
label_1556ac:
    // 0x1556ac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1556ACu;
    {
        const bool branch_taken_0x1556ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556ac) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1556B4u;
    // 0x1556b4: 0x0  nop
    ctx->pc = 0x1556b4u;
    // NOP
label_1556b8:
    // 0x1556b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1556b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1556bc: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1556BCu;
    {
        const bool branch_taken_0x1556bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1556bc) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1556C4u;
    // 0x1556c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1556c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1556c8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1556c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1556cc: 0x9044db10  lbu         $a0, -0x24F0($v0)
    ctx->pc = 0x1556ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x1556d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1556d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1556d4: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x1556d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1556d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1556d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1556dc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1556DCu;
    {
        const bool branch_taken_0x1556dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1556dc) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x1556E4u;
    // 0x1556e4: 0xc0555e0  jal         func_155780
    ctx->pc = 0x1556E4u;
    SET_GPR_U32(ctx, 31, 0x1556ECu);
    ctx->pc = 0x1556E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1556E4u;
    // 0x1556e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155780u, 0x1556E4u, 0x1556ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556ECu;
label_1556ec:
    // 0x1556ec: 0xc06821c  jal         func_1A0870
    ctx->pc = 0x1556ECu;
    SET_GPR_U32(ctx, 31, 0x1556F4u);
    ctx->pc = 0x1556F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1556ECu;
    // 0x1556f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0870u, 0x1556ECu, 0x1556F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556F4u;
label_1556f4:
    // 0x1556f4: 0xc06822c  jal         func_1A08B0
    ctx->pc = 0x1556F4u;
    SET_GPR_U32(ctx, 31, 0x1556FCu);
    ctx->pc = 0x1556F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1556F4u;
    // 0x1556f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A08B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A08B0u, 0x1556F4u, 0x1556FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556FCu;
label_1556fc:
    // 0x1556fc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1556fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x155700: 0xc0558d0  jal         func_156340
    ctx->pc = 0x155700u;
    SET_GPR_U32(ctx, 31, 0x155708u);
    ctx->pc = 0x155704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155700u;
    // 0x155704: 0x24840b20  addiu       $a0, $a0, 0xB20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x155700u, 0x155708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155708u;
label_155708:
    // 0x155708: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15570c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x15570cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x155710: 0x9042d9d0  lbu         $v0, -0x2630($v0)
    ctx->pc = 0x155710u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
    // 0x155714: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x155714u;
    {
        const bool branch_taken_0x155714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x155714) {
            ctx->pc = 0x155730u;
            goto label_155730;
        }
    }
    ctx->pc = 0x15571Cu;
    // 0x15571c: 0xc06833c  jal         func_1A0CF0
    ctx->pc = 0x15571Cu;
    SET_GPR_U32(ctx, 31, 0x155724u);
    ctx->pc = 0x1A0CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CF0u, 0x15571Cu, 0x155724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155724u;
label_155724:
    // 0x155724: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x155724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x155728: 0xc0558e0  jal         func_156380
    ctx->pc = 0x155728u;
    SET_GPR_U32(ctx, 31, 0x155730u);
    ctx->pc = 0x15572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155728u;
    // 0x15572c: 0x24840ae0  addiu       $a0, $a0, 0xAE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x155728u, 0x155730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155730u;
label_155730:
    // 0x155730: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x155730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x155734: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x155734u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155738: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x155738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15573c: 0x9042daa0  lbu         $v0, -0x2560($v0)
    ctx->pc = 0x15573cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x155740: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x155740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155744: 0x1440fce4  bnez        $v0, . + 4 + (-0x31C << 2)
    ctx->pc = 0x155744u;
    {
        const bool branch_taken_0x155744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155744) {
            ctx->pc = 0x154AD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154ad8;
        }
    }
    ctx->pc = 0x15574Cu;
    // 0x15574c: 0x0  nop
    ctx->pc = 0x15574cu;
    // NOP
label_155750:
    // 0x155750: 0xc068240  jal         func_1A0900
    ctx->pc = 0x155750u;
    SET_GPR_U32(ctx, 31, 0x155758u);
    ctx->pc = 0x1A0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0900u, 0x155750u, 0x155758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155758u;
label_155758:
    // 0x155758: 0xc0681e4  jal         func_1A0790
    ctx->pc = 0x155758u;
    SET_GPR_U32(ctx, 31, 0x155760u);
    ctx->pc = 0x1A0790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0790u, 0x155758u, 0x155760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155760u;
label_155760:
    // 0x155760: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x155760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_155764:
    // 0x155764: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15576c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15576cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155770: 0x3e00008  jr          $ra
    ctx->pc = 0x155770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155770u;
        // 0x155774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155778u;
    // 0x155778: 0x0  nop
    ctx->pc = 0x155778u;
    // NOP
    // 0x15577c: 0x0  nop
    ctx->pc = 0x15577cu;
    // NOP
    if (ctx->pc == 0x15577cu) { ctx->pc = 0x155780u; }
}
