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

// Function: sub_001837B0
// Address: 0x1837b0 - 0x183930
void sub_001837B0_0x1837b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001837B0_0x1837b0");
#endif

    switch (ctx->pc) {
        case 0x1837dcu: goto label_1837dc;
        case 0x183878u: goto label_183878;
        default: break;
    }

    ctx->pc = 0x1837b0u;

    // 0x1837b0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1837b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1837b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1837b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1837b8: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x1837b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1837bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1837bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837c0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1837c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1837c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1837c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1837c8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1837c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1837cc: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x1837ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x1837d0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1837d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1837d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1837d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1837d8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1837d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1837dc:
    // 0x1837dc: 0x8d250078  lw          $a1, 0x78($t1)
    ctx->pc = 0x1837dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x1837e0: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1837E0u;
    {
        const bool branch_taken_0x1837e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1837e0) {
            ctx->pc = 0x183850u;
            goto label_183850;
        }
    }
    ctx->pc = 0x1837E8u;
    // 0x1837e8: 0x8ca80010  lw          $t0, 0x10($a1)
    ctx->pc = 0x1837e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1837ec: 0x8d07049c  lw          $a3, 0x49C($t0)
    ctx->pc = 0x1837ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1180)));
    // 0x1837f0: 0x30e50800  andi        $a1, $a3, 0x800
    ctx->pc = 0x1837f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
    // 0x1837f4: 0x14a00016  bnez        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1837F4u;
    {
        const bool branch_taken_0x1837f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1837f4) {
            ctx->pc = 0x183850u;
            goto label_183850;
        }
    }
    ctx->pc = 0x1837FCu;
    // 0x1837fc: 0x30e50400  andi        $a1, $a3, 0x400
    ctx->pc = 0x1837fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
    // 0x183800: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x183800u;
    {
        const bool branch_taken_0x183800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x183800) {
            ctx->pc = 0x183818u;
            goto label_183818;
        }
    }
    ctx->pc = 0x183808u;
    // 0x183808: 0x8c850494  lw          $a1, 0x494($a0)
    ctx->pc = 0x183808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x18380c: 0x30a50200  andi        $a1, $a1, 0x200
    ctx->pc = 0x18380cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x183810: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x183810u;
    {
        const bool branch_taken_0x183810 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x183810) {
            ctx->pc = 0x183850u;
            goto label_183850;
        }
    }
    ctx->pc = 0x183818u;
label_183818:
    // 0x183818: 0x8d050490  lw          $a1, 0x490($t0)
    ctx->pc = 0x183818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1168)));
    // 0x18381c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x18381cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x183820: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x183820u;
    {
        const bool branch_taken_0x183820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x183820) {
            ctx->pc = 0x183850u;
            goto label_183850;
        }
    }
    ctx->pc = 0x183828u;
    // 0x183828: 0x910704ea  lbu         $a3, 0x4EA($t0)
    ctx->pc = 0x183828u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1258)));
    // 0x18382c: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x18382cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x183830: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x183830u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x183834: 0xa7082a  slt         $at, $a1, $a3
    ctx->pc = 0x183834u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x183838: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x183838u;
    {
        const bool branch_taken_0x183838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x183838) {
            ctx->pc = 0x183850u;
            goto label_183850;
        }
    }
    ctx->pc = 0x183840u;
    // 0x183840: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x183840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x183844: 0xa08704f5  sb          $a3, 0x4F5($a0)
    ctx->pc = 0x183844u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1269), (uint8_t)GPR_U32(ctx, 7));
    // 0x183848: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x183848u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x18384c: 0x0  nop
    ctx->pc = 0x18384cu;
    // NOP
label_183850:
    // 0x183850: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x183850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x183854: 0x28c50003  slti        $a1, $a2, 0x3
    ctx->pc = 0x183854u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x183858: 0x14a0ffe0  bnez        $a1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x183858u;
    {
        const bool branch_taken_0x183858 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x18385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183858u;
        // 0x18385c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183858) {
            ctx->pc = 0x1837DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1837dc;
        }
    }
    ctx->pc = 0x183860u;
    // 0x183860: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x183860u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183864: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x183864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x183868: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x183868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18386c: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x18386cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x183870: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x183870u;
    {
        const bool branch_taken_0x183870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183870u;
        // 0x183874: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183870) {
            ctx->pc = 0x1838F0u;
            goto label_1838f0;
        }
    }
    ctx->pc = 0x183878u;
