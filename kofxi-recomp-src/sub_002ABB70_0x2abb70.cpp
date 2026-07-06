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

// Function: sub_002ABB70
// Address: 0x2abb70 - 0x2abcd0
void sub_002ABB70_0x2abb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABB70_0x2abb70");
#endif

    switch (ctx->pc) {
        case 0x2abbb4u: goto label_2abbb4;
        case 0x2abbf8u: goto label_2abbf8;
        case 0x2abc1cu: goto label_2abc1c;
        case 0x2abc40u: goto label_2abc40;
        case 0x2abc68u: goto label_2abc68;
        case 0x2abc80u: goto label_2abc80;
        case 0x2abc90u: goto label_2abc90;
        case 0x2abca8u: goto label_2abca8;
        default: break;
    }

    ctx->pc = 0x2abb70u;

    // 0x2abb70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2abb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2abb74: 0x24021060  addiu       $v0, $zero, 0x1060
    ctx->pc = 0x2abb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4192));
    // 0x2abb78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2abb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2abb7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2abb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2abb80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2abb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2abb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2abb88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2abb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2abb8c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2abb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2abb90: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2abb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2abb94: 0x14820023  bne         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2ABB94u;
    {
        const bool branch_taken_0x2abb94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB94u;
        // 0x2abb98: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb94) {
            ctx->pc = 0x2ABC24u;
            goto label_2abc24;
        }
    }
    ctx->pc = 0x2ABB9Cu;
    // 0x2abb9c: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x2abb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2abba0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2abba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2abba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abba8: 0x2053023  subu        $a2, $s0, $a1
    ctx->pc = 0x2abba8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2abbac: 0xc0ac856  jal         func_2B2158
    ctx->pc = 0x2ABBACu;
    SET_GPR_U32(ctx, 31, 0x2ABBB4u);
    ctx->pc = 0x2ABBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABBACu;
    // 0x2abbb0: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2158u, 0x2ABBACu, 0x2ABBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABBB4u;
label_2abbb4:
    // 0x2abbb4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2abbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2abbb8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2abbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abbbc: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x2abbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2abbc0: 0xd0802a  slt         $s0, $a2, $s0
    ctx->pc = 0x2abbc0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2abbc4: 0x16000026  bnez        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2ABBC4u;
    {
        const bool branch_taken_0x2abbc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBC4u;
        // 0x2abbc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abbc4) {
            ctx->pc = 0x2ABC60u;
            goto label_2abc60;
        }
    }
    ctx->pc = 0x2ABBCCu;
    // 0x2abbcc: 0x24021061  addiu       $v0, $zero, 0x1061
    ctx->pc = 0x2abbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4193));
    // 0x2abbd0: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2abbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x2abbd4: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2abbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x2abbd8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2abbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2abbdc: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2abbdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2abbe0: 0x50430012  beql        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2ABBE0u;
    {
        const bool branch_taken_0x2abbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2abbe0) {
            ctx->pc = 0x2ABBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABBE0u;
            // 0x2abbe4: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABC2Cu;
            goto label_2abc2c;
        }
    }
    ctx->pc = 0x2ABBE8u;
    // 0x2abbe8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ABBE8u;
    {
        const bool branch_taken_0x2abbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abbe8) {
            ctx->pc = 0x2ABBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABBE8u;
            // 0x2abbec: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABC08u;
            goto label_2abc08;
        }
    }
    ctx->pc = 0x2ABBF0u;
    // 0x2abbf0: 0xc0acbea  jal         func_2B2FA8
    ctx->pc = 0x2ABBF0u;
    SET_GPR_U32(ctx, 31, 0x2ABBF8u);
    ctx->pc = 0x2ABBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABBF0u;
    // 0x2abbf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FA8u, 0x2ABBF0u, 0x2ABBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABBF8u;
label_2abbf8:
    // 0x2abbf8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2abbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2abbfc: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x2abbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2abc00: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2ABC00u;
    {
        const bool branch_taken_0x2abc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC00u;
        // 0x2abc04: 0x240600d4  addiu       $a2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc00) {
            ctx->pc = 0x2ABC9Cu;
            goto label_2abc9c;
        }
    }
    ctx->pc = 0x2ABC08u;
label_2abc08:
    // 0x2abc08: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x2abc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2abc0c: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x2abc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2abc10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2abc10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc14: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2ABC14u;
    SET_GPR_U32(ctx, 31, 0x2ABC1Cu);
    ctx->pc = 0x2ABC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC14u;
    // 0x2abc18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2ABC14u, 0x2ABC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC1Cu;
