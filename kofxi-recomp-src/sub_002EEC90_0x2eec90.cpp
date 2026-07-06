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

// Function: sub_002EEC90
// Address: 0x2eec90 - 0x2eeeb0
void sub_002EEC90_0x2eec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEC90_0x2eec90");
#endif

    switch (ctx->pc) {
        case 0x2eecccu: goto label_2eeccc;
        case 0x2eed14u: goto label_2eed14;
        case 0x2eed48u: goto label_2eed48;
        case 0x2eed68u: goto label_2eed68;
        case 0x2eed9cu: goto label_2eed9c;
        case 0x2eedb0u: goto label_2eedb0;
        case 0x2eede0u: goto label_2eede0;
        case 0x2eede8u: goto label_2eede8;
        case 0x2eee2cu: goto label_2eee2c;
        case 0x2eee34u: goto label_2eee34;
        case 0x2eee64u: goto label_2eee64;
        case 0x2eee74u: goto label_2eee74;
        case 0x2eeea0u: goto label_2eeea0;
        default: break;
    }

    ctx->pc = 0x2eec90u;

    // 0x2eec90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2eec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2eec94: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2eec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2eec98: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2eec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2eec9c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2eec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2eeca0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eeca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeca4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2eeca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2eeca8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2eeca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eecac: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x2eecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x2eecb0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2eecb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eecb4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2eecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2eecb8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2eecb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eecbc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2eecbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2eecc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eecc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eecc4: 0xc0bb642  jal         func_2ED908
    ctx->pc = 0x2EECC4u;
    SET_GPR_U32(ctx, 31, 0x2EECCCu);
    ctx->pc = 0x2EECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EECC4u;
    // 0x2eecc8: 0x27b50050  addiu       $s5, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED908u, 0x2EECC4u, 0x2EECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EECCCu;
label_2eeccc:
    // 0x2eeccc: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2eecccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2eecd0: 0x25ee0f38  addiu       $t6, $t7, 0xF38
    ctx->pc = 0x2eecd0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3896));
    // 0x2eecd4: 0x8ded0f38  lw          $t5, 0xF38($t7)
    ctx->pc = 0x2eecd4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 3896)));
    // 0x2eecd8: 0x95cc0004  lhu         $t4, 0x4($t6)
    ctx->pc = 0x2eecd8u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2eecdc: 0xafad0050  sw          $t5, 0x50($sp)
    ctx->pc = 0x2eecdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 13));
    // 0x2eece0: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x2eece0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2eece4: 0x168f0007  bne         $s4, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EECE4u;
    {
        const bool branch_taken_0x2eece4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECE4u;
        // 0x2eece8: 0xa7ac0054  sh          $t4, 0x54($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eece4) {
            ctx->pc = 0x2EED04u;
            goto label_2eed04;
        }
    }
    ctx->pc = 0x2EECECu;
    // 0x2eecec: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2eececu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2eecf0: 0x25ee0f40  addiu       $t6, $t7, 0xF40
    ctx->pc = 0x2eecf0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3904));
    // 0x2eecf4: 0x8ded0f40  lw          $t5, 0xF40($t7)
    ctx->pc = 0x2eecf4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 3904)));
    // 0x2eecf8: 0x91cc0004  lbu         $t4, 0x4($t6)
    ctx->pc = 0x2eecf8u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2eecfc: 0xafad0050  sw          $t5, 0x50($sp)
    ctx->pc = 0x2eecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 13));
    // 0x2eed00: 0xa3ac0054  sb          $t4, 0x54($sp)
    ctx->pc = 0x2eed00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 12));
label_2eed04:
    // 0x2eed04: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x2eed04u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2eed08: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x2eed08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2eed0c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2EED0Cu;
    SET_GPR_U32(ctx, 31, 0x2EED14u);
    ctx->pc = 0x2EED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED0Cu;
    // 0x2eed10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2EED0Cu, 0x2EED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED14u;
