#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001878B0
// Address: 0x1878b0 - 0x1879a0
void sub_001878B0_0x1878b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001878B0_0x1878b0");
#endif

    ctx->pc = 0x1878b0u;

    // 0x1878b0: 0x908304f0  lbu         $v1, 0x4F0($a0)
    ctx->pc = 0x1878b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x1878b4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1878b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1878b8: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1878B8u;
    {
        const bool branch_taken_0x1878b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1878b8) {
            ctx->pc = 0x187998u;
            goto label_187998;
        }
    }
    ctx->pc = 0x1878C0u;
    // 0x1878c0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x1878c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x1878c4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1878c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1878c8: 0x8c66d918  lw          $a2, -0x26E8($v1)
    ctx->pc = 0x1878c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x1878cc: 0x34a30100  ori         $v1, $a1, 0x100
    ctx->pc = 0x1878ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x1878d0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1878d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1878d4: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1878D4u;
    {
        const bool branch_taken_0x1878d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1878d4) {
            ctx->pc = 0x187998u;
            goto label_187998;
        }
    }
    ctx->pc = 0x1878DCu;
    // 0x1878dc: 0x8c8700dc  lw          $a3, 0xDC($a0)
    ctx->pc = 0x1878dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1878e0: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x1878e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x1878e4: 0x848304b2  lh          $v1, 0x4B2($a0)
    ctx->pc = 0x1878e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1202)));
    // 0x1878e8: 0x248604a6  addiu       $a2, $a0, 0x4A6
    ctx->pc = 0x1878e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1190));
    // 0x1878ec: 0x848504b6  lh          $a1, 0x4B6($a0)
    ctx->pc = 0x1878ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1206)));
    // 0x1878f0: 0x2508db50  addiu       $t0, $t0, -0x24B0
    ctx->pc = 0x1878f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957904));
    // 0x1878f4: 0x30e9000c  andi        $t1, $a3, 0xC
    ctx->pc = 0x1878f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)12);
    // 0x1878f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1878f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1878fc: 0x94882  srl         $t1, $t1, 2
    ctx->pc = 0x1878fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 2));
    // 0x187900: 0xa48304b2  sh          $v1, 0x4B2($a0)
    ctx->pc = 0x187900u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1202), (uint16_t)GPR_U32(ctx, 3));
    // 0x187904: 0x30e70030  andi        $a3, $a3, 0x30
    ctx->pc = 0x187904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)48);
    // 0x187908: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x187908u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x18790c: 0x73902  srl         $a3, $a3, 4
    ctx->pc = 0x18790cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x187910: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x187910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x187914: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x187914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187918: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x187918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18791c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x18791cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x187920: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x187920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x187924: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187924u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187928: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x187928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18792c: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x18792cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x187930: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x187930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x187934: 0x4610018  bgez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x187934u;
    {
        const bool branch_taken_0x187934 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x187938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187934u;
            // 0x187938: 0x2487014c  addiu       $a3, $a0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187934) {
            ctx->pc = 0x187998u;
            goto label_187998;
        }
    }
    ctx->pc = 0x18793Cu;
    // 0x18793c: 0x84c3000e  lh          $v1, 0xE($a2)
    ctx->pc = 0x18793cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x187940: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x187940u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x187944: 0x84e3000a  lh          $v1, 0xA($a3)
    ctx->pc = 0x187944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x187948: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x187948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18794c: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x18794cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x187950: 0x84e40008  lh          $a0, 0x8($a3)
    ctx->pc = 0x187950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x187954: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x187954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187958: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187958u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18795c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x18795cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x187960: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x187960u;
    {
        const bool branch_taken_0x187960 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x187960) {
            ctx->pc = 0x187964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187960u;
            // 0x187964: 0x84e3000a  lh          $v1, 0xA($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187970u;
            goto label_187970;
        }
    }
    ctx->pc = 0x187968u;
    // 0x187968: 0xa4e4000a  sh          $a0, 0xA($a3)
    ctx->pc = 0x187968u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x18796c: 0x84e3000a  lh          $v1, 0xA($a3)
    ctx->pc = 0x18796cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_187970:
    // 0x187970: 0x28610071  slti        $at, $v1, 0x71
    ctx->pc = 0x187970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)113) ? 1 : 0);
    // 0x187974: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x187974u;
    {
        const bool branch_taken_0x187974 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x187974) {
            ctx->pc = 0x187978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187974u;
            // 0x187978: 0x84e3000a  lh          $v1, 0xA($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187988u;
            goto label_187988;
        }
    }
    ctx->pc = 0x18797Cu;
    // 0x18797c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x18797cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x187980: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x187980u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x187984: 0x84e3000a  lh          $v1, 0xA($a3)
    ctx->pc = 0x187984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_187988:
    // 0x187988: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187988u;
    {
        const bool branch_taken_0x187988 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x187988) {
            ctx->pc = 0x187998u;
            goto label_187998;
        }
    }
    ctx->pc = 0x187990u;
    // 0x187990: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x187990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x187994: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x187994u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
label_187998:
    // 0x187998: 0x3e00008  jr          $ra
    ctx->pc = 0x187998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1879A0u;
    ctx->pc = 0x1879a0u;
}
