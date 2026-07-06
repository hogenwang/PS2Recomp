#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033AB40
// Address: 0x33ab40 - 0x33ad30
void sub_0033AB40_0x33ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AB40_0x33ab40");
#endif

    switch (ctx->pc) {
        case 0x33ac10u: goto label_33ac10;
        case 0x33ac34u: goto label_33ac34;
        case 0x33ac7cu: goto label_33ac7c;
        default: break;
    }

    ctx->pc = 0x33ab40u;

    // 0x33ab40: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33ab44: 0x90649780  lbu         $a0, -0x6880($v1)
    ctx->pc = 0x33ab44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x33ab48: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33ab4c: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x33AB4Cu;
    {
        const bool branch_taken_0x33ab4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33ab4c) {
            ctx->pc = 0x33AC00u;
            goto label_33ac00;
        }
    }
    ctx->pc = 0x33AB54u;
    // 0x33ab54: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33ab58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33ab5c: 0x9065b244  lbu         $a1, -0x4DBC($v1)
    ctx->pc = 0x33ab5cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947396)));
    // 0x33ab60: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33AB60u;
    {
        const bool branch_taken_0x33ab60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33ab60) {
            ctx->pc = 0x33AB88u;
            goto label_33ab88;
        }
    }
    ctx->pc = 0x33AB68u;
    // 0x33ab68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ab6c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33AB6Cu;
    {
        const bool branch_taken_0x33ab6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ab6c) {
            ctx->pc = 0x33AB70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33AB6Cu;
            // 0x33ab70: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33AB7Cu;
            goto label_33ab7c;
        }
    }
    ctx->pc = 0x33AB74u;
    // 0x33ab74: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x33AB74u;
    {
        const bool branch_taken_0x33ab74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ab74) {
            ctx->pc = 0x33AC00u;
            goto label_33ac00;
        }
    }
    ctx->pc = 0x33AB7Cu;
label_33ab7c:
    // 0x33ab7c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ab80: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x33AB80u;
    {
        const bool branch_taken_0x33ab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AB80u;
            // 0x33ab84: 0xac64e8d8  sw          $a0, -0x1728($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961368), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab80) {
            ctx->pc = 0x33AC00u;
            goto label_33ac00;
        }
    }
    ctx->pc = 0x33AB88u;
label_33ab88:
    // 0x33ab88: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33ab8c: 0x9063b240  lbu         $v1, -0x4DC0($v1)
    ctx->pc = 0x33ab8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947392)));
    // 0x33ab90: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x33AB90u;
    {
        const bool branch_taken_0x33ab90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ab90) {
            ctx->pc = 0x33AC00u;
            goto label_33ac00;
        }
    }
    ctx->pc = 0x33AB98u;
    // 0x33ab98: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33ab9c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x33ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x33aba0: 0x9063b241  lbu         $v1, -0x4DBF($v1)
    ctx->pc = 0x33aba0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x33aba4: 0x10640016  beq         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x33ABA4u;
    {
        const bool branch_taken_0x33aba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33aba4) {
            ctx->pc = 0x33AC00u;
            goto label_33ac00;
        }
    }
    ctx->pc = 0x33ABACu;
    // 0x33abac: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33abacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33abb0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x33abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x33abb4: 0x90669748  lbu         $a2, -0x68B8($v1)
    ctx->pc = 0x33abb4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940488)));
    // 0x33abb8: 0x2484db53  addiu       $a0, $a0, -0x24AD
    ctx->pc = 0x33abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957907));
    // 0x33abbc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33abc0: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x33abc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x33abc4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33abc8: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x33abc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
    // 0x33abcc: 0x2463dcaa  addiu       $v1, $v1, -0x2356
    ctx->pc = 0x33abccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958250));
    // 0x33abd0: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x33abd0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x33abd4: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x33abd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x33abd8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x33abd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x33abdc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x33abdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33abe0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x33abe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x33abe4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x33abe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33abe8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33abec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33abecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33abf0: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x33abf0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33abf4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x33abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x33abf8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33abfc: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x33abfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_33ac00:
    // 0x33ac00: 0x3e00008  jr          $ra
    ctx->pc = 0x33AC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33AC08u;
    // 0x33ac08: 0x0  nop
    ctx->pc = 0x33ac08u;
    // NOP
    // 0x33ac0c: 0x0  nop
    ctx->pc = 0x33ac0cu;
    // NOP