label_2eed14:
    // 0x2eed14: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2eed14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2eed18: 0x25f2eca8  addiu       $s2, $t7, -0x1358
    ctx->pc = 0x2eed18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2eed1c: 0x8e4d003c  lw          $t5, 0x3C($s2)
    ctx->pc = 0x2eed1cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2eed20: 0x8e4f0040  lw          $t7, 0x40($s2)
    ctx->pc = 0x2eed20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2eed24: 0x11af0056  beq         $t5, $t7, . + 4 + (0x56 << 2)
    ctx->pc = 0x2EED24u;
    {
        const bool branch_taken_0x2eed24 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x2EED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED24u;
        // 0x2eed28: 0x97ae0008  lhu         $t6, 0x8($sp) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed24) {
            ctx->pc = 0x2EEE80u;
            goto label_2eee80;
        }
    }
    ctx->pc = 0x2EED2Cu;
    // 0x2eed2c: 0x966f0008  lhu         $t7, 0x8($s3)
    ctx->pc = 0x2eed2cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2eed30: 0x31c8ffff  andi        $t0, $t6, 0xFFFF
    ctx->pc = 0x2eed30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x2eed34: 0x15e80035  bne         $t7, $t0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2EED34u;
    {
        const bool branch_taken_0x2eed34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 8));
        ctx->pc = 0x2EED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED34u;
        // 0x2eed38: 0x10f782b  sltu        $t7, $t0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed34) {
            ctx->pc = 0x2EEE0Cu;
            goto label_2eee0c;
        }
    }
    ctx->pc = 0x2EED3Cu;
    // 0x2eed3c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2eed3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eed40: 0xc0bb5fc  jal         func_2ED7F0
    ctx->pc = 0x2EED40u;
    SET_GPR_U32(ctx, 31, 0x2EED48u);
    ctx->pc = 0x2EED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED40u;
    // 0x2eed44: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED7F0u, 0x2EED40u, 0x2EED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED48u;
label_2eed48:
    // 0x2eed48: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2eed48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed4c: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x2eed4cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x2eed50: 0x25f41038  addiu       $s4, $t7, 0x1038
    ctx->pc = 0x2eed50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 4152));
    // 0x2eed54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eed54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed58: 0x24050935  addiu       $a1, $zero, 0x935
    ctx->pc = 0x2eed58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2357));
    // 0x2eed5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eed5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed60: 0xc0bc71e  jal         func_2F1C78
    ctx->pc = 0x2EED60u;
    SET_GPR_U32(ctx, 31, 0x2EED68u);
    ctx->pc = 0x2EED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED60u;
    // 0x2eed64: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C78u, 0x2EED60u, 0x2EED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED68u;
label_2eed68:
    // 0x2eed68: 0x922e0000  lbu         $t6, 0x0($s1)
    ctx->pc = 0x2eed68u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eed6c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2eed6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eed70: 0x8e49003c  lw          $t1, 0x3C($s2)
    ctx->pc = 0x2eed70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2eed74: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2eed74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2eed78: 0x1cf7804  sllv        $t7, $t7, $t6
    ctx->pc = 0x2eed78u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 14) & 0x1F));
    // 0x2eed7c: 0x97a80008  lhu         $t0, 0x8($sp)
    ctx->pc = 0x2eed7cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eed80: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x2eed80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x2eed84: 0x24a51050  addiu       $a1, $a1, 0x1050
    ctx->pc = 0x2eed84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4176));
    // 0x2eed88: 0xae49003c  sw          $t1, 0x3C($s2)
    ctx->pc = 0x2eed88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 9));
    // 0x2eed8c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2eed8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed94: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EED94u;
    SET_GPR_U32(ctx, 31, 0x2EED9Cu);
    ctx->pc = 0x2EED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED94u;
    // 0x2eed98: 0x92270000  lbu         $a3, 0x0($s1) (Delay Slot)
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2EED94u, 0x2EED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED9Cu;
label_2eed9c:
    // 0x2eed9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeda0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2eeda0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeda4: 0x24050938  addiu       $a1, $zero, 0x938
    ctx->pc = 0x2eeda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2360));
    // 0x2eeda8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EEDA8u;
    SET_GPR_U32(ctx, 31, 0x2EEDB0u);
    ctx->pc = 0x2EEDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEDA8u;
    // 0x2eedac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EEDA8u, 0x2EEDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEDB0u;
label_2eedb0:
    // 0x2eedb0: 0x8e4e003c  lw          $t6, 0x3C($s2)
    ctx->pc = 0x2eedb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2eedb4: 0x8e4f0040  lw          $t7, 0x40($s2)
    ctx->pc = 0x2eedb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2eedb8: 0x15cf000c  bne         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2EEDB8u;
    {
        const bool branch_taken_0x2eedb8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2EEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDB8u;
        // 0x2eedbc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eedb8) {
            ctx->pc = 0x2EEDECu;
            goto label_2eedec;
        }
    }
    ctx->pc = 0x2EEDC0u;
    // 0x2eedc0: 0x966f0008  lhu         $t7, 0x8($s3)
    ctx->pc = 0x2eedc0u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2eedc4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2eedc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2eedc8: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x2eedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x2eedcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2eedccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eedd0: 0xa66f0004  sh          $t7, 0x4($s3)
    ctx->pc = 0x2eedd0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 15));
    // 0x2eedd4: 0x24e71078  addiu       $a3, $a3, 0x1078
    ctx->pc = 0x2eedd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4216));
    // 0x2eedd8: 0x2405093c  addiu       $a1, $zero, 0x93C
    ctx->pc = 0x2eedd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2364));
    // 0x2eeddc: 0x0  nop
    ctx->pc = 0x2eeddcu;
    // NOP
