#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017AE9C
// Address: 0x17ae9c - 0x17af80
void sub_0017AE9C_0x17ae9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AE9C_0x17ae9c");
#endif

    switch (ctx->pc) {
        case 0x17aec0u: goto label_17aec0;
        case 0x17af00u: goto label_17af00;
        default: break;
    }

    ctx->pc = 0x17ae9cu;

    // 0x17ae9c: 0x2463ac60  addiu       $v1, $v1, -0x53A0
    ctx->pc = 0x17ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945888));
    // 0x17aea0: 0x52302  srl         $a0, $a1, 12
    ctx->pc = 0x17aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x17aea4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17aea8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17aea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17aeac: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x17aeacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17aeb0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x17aeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x17aeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x17AEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEB4u;
            // 0x17aeb8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AEBCu;
    // 0x17aebc: 0x0  nop
    ctx->pc = 0x17aebcu;
    // NOP
label_17aec0:
    // 0x17aec0: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x17aec0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17aec4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x17aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x17aec8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17aecc: 0x2463ac60  addiu       $v1, $v1, -0x53A0
    ctx->pc = 0x17aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945888));
    // 0x17aed0: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x17aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x17aed4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17aed8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x17aed8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17aedc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x17aedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x17aee0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x17aee0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17aee4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x17aee4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17aee8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x17aee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x17aeec: 0x3e00008  jr          $ra
    ctx->pc = 0x17AEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEECu;
            // 0x17aef0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AEF4u;
    // 0x17aef4: 0x0  nop
    ctx->pc = 0x17aef4u;
    // NOP
    // 0x17aef8: 0x0  nop
    ctx->pc = 0x17aef8u;
    // NOP
    // 0x17aefc: 0x0  nop
    ctx->pc = 0x17aefcu;
    // NOP
label_17af00:
    // 0x17af00: 0x8ca200b8  lw          $v0, 0xB8($a1)
    ctx->pc = 0x17af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x17af04: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x17af04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x17af08: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17AF08u;
    {
        const bool branch_taken_0x17af08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17af08) {
            ctx->pc = 0x17AF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF08u;
            // 0x17af0c: 0x94a300b4  lhu         $v1, 0xB4($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AF28u;
            goto label_17af28;
        }
    }
    ctx->pc = 0x17AF10u;
    // 0x17af10: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x17af10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17af14: 0xa4a200b4  sh          $v0, 0xB4($a1)
    ctx->pc = 0x17af14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 180), (uint16_t)GPR_U32(ctx, 2));
    // 0x17af18: 0x8ca200b8  lw          $v0, 0xB8($a1)
    ctx->pc = 0x17af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x17af1c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17af1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x17af20: 0xaca200b8  sw          $v0, 0xB8($a1)
    ctx->pc = 0x17af20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 2));
    // 0x17af24: 0x94a300b4  lhu         $v1, 0xB4($a1)
    ctx->pc = 0x17af24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 180)));
label_17af28:
    // 0x17af28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17af2c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17AF2Cu;
    {
        const bool branch_taken_0x17af2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17af2c) {
            ctx->pc = 0x17AF30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF2Cu;
            // 0x17af30: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AF58u;
            goto label_17af58;
        }
    }
    ctx->pc = 0x17AF34u;
    // 0x17af34: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x17af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x17af38: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x17af38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x17af3c: 0x8ca400b8  lw          $a0, 0xB8($a1)
    ctx->pc = 0x17af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x17af40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17af40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17af44: 0xaca300b8  sw          $v1, 0xB8($a1)
    ctx->pc = 0x17af44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 3));
    // 0x17af48: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x17af48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x17af4c: 0xaca300b8  sw          $v1, 0xB8($a1)
    ctx->pc = 0x17af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 3));
    // 0x17af50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17AF50u;
    {
        const bool branch_taken_0x17af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF50u;
            // 0x17af54: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af50) {
            ctx->pc = 0x17AF70u;
            goto label_17af70;
        }
    }
    ctx->pc = 0x17AF58u;
label_17af58:
    // 0x17af58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17af58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af5c: 0xa4a300b4  sh          $v1, 0xB4($a1)
    ctx->pc = 0x17af5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 180), (uint16_t)GPR_U32(ctx, 3));
    // 0x17af60: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x17af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x17af64: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x17af64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x17af68: 0xaca300b8  sw          $v1, 0xB8($a1)
    ctx->pc = 0x17af68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 3));
    // 0x17af6c: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x17af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_17af70:
    // 0x17af70: 0x3e00008  jr          $ra
    ctx->pc = 0x17AF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AF78u;
    // 0x17af78: 0x0  nop
    ctx->pc = 0x17af78u;
    // NOP
    // 0x17af7c: 0x0  nop
    ctx->pc = 0x17af7cu;
    // NOP
    ctx->pc = 0x17af80u;
}