label_33ac10:
    // 0x33ac10: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33ac14: 0x9064b244  lbu         $a0, -0x4DBC($v1)
    ctx->pc = 0x33ac14u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947396)));
    // 0x33ac18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33ac1c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x33AC1Cu;
    {
        const bool branch_taken_0x33ac1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ac1c) {
            ctx->pc = 0x33AC6Cu;
            goto label_33ac6c;
        }
    }
    ctx->pc = 0x33AC24u;
    // 0x33ac24: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x33ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x33ac28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33ac28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ac2c: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x33ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x33ac30: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x33ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_33ac34:
    // 0x33ac34: 0xa4a4015a  sh          $a0, 0x15A($a1)
    ctx->pc = 0x33ac34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 346), (uint16_t)GPR_U32(ctx, 4));
    // 0x33ac38: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x33ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33ac3c: 0xa4a40158  sh          $a0, 0x158($a1)
    ctx->pc = 0x33ac3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x33ac40: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x33ac40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x33ac44: 0xa4a4017a  sh          $a0, 0x17A($a1)
    ctx->pc = 0x33ac44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 378), (uint16_t)GPR_U32(ctx, 4));
    // 0x33ac48: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33ac48u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x33ac4c: 0xa4a40178  sh          $a0, 0x178($a1)
    ctx->pc = 0x33ac4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 376), (uint16_t)GPR_U32(ctx, 4));
    // 0x33ac50: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x33ac50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33ac54: 0xa4a4019a  sh          $a0, 0x19A($a1)
    ctx->pc = 0x33ac54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 410), (uint16_t)GPR_U32(ctx, 4));
    // 0x33ac58: 0xa4a40198  sh          $a0, 0x198($a1)
    ctx->pc = 0x33ac58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 408), (uint16_t)GPR_U32(ctx, 4));
    // 0x33ac5c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x33AC5Cu;
    {
        const bool branch_taken_0x33ac5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AC5Cu;
            // 0x33ac60: 0x24a50248  addiu       $a1, $a1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ac5c) {
            ctx->pc = 0x33AC34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33ac34;
        }
    }
    ctx->pc = 0x33AC64u;
    // 0x33ac64: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x33AC64u;
    {
        const bool branch_taken_0x33ac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ac64) {
            ctx->pc = 0x33AD24u;
            goto label_33ad24;
        }
    }
    ctx->pc = 0x33AC6Cu;
label_33ac6c:
    // 0x33ac6c: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x33ac6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x33ac70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33ac70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ac74: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x33ac74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x33ac78: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x33ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_33ac7c:
    // 0x33ac7c: 0xa4c4015a  sh          $a0, 0x15A($a2)
    ctx->pc = 0x33ac7cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 346), (uint16_t)GPR_U32(ctx, 4));
    // 0x33ac80: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x33ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33ac84: 0xa4c40158  sh          $a0, 0x158($a2)
    ctx->pc = 0x33ac84u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x33ac88: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x33ac88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x33ac8c: 0xa4c4017a  sh          $a0, 0x17A($a2)
    ctx->pc = 0x33ac8cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 378), (uint16_t)GPR_U32(ctx, 4));
    // 0x33ac90: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x33ac90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x33ac94: 0xa4c40178  sh          $a0, 0x178($a2)
    ctx->pc = 0x33ac94u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 376), (uint16_t)GPR_U32(ctx, 4));
    // 0x33ac98: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x33ac98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33ac9c: 0xa4c4019a  sh          $a0, 0x19A($a2)
    ctx->pc = 0x33ac9cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 410), (uint16_t)GPR_U32(ctx, 4));
    // 0x33aca0: 0xa4c40198  sh          $a0, 0x198($a2)
    ctx->pc = 0x33aca0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 408), (uint16_t)GPR_U32(ctx, 4));
    // 0x33aca4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x33ACA4u;
    {
        const bool branch_taken_0x33aca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33ACA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ACA4u;
            // 0x33aca8: 0x24c60248  addiu       $a2, $a2, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aca4) {
            ctx->pc = 0x33AC7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33ac7c;
        }
    }
    ctx->pc = 0x33ACACu;
    // 0x33acac: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33acacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33acb0: 0x9063b240  lbu         $v1, -0x4DC0($v1)
    ctx->pc = 0x33acb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947392)));
    // 0x33acb4: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x33ACB4u;
    {
        const bool branch_taken_0x33acb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33acb4) {
            ctx->pc = 0x33AD24u;
            goto label_33ad24;
        }
    }
    ctx->pc = 0x33ACBCu;
    // 0x33acbc: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33acc0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x33acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x33acc4: 0x9063b241  lbu         $v1, -0x4DBF($v1)
    ctx->pc = 0x33acc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x33acc8: 0x10640016  beq         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x33ACC8u;
    {
        const bool branch_taken_0x33acc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33acc8) {
            ctx->pc = 0x33AD24u;
            goto label_33ad24;
        }
    }
    ctx->pc = 0x33ACD0u;
    // 0x33acd0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33acd4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x33acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x33acd8: 0x90669748  lbu         $a2, -0x68B8($v1)
    ctx->pc = 0x33acd8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940488)));
    // 0x33acdc: 0x2484db53  addiu       $a0, $a0, -0x24AD
    ctx->pc = 0x33acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957907));
    // 0x33ace0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33ace0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33ace4: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x33ace4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x33ace8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33acec: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x33acecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
    // 0x33acf0: 0x2463dcaa  addiu       $v1, $v1, -0x2356
    ctx->pc = 0x33acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958250));
    // 0x33acf4: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x33acf4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x33acf8: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x33acf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x33acfc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x33acfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x33ad00: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x33ad00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33ad04: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x33ad04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x33ad08: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x33ad08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33ad0c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33ad10: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33ad14: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x33ad14u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33ad18: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x33ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x33ad1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33ad20: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x33ad20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_33ad24:
    // 0x33ad24: 0x3e00008  jr          $ra
    ctx->pc = 0x33AD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33AD2Cu;
    // 0x33ad2c: 0x0  nop
    ctx->pc = 0x33ad2cu;
    // NOP
    ctx->pc = 0x33ad30u;
}