label_2eede0:
    // 0x2eede0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EEDE0u;
    SET_GPR_U32(ctx, 31, 0x2EEDE8u);
    ctx->pc = 0x2EEDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEDE0u;
    // 0x2eede4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2EEDE0u, 0x2EEDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEDE8u;
label_2eede8:
    // 0x2eede8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2eede8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2eedec:
    // 0x2eedec: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2eedecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2eedf0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2eedf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2eedf4: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2eedf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2eedf8: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2eedf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2eedfc: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x2eedfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2eee00: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2eee00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2eee04: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE04u;
        // 0x2eee08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEE0Cu;
label_2eee0c:
    // 0x2eee0c: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2EEE0Cu;
    {
        const bool branch_taken_0x2eee0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE0Cu;
        // 0x2eee10: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee0c) {
            ctx->pc = 0x2EEE40u;
            goto label_2eee40;
        }
    }
    ctx->pc = 0x2EEE14u;
    // 0x2eee14: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x2eee14u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eee18: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2eee18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2eee1c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2eee1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee20: 0x24a51088  addiu       $a1, $a1, 0x1088
    ctx->pc = 0x2eee20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4232));
    // 0x2eee24: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EEE24u;
    SET_GPR_U32(ctx, 31, 0x2EEE2Cu);
    ctx->pc = 0x2EEE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE24u;
    // 0x2eee28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2EEE24u, 0x2EEE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE2Cu;
label_2eee2c:
    // 0x2eee2c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2eee2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee30: 0x24050941  addiu       $a1, $zero, 0x941
    ctx->pc = 0x2eee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2369));
label_2eee34:
    // 0x2eee34: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eee34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eee38: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x2EEE38u;
    {
        const bool branch_taken_0x2eee38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE38u;
        // 0x2eee3c: 0x24841038  addiu       $a0, $a0, 0x1038 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee38) {
            ctx->pc = 0x2EEDE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eede0;
        }
    }
    ctx->pc = 0x2EEE40u;
label_2eee40:
    // 0x2eee40: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2eee40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eee44: 0xa66e0008  sh          $t6, 0x8($s3)
    ctx->pc = 0x2eee44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 14));
    // 0x2eee48: 0xae6f0000  sw          $t7, 0x0($s3)
    ctx->pc = 0x2eee48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
    // 0x2eee4c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2eee4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2eee50: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2eee50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee54: 0x922e0000  lbu         $t6, 0x0($s1)
    ctx->pc = 0x2eee54u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eee58: 0x24a50f88  addiu       $a1, $a1, 0xF88
    ctx->pc = 0x2eee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3976));
    // 0x2eee5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee60: 0x1cf7804  sllv        $t7, $t7, $t6
    ctx->pc = 0x2eee60u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 14) & 0x1F));
label_2eee64:
    // 0x2eee64: 0x1af7825  or          $t7, $t5, $t7
    ctx->pc = 0x2eee64u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x2eee68: 0xae4f003c  sw          $t7, 0x3C($s2)
    ctx->pc = 0x2eee68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 15));
    // 0x2eee6c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EEE6Cu;
    SET_GPR_U32(ctx, 31, 0x2EEE74u);
    ctx->pc = 0x2EEE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE6Cu;
    // 0x2eee70: 0x92270000  lbu         $a3, 0x0($s1) (Delay Slot)
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2EEE6Cu, 0x2EEE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE74u;
label_2eee74:
    // 0x2eee74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2eee74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee78: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x2EEE78u;
    {
        const bool branch_taken_0x2eee78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE78u;
        // 0x2eee7c: 0x24050947  addiu       $a1, $zero, 0x947 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee78) {
            ctx->pc = 0x2EEE34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eee34;
        }
    }
    ctx->pc = 0x2EEE80u;
label_2eee80:
    // 0x2eee80: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x2eee80u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2eee84: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2eee84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2eee88: 0x97a80008  lhu         $t0, 0x8($sp)
    ctx->pc = 0x2eee88u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eee8c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2eee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2eee90: 0x24a510b0  addiu       $a1, $a1, 0x10B0
    ctx->pc = 0x2eee90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4272));
    // 0x2eee94: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2eee94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee98: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x2EEE98u;
    SET_GPR_U32(ctx, 31, 0x2EEEA0u);
    ctx->pc = 0x2EEE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE98u;
    // 0x2eee9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2EEE98u, 0x2EEEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEEA0u;
label_2eeea0:
    // 0x2eeea0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2eeea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeea4: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x2EEEA4u;
    {
        const bool branch_taken_0x2eeea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEA4u;
        // 0x2eeea8: 0x2405094b  addiu       $a1, $zero, 0x94B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2379));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeea4) {
            ctx->pc = 0x2EEE34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eee34;
        }
    }
    ctx->pc = 0x2EEEACu;
    // 0x2eeeac: 0x0  nop
    ctx->pc = 0x2eeeacu;
    // NOP
}
