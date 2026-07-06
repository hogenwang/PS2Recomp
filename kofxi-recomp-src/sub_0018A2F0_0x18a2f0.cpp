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

// Function: sub_0018A2F0
// Address: 0x18a2f0 - 0x18a490
void sub_0018A2F0_0x18a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A2F0_0x18a2f0");
#endif

    switch (ctx->pc) {
        case 0x18a340u: goto label_18a340;
        case 0x18a460u: goto label_18a460;
        default: break;
    }

    ctx->pc = 0x18a2f0u;

    // 0x18a2f0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18a2f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18a2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a2f8: 0x9064daa0  lbu         $a0, -0x2560($v1)
    ctx->pc = 0x18a2f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x18a2fc: 0x18800062  blez        $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x18A2FCu;
    {
        const bool branch_taken_0x18a2fc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x18A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2FCu;
        // 0x18a300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2fc) {
            ctx->pc = 0x18A488u;
            goto label_18a488;
        }
    }
    ctx->pc = 0x18A304u;
    // 0x18a304: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x18a304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18a308: 0x14200049  bnez        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x18A308u;
    {
        const bool branch_taken_0x18a308 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A308u;
        // 0x18a30c: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a308) {
            ctx->pc = 0x18A430u;
            goto label_18a430;
        }
    }
    ctx->pc = 0x18A310u;
    // 0x18a310: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A310u;
    {
        const bool branch_taken_0x18a310 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A310u;
        // 0x18a314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a310) {
            ctx->pc = 0x18A330u;
            goto label_18a330;
        }
    }
    ctx->pc = 0x18A318u;
    // 0x18a318: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x18a318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x18a31c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x18a31cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x18a320: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x18a320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x18a324: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A324u;
    {
        const bool branch_taken_0x18a324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a324) {
            ctx->pc = 0x18A330u;
            goto label_18a330;
        }
    }
    ctx->pc = 0x18A32Cu;
    // 0x18a32c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a330:
    // 0x18a330: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x18A330u;
    {
        const bool branch_taken_0x18a330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a330) {
            ctx->pc = 0x18A430u;
            goto label_18a430;
        }
    }
    ctx->pc = 0x18A338u;
    // 0x18a338: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x18a338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x18a33c: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x18a33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
