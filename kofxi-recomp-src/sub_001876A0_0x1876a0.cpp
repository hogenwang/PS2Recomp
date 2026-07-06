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

// Function: sub_001876A0
// Address: 0x1876a0 - 0x1877a0
void sub_001876A0_0x1876a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001876A0_0x1876a0");
#endif

    ctx->pc = 0x1876a0u;

    // 0x1876a0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x1876a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x1876a4: 0x8c66d918  lw          $a2, -0x26E8($v1)
    ctx->pc = 0x1876a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x1876a8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1876a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1876ac: 0x34650100  ori         $a1, $v1, 0x100
    ctx->pc = 0x1876acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1876b0: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1876b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1876b4: 0x14a00036  bnez        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1876B4u;
    {
        const bool branch_taken_0x1876b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1876b4) {
            ctx->pc = 0x187790u;
            goto label_187790;
        }
    }
    ctx->pc = 0x1876BCu;
    // 0x1876bc: 0x908504f0  lbu         $a1, 0x4F0($a0)
    ctx->pc = 0x1876bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x1876c0: 0x30a50080  andi        $a1, $a1, 0x80
    ctx->pc = 0x1876c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1876c4: 0x14a00032  bnez        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1876C4u;
    {
        const bool branch_taken_0x1876c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1876c4) {
            ctx->pc = 0x187790u;
            goto label_187790;
        }
    }
    ctx->pc = 0x1876CCu;
    // 0x1876cc: 0x8c8500dc  lw          $a1, 0xDC($a0)
    ctx->pc = 0x1876ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1876d0: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x1876d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x1876d4: 0x24e7db50  addiu       $a3, $a3, -0x24B0
    ctx->pc = 0x1876d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957904));
    // 0x1876d8: 0x248604a6  addiu       $a2, $a0, 0x4A6
    ctx->pc = 0x1876d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1190));
    // 0x1876dc: 0x30a80030  andi        $t0, $a1, 0x30
    ctx->pc = 0x1876dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)48);
    // 0x1876e0: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x1876e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x1876e4: 0x85102  srl         $t2, $t0, 4
    ctx->pc = 0x1876e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x1876e8: 0x54882  srl         $t1, $a1, 2
    ctx->pc = 0x1876e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x1876ec: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x1876ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1876f0: 0xa2940  sll         $a1, $t2, 5
    ctx->pc = 0x1876f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1876f4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1876f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1876f8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x1876f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1876fc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1876fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x187700: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x187700u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x187704: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x187704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x187708: 0x1053821  addu        $a3, $t0, $a1
    ctx->pc = 0x187708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x18770c: 0x91050003  lbu         $a1, 0x3($t0)
    ctx->pc = 0x18770cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x187710: 0x10aa001f  beq         $a1, $t2, . + 4 + (0x1F << 2)
    ctx->pc = 0x187710u;
    {
        const bool branch_taken_0x187710 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        ctx->pc = 0x187714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187710u;
        // 0x187714: 0x24e7014c  addiu       $a3, $a3, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187710) {
            ctx->pc = 0x187790u;
            goto label_187790;
        }
    }
    ctx->pc = 0x187718u;
    // 0x187718: 0x8c84049c  lw          $a0, 0x49C($a0)
    ctx->pc = 0x187718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x18771c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18771cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187720: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x187720u;
    {
        const bool branch_taken_0x187720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187720) {
            ctx->pc = 0x187790u;
            goto label_187790;
        }
    }
    ctx->pc = 0x187728u;
    // 0x187728: 0x84e4000a  lh          $a0, 0xA($a3)
    ctx->pc = 0x187728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x18772c: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x18772cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x187730: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187730u;
    {
        const bool branch_taken_0x187730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x187730) {
            ctx->pc = 0x187734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187730u;
            // 0x187734: 0x84c30004  lh          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187744u;
            goto label_187744;
        }
    }
    ctx->pc = 0x187738u;
    // 0x187738: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x187738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x18773c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18773Cu;
    {
        const bool branch_taken_0x18773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18773Cu;
        // 0x187740: 0xa5030036  sh          $v1, 0x36($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 54), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18773c) {
            ctx->pc = 0x187790u;
            goto label_187790;
        }
    }
    ctx->pc = 0x187744u;
label_187744:
    // 0x187744: 0x84c40008  lh          $a0, 0x8($a2)
    ctx->pc = 0x187744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x187748: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x187748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18774c: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x18774cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x187750: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x187750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187754: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187754u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187758: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x187758u;
    {
        const bool branch_taken_0x187758 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x187758) {
            ctx->pc = 0x187790u;
            goto label_187790;
        }
    }
    ctx->pc = 0x187760u;
    // 0x187760: 0x84c30006  lh          $v1, 0x6($a2)
    ctx->pc = 0x187760u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x187764: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x187764u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x187768: 0x84e30008  lh          $v1, 0x8($a3)
    ctx->pc = 0x187768u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x18776c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187770: 0xa4e30008  sh          $v1, 0x8($a3)
    ctx->pc = 0x187770u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x187774: 0x84e4000a  lh          $a0, 0xA($a3)
    ctx->pc = 0x187774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x187778: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x187778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18777c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18777cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187780: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x187780u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x187784: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x187784u;
    {
        const bool branch_taken_0x187784 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187784) {
            ctx->pc = 0x187790u;
            goto label_187790;
        }
    }
    ctx->pc = 0x18778Cu;
    // 0x18778c: 0xa4e40008  sh          $a0, 0x8($a3)
    ctx->pc = 0x18778cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 4));
label_187790:
    // 0x187790: 0x3e00008  jr          $ra
    ctx->pc = 0x187790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187798u;
    // 0x187798: 0x0  nop
    ctx->pc = 0x187798u;
    // NOP
    // 0x18779c: 0x0  nop
    ctx->pc = 0x18779cu;
    // NOP
}