label_2abc1c:
    // 0x2abc1c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2ABC1Cu;
    {
        const bool branch_taken_0x2abc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC1Cu;
        // 0x2abc20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc1c) {
            ctx->pc = 0x2ABCB4u;
            goto label_2abcb4;
        }
    }
    ctx->pc = 0x2ABC24u;
label_2abc24:
    // 0x2abc24: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2abc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2abc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2abc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2abc2c:
    // 0x2abc2c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2abc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2abc30: 0x8c66006c  lw          $a2, 0x6C($v1)
    ctx->pc = 0x2abc30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2abc34: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x2abc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2abc38: 0xc0ac856  jal         func_2B2158
    ctx->pc = 0x2ABC38u;
    SET_GPR_U32(ctx, 31, 0x2ABC40u);
    ctx->pc = 0x2ABC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC38u;
    // 0x2abc3c: 0xc23023  subu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2158u, 0x2ABC38u, 0x2ABC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC40u;
label_2abc40:
    // 0x2abc40: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2abc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2abc44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2abc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc48: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2abc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2abc4c: 0x8ca3006c  lw          $v1, 0x6C($a1)
    ctx->pc = 0x2abc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x2abc50: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2abc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2abc54: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2abc54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2abc58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABC58u;
    {
        const bool branch_taken_0x2abc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC58u;
        // 0x2abc5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc58) {
            ctx->pc = 0x2ABC70u;
            goto label_2abc70;
        }
    }
    ctx->pc = 0x2ABC60u;
label_2abc60:
    // 0x2abc60: 0xc0acb86  jal         func_2B2E18
    ctx->pc = 0x2ABC60u;
    SET_GPR_U32(ctx, 31, 0x2ABC68u);
    ctx->pc = 0x2ABC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC60u;
    // 0x2abc64: 0x2405006e  addiu       $a1, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2E18u, 0x2ABC60u, 0x2ABC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC68u;
label_2abc68:
    // 0x2abc68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2ABC68u;
    {
        const bool branch_taken_0x2abc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC68u;
        // 0x2abc6c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc68) {
            ctx->pc = 0x2ABCB8u;
            goto label_2abcb8;
        }
    }
    ctx->pc = 0x2ABC70u;
label_2abc70:
    // 0x2abc70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2abc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc74: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x2abc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x2abc78: 0xc049c22  jal         func_127088
    ctx->pc = 0x2ABC78u;
    SET_GPR_U32(ctx, 31, 0x2ABC80u);
    ctx->pc = 0x2ABC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC78u;
    // 0x2abc7c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2ABC78u, 0x2ABC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC80u;
label_2abc80:
    // 0x2abc80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2ABC80u;
    {
        const bool branch_taken_0x2abc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC80u;
        // 0x2abc84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc80) {
            ctx->pc = 0x2ABCB0u;
            goto label_2abcb0;
        }
    }
    ctx->pc = 0x2ABC88u;
    // 0x2abc88: 0xc0acbea  jal         func_2B2FA8
    ctx->pc = 0x2ABC88u;
    SET_GPR_U32(ctx, 31, 0x2ABC90u);
    ctx->pc = 0x2ABC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC88u;
    // 0x2abc8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FA8u, 0x2ABC88u, 0x2ABC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC90u;
label_2abc90:
    // 0x2abc90: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2abc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2abc94: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x2abc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2abc98: 0x24060088  addiu       $a2, $zero, 0x88
    ctx->pc = 0x2abc98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_2abc9c:
    // 0x2abc9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2abc9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abca0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2ABCA0u;
    SET_GPR_U32(ctx, 31, 0x2ABCA8u);
    ctx->pc = 0x2ABCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABCA0u;
    // 0x2abca4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2ABCA0u, 0x2ABCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCA8u;
label_2abca8:
    // 0x2abca8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ABCA8u;
    {
        const bool branch_taken_0x2abca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCA8u;
        // 0x2abcac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abca8) {
            ctx->pc = 0x2ABCB4u;
            goto label_2abcb4;
        }
    }
    ctx->pc = 0x2ABCB0u;
label_2abcb0:
    // 0x2abcb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2abcb4:
    // 0x2abcb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2abcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2abcb8:
    // 0x2abcb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2abcb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2abcbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2abcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abcc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2abcc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCC4u;
        // 0x2abcc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABCCCu;
    // 0x2abccc: 0x0  nop
    ctx->pc = 0x2abcccu;
    // NOP
    if (ctx->pc == 0x2abcccu) { ctx->pc = 0x2abcd0u; }
}