label_183878:
    // 0x183878: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x183878u;
    {
        const bool branch_taken_0x183878 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x183878) {
            ctx->pc = 0x1838E8u;
            goto label_1838e8;
        }
    }
    ctx->pc = 0x183880u;
    // 0x183880: 0x8ccb0010  lw          $t3, 0x10($a2)
    ctx->pc = 0x183880u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x183884: 0x8d6a049c  lw          $t2, 0x49C($t3)
    ctx->pc = 0x183884u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1180)));
    // 0x183888: 0x31460800  andi        $a2, $t2, 0x800
    ctx->pc = 0x183888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2048);
    // 0x18388c: 0x14c00016  bnez        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x18388Cu;
    {
        const bool branch_taken_0x18388c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x18388c) {
            ctx->pc = 0x1838E8u;
            goto label_1838e8;
        }
    }
    ctx->pc = 0x183894u;
    // 0x183894: 0x31460400  andi        $a2, $t2, 0x400
    ctx->pc = 0x183894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1024);
    // 0x183898: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x183898u;
    {
        const bool branch_taken_0x183898 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x183898) {
            ctx->pc = 0x1838B0u;
            goto label_1838b0;
        }
    }
    ctx->pc = 0x1838A0u;
    // 0x1838a0: 0x8c860494  lw          $a2, 0x494($a0)
    ctx->pc = 0x1838a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x1838a4: 0x30c60200  andi        $a2, $a2, 0x200
    ctx->pc = 0x1838a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
    // 0x1838a8: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1838A8u;
    {
        const bool branch_taken_0x1838a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1838a8) {
            ctx->pc = 0x1838E8u;
            goto label_1838e8;
        }
    }
    ctx->pc = 0x1838B0u;
label_1838b0:
    // 0x1838b0: 0x8d660490  lw          $a2, 0x490($t3)
    ctx->pc = 0x1838b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1168)));
    // 0x1838b4: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x1838b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1838b8: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1838B8u;
    {
        const bool branch_taken_0x1838b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1838b8) {
            ctx->pc = 0x1838E8u;
            goto label_1838e8;
        }
    }
    ctx->pc = 0x1838C0u;
    // 0x1838c0: 0x916a04ea  lbu         $t2, 0x4EA($t3)
    ctx->pc = 0x1838c0u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1258)));
    // 0x1838c4: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x1838c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1838c8: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1838c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1838cc: 0xca082a  slt         $at, $a2, $t2
    ctx->pc = 0x1838ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1838d0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1838D0u;
    {
        const bool branch_taken_0x1838d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1838d0) {
            ctx->pc = 0x1838E8u;
            goto label_1838e8;
        }
    }
    ctx->pc = 0x1838D8u;
    // 0x1838d8: 0xa1e3c  dsll32      $v1, $t2, 24
    ctx->pc = 0x1838d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 24));
    // 0x1838dc: 0xa08a04f5  sb          $t2, 0x4F5($a0)
    ctx->pc = 0x1838dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1269), (uint8_t)GPR_U32(ctx, 10));
    // 0x1838e0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1838e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1838e4: 0x0  nop
    ctx->pc = 0x1838e4u;
    // NOP
label_1838e8:
    // 0x1838e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1838e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1838ec: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1838ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_1838f0:
    // 0x1838f0: 0x90a6f35b  lbu         $a2, -0xCA5($a1)
    ctx->pc = 0x1838f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294964059)));
    // 0x1838f4: 0x50c90002  beql        $a2, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1838F4u;
    {
        const bool branch_taken_0x1838f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x1838f4) {
            ctx->pc = 0x1838F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1838F4u;
            // 0x1838f8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183900u;
            goto label_183900;
        }
    }
    ctx->pc = 0x1838FCu;
    // 0x1838fc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1838fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_183900:
    // 0x183900: 0x186302a  slt         $a2, $t4, $a2
    ctx->pc = 0x183900u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x183904: 0x54c0ffdc  bnel        $a2, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x183904u;
    {
        const bool branch_taken_0x183904 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x183904) {
            ctx->pc = 0x183908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183904u;
            // 0x183908: 0x8c460100  lw          $a2, 0x100($v0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183878;
        }
    }
    ctx->pc = 0x18390Cu;
    // 0x18390c: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x18390cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x183910: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x183910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183914: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x183914u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x183918: 0x54a20003  bnel        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183918u;
    {
        const bool branch_taken_0x183918 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x183918) {
            ctx->pc = 0x18391Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183918u;
            // 0x18391c: 0x3163c  dsll32      $v0, $v1, 24 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183928u;
            goto label_183928;
        }
    }
    ctx->pc = 0x183920u;
    // 0x183920: 0x808304f5  lb          $v1, 0x4F5($a0)
    ctx->pc = 0x183920u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1269)));
    // 0x183924: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x183924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
label_183928:
    // 0x183928: 0x3e00008  jr          $ra
    ctx->pc = 0x183928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183928u;
        // 0x18392c: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183930u;
}