label_18a340:
    // 0x18a340: 0x90a80006  lbu         $t0, 0x6($a1)
    ctx->pc = 0x18a340u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x18a344: 0x24cb0001  addiu       $t3, $a2, 0x1
    ctx->pc = 0x18a344u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18a348: 0x90ac024e  lbu         $t4, 0x24E($a1)
    ctx->pc = 0x18a348u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 590)));
    // 0x18a34c: 0x24c90002  addiu       $t1, $a2, 0x2
    ctx->pc = 0x18a34cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x18a350: 0x90aa0496  lbu         $t2, 0x496($a1)
    ctx->pc = 0x18a350u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1174)));
    // 0x18a354: 0x24c70003  addiu       $a3, $a2, 0x3
    ctx->pc = 0x18a354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x18a358: 0x310d0001  andi        $t5, $t0, 0x1
    ctx->pc = 0x18a358u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x18a35c: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x18a35cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x18a360: 0xcd6804  sllv        $t5, $t5, $a2
    ctx->pc = 0x18a360u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 6) & 0x1F));
    // 0x18a364: 0x16c5804  sllv        $t3, $t4, $t3
    ctx->pc = 0x18a364u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 11) & 0x1F));
    // 0x18a368: 0x90a806de  lbu         $t0, 0x6DE($a1)
    ctx->pc = 0x18a368u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1758)));
    // 0x18a36c: 0x31ac00ff  andi        $t4, $t5, 0xFF
    ctx->pc = 0x18a36cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
    // 0x18a370: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x18a370u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x18a374: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x18a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x18a378: 0x304c00ff  andi        $t4, $v0, 0xFF
    ctx->pc = 0x18a378u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a37c: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x18a37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x18a380: 0x1221004  sllv        $v0, $v0, $t1
    ctx->pc = 0x18a380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 9) & 0x1F));
    // 0x18a384: 0x18b5025  or          $t2, $t4, $t3
    ctx->pc = 0x18a384u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x18a388: 0x314900ff  andi        $t1, $t2, 0xFF
    ctx->pc = 0x18a388u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x18a38c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a390: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x18a390u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x18a394: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x18a394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x18a398: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x18a398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x18a39c: 0x312800ff  andi        $t0, $t1, 0xFF
    ctx->pc = 0x18a39cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x18a3a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a3a4: 0x90a70926  lbu         $a3, 0x926($a1)
    ctx->pc = 0x18a3a4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2342)));
    // 0x18a3a8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x18a3a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18a3ac: 0x310a00ff  andi        $t2, $t0, 0xFF
    ctx->pc = 0x18a3acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x18a3b0: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x18a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x18a3b4: 0x30e90001  andi        $t1, $a3, 0x1
    ctx->pc = 0x18a3b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x18a3b8: 0x90a80b6e  lbu         $t0, 0xB6E($a1)
    ctx->pc = 0x18a3b8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2926)));
    // 0x18a3bc: 0x494804  sllv        $t1, $t1, $v0
    ctx->pc = 0x18a3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x18a3c0: 0x24c70005  addiu       $a3, $a2, 0x5
    ctx->pc = 0x18a3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x18a3c4: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x18a3c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x18a3c8: 0x90a20db6  lbu         $v0, 0xDB6($a1)
    ctx->pc = 0x18a3c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3510)));
    // 0x18a3cc: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x18a3ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x18a3d0: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x18a3d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x18a3d4: 0xe83804  sllv        $a3, $t0, $a3
    ctx->pc = 0x18a3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 7) & 0x1F));
    // 0x18a3d8: 0x312800ff  andi        $t0, $t1, 0xFF
    ctx->pc = 0x18a3d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x18a3dc: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x18a3dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18a3e0: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x18a3e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x18a3e4: 0x30470001  andi        $a3, $v0, 0x1
    ctx->pc = 0x18a3e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18a3e8: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x18a3e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x18a3ec: 0x24c20006  addiu       $v0, $a2, 0x6
    ctx->pc = 0x18a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x18a3f0: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x18a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18a3f4: 0x90a70ffe  lbu         $a3, 0xFFE($a1)
    ctx->pc = 0x18a3f4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4094)));
    // 0x18a3f8: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x18a3f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a3fc: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x18a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x18a400: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x18a400u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x18a404: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x18a404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x18a408: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x18a408u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x18a40c: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x18a40cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x18a410: 0x24a51240  addiu       $a1, $a1, 0x1240
    ctx->pc = 0x18a410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4672));
    // 0x18a414: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x18a414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x18a418: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18a418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18a41c: 0xc3382a  slt         $a3, $a2, $v1
    ctx->pc = 0x18a41cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18a420: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x18a420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x18a424: 0x14e0ffc6  bnez        $a3, . + 4 + (-0x3A << 2)
    ctx->pc = 0x18A424u;
    {
        const bool branch_taken_0x18a424 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A424u;
        // 0x18a428: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a424) {
            ctx->pc = 0x18A340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a340;
        }
    }
    ctx->pc = 0x18A42Cu;
    // 0x18a42c: 0x0  nop
    ctx->pc = 0x18a42cu;
    // NOP
label_18a430:
    // 0x18a430: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x18a430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18a434: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x18a434u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18a438: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x18A438u;
    {
        const bool branch_taken_0x18a438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a438) {
            ctx->pc = 0x18A488u;
            goto label_18a488;
        }
    }
    ctx->pc = 0x18A440u;
    // 0x18a440: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x18a440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18a444: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18a444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18a448: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18a44c: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x18a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x18a450: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a454: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18a458: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a45c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18a460:
    // 0x18a460: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x18a460u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x18a464: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18a464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18a468: 0x24840248  addiu       $a0, $a0, 0x248
    ctx->pc = 0x18a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
    // 0x18a46c: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x18a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x18a470: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18a470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18a474: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18a474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18a478: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a47c: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x18a47cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18a480: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18A480u;
    {
        const bool branch_taken_0x18a480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A480u;
        // 0x18a484: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a480) {
            ctx->pc = 0x18A460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18a460;
        }
    }
    ctx->pc = 0x18A488u;
label_18a488:
    // 0x18a488: 0x3e00008  jr          $ra
    ctx->pc = 0x18A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A490u;
}
