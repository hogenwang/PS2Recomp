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

// Function: sub_00184C40
// Address: 0x184c40 - 0x185050
void sub_00184C40_0x184c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184C40_0x184c40");
#endif

    switch (ctx->pc) {
        case 0x184c80u: goto label_184c80;
        case 0x184cdcu: goto label_184cdc;
        case 0x184cf0u: goto label_184cf0;
        case 0x184d78u: goto label_184d78;
        case 0x184d84u: goto label_184d84;
        case 0x184d8cu: goto label_184d8c;
        case 0x184dc8u: goto label_184dc8;
        case 0x184decu: goto label_184dec;
        case 0x184e18u: goto label_184e18;
        case 0x184e3cu: goto label_184e3c;
        case 0x184e68u: goto label_184e68;
        case 0x184e8cu: goto label_184e8c;
        case 0x184eb4u: goto label_184eb4;
        case 0x184f88u: goto label_184f88;
        case 0x184fc8u: goto label_184fc8;
        case 0x185010u: goto label_185010;
        case 0x185018u: goto label_185018;
        case 0x185020u: goto label_185020;
        case 0x185028u: goto label_185028;
        case 0x185030u: goto label_185030;
        default: break;
    }

    ctx->pc = 0x184c40u;

    // 0x184c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x184c44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x184c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x184c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184c4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184c50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x184c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c54: 0x8c820494  lw          $v0, 0x494($a0)
    ctx->pc = 0x184c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x184c58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x184c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x184c5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184C5Cu;
    {
        const bool branch_taken_0x184c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C5Cu;
        // 0x184c60: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c5c) {
            ctx->pc = 0x184C78u;
            goto label_184c78;
        }
    }
    ctx->pc = 0x184C64u;
    // 0x184c64: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x184c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x184c68: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x184c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x184c6c: 0x94620100  lhu         $v0, 0x100($v1)
    ctx->pc = 0x184c6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x184c70: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x184c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x184c74: 0xa4620100  sh          $v0, 0x100($v1)
    ctx->pc = 0x184c74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 2));
label_184c78:
    // 0x184c78: 0xc062804  jal         func_18A010
    ctx->pc = 0x184C78u;
    SET_GPR_U32(ctx, 31, 0x184C80u);
    ctx->pc = 0x184C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C78u;
    // 0x184c7c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x184C78u, 0x184C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C80u;
label_184c80:
    // 0x184c80: 0x8c430494  lw          $v1, 0x494($v0)
    ctx->pc = 0x184c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
    // 0x184c84: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x184c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x184c88: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x184C88u;
    {
        const bool branch_taken_0x184c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184c88) {
            ctx->pc = 0x184C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184C88u;
            // 0x184c8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184CA8u;
            goto label_184ca8;
        }
    }
    ctx->pc = 0x184C90u;
    // 0x184c90: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x184c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x184c94: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x184c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x184c98: 0x94830100  lhu         $v1, 0x100($a0)
    ctx->pc = 0x184c98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x184c9c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x184c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x184ca0: 0xa4830100  sh          $v1, 0x100($a0)
    ctx->pc = 0x184ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 3));
    // 0x184ca4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x184ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_184ca8:
    // 0x184ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x184CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CB0u;
        // 0x184cb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184CB8u;
    // 0x184cb8: 0x0  nop
    ctx->pc = 0x184cb8u;
    // NOP
    // 0x184cbc: 0x0  nop
    ctx->pc = 0x184cbcu;
    // NOP
    // 0x184cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x184cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x184cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x184cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184cd0: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x184cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x184cd4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x184CD4u;
    SET_GPR_U32(ctx, 31, 0x184CDCu);
    ctx->pc = 0x184CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184CD4u;
    // 0x184cd8: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x184CD4u, 0x184CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CDCu;
label_184cdc:
    // 0x184cdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x184cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184ce0: 0x5200002b  beql        $s0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x184CE0u;
    {
        const bool branch_taken_0x184ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ce0) {
            ctx->pc = 0x184CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184CE0u;
            // 0x184ce4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184D90u;
            goto label_184d90;
        }
    }
    ctx->pc = 0x184CE8u;
    // 0x184ce8: 0xc062810  jal         func_18A040
    ctx->pc = 0x184CE8u;
    SET_GPR_U32(ctx, 31, 0x184CF0u);
    ctx->pc = 0x184CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184CE8u;
    // 0x184cec: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x184CE8u, 0x184CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CF0u;
label_184cf0:
    // 0x184cf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x184cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184cf4: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x184CF4u;
    {
        const bool branch_taken_0x184cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x184cf4) {
            ctx->pc = 0x184D8Cu;
            goto label_184d8c;
        }
    }
    ctx->pc = 0x184CFCu;
    // 0x184cfc: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x184cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x184d00: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x184d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x184d04: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x184D04u;
    {
        const bool branch_taken_0x184d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184d04) {
            ctx->pc = 0x184D8Cu;
            goto label_184d8c;
        }
    }
    ctx->pc = 0x184D0Cu;
    // 0x184d0c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x184d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x184d10: 0x8c63a208  lw          $v1, -0x5DF8($v1)
    ctx->pc = 0x184d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943240)));
    // 0x184d14: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x184d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x184d18: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x184D18u;
    {
        const bool branch_taken_0x184d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184d18) {
            ctx->pc = 0x184D8Cu;
            goto label_184d8c;
        }
    }
    ctx->pc = 0x184D20u;
    // 0x184d20: 0x30830030  andi        $v1, $a0, 0x30
    ctx->pc = 0x184d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x184d24: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x184d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x184d28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x184d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x184d2c: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x184d2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x184d30: 0x2c61000e  sltiu       $at, $v1, 0xE
    ctx->pc = 0x184d30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x184d34: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x184D34u;
    {
        const bool branch_taken_0x184d34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184d34) {
            ctx->pc = 0x184D8Cu;
            goto label_184d8c;
        }
    }
    ctx->pc = 0x184D3Cu;
    // 0x184d3c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x184d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x184d40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x184d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x184d44: 0x2484e7a0  addiu       $a0, $a0, -0x1860
    ctx->pc = 0x184d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961056));
    // 0x184d48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x184d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x184d4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x184d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184d50: 0x600008  jr          $v1
    ctx->pc = 0x184D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184D58u: goto label_184d58;
            case 0x184D8Cu: goto label_184d8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184D50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x184D58u;
label_184d58:
    // 0x184d58: 0x8e23049c  lw          $v1, 0x49C($s1)
    ctx->pc = 0x184d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
    // 0x184d5c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x184d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x184d60: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x184d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x184d64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x184d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x184d68: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x184D68u;
    {
        const bool branch_taken_0x184d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184d68) {
            ctx->pc = 0x184D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184D68u;
            // 0x184d6c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184D7Cu;
            goto label_184d7c;
        }
    }
    ctx->pc = 0x184D70u;
    // 0x184d70: 0xc04ee44  jal         func_13B910
    ctx->pc = 0x184D70u;
    SET_GPR_U32(ctx, 31, 0x184D78u);
    ctx->pc = 0x184D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D70u;
    // 0x184d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B910u, 0x184D70u, 0x184D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D78u;
label_184d78:
    // 0x184d78: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x184d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_184d7c:
    // 0x184d7c: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x184D7Cu;
    SET_GPR_U32(ctx, 31, 0x184D84u);
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x184D7Cu, 0x184D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D84u;
label_184d84:
    // 0x184d84: 0xc05c9bc  jal         func_1726F0
    ctx->pc = 0x184D84u;
    SET_GPR_U32(ctx, 31, 0x184D8Cu);
    ctx->pc = 0x184D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D84u;
    // 0x184d88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1726F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1726F0u, 0x184D84u, 0x184D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184D8Cu;
label_184d8c:
    // 0x184d8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x184d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_184d90:
    // 0x184d90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184d90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184d94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184d98: 0x3e00008  jr          $ra
    ctx->pc = 0x184D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D98u;
        // 0x184d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184DA0u;
    // 0x184da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x184da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x184da4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x184da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x184da8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x184dac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184db0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184db4: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x184db4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x184db8: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x184db8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x184dbc: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x184dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x184dc0: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x184DC0u;
    SET_GPR_U32(ctx, 31, 0x184DC8u);
    ctx->pc = 0x184DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DC0u;
    // 0x184dc4: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADE0u, 0x184DC0u, 0x184DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184DC8u;
label_184dc8:
    // 0x184dc8: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x184dc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x184dcc: 0x32430010  andi        $v1, $s2, 0x10
    ctx->pc = 0x184dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x184dd0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x184DD0u;
    {
        const bool branch_taken_0x184dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184dd0) {
            ctx->pc = 0x184DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184DD0u;
            // 0x184dd4: 0x3243ffff  andi        $v1, $s2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x184DF0u;
            goto label_184df0;
        }
    }
    ctx->pc = 0x184DD8u;
    // 0x184dd8: 0x3242ffcb  andi        $v0, $s2, 0xFFCB
    ctx->pc = 0x184dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65483);
    // 0x184ddc: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x184ddcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x184de0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x184de0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x184de4: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x184DE4u;
    SET_GPR_U32(ctx, 31, 0x184DECu);
    ctx->pc = 0x184DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DE4u;
    // 0x184de8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE10u, 0x184DE4u, 0x184DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184DECu;
label_184dec:
    // 0x184dec: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x184decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_184df0:
    // 0x184df0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x184df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x184df4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x184DF4u;
    {
        const bool branch_taken_0x184df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184df4) {
            ctx->pc = 0x184DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184DF4u;
            // 0x184df8: 0x3243ffff  andi        $v1, $s2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x184E1Cu;
            goto label_184e1c;
        }
    }
    ctx->pc = 0x184DFCu;
    // 0x184dfc: 0x3242fff7  andi        $v0, $s2, 0xFFF7
    ctx->pc = 0x184dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65527);
    // 0x184e00: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x184e00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x184e04: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x184e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x184e08: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x184e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x184e0c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x184e0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x184e10: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x184E10u;
    SET_GPR_U32(ctx, 31, 0x184E18u);
    ctx->pc = 0x184E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184E10u;
    // 0x184e14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE10u, 0x184E10u, 0x184E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184E18u;
label_184e18:
    // 0x184e18: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x184e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_184e1c:
    // 0x184e1c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x184e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x184e20: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x184E20u;
    {
        const bool branch_taken_0x184e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e20) {
            ctx->pc = 0x184E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184E20u;
            // 0x184e24: 0x3243ffff  andi        $v1, $s2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x184E40u;
            goto label_184e40;
        }
    }
    ctx->pc = 0x184E28u;
    // 0x184e28: 0x3242fcbf  andi        $v0, $s2, 0xFCBF
    ctx->pc = 0x184e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64703);
    // 0x184e2c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x184e2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x184e30: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x184e30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x184e34: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x184E34u;
    SET_GPR_U32(ctx, 31, 0x184E3Cu);
    ctx->pc = 0x184E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184E34u;
    // 0x184e38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE10u, 0x184E34u, 0x184E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184E3Cu;
label_184e3c:
    // 0x184e3c: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x184e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_184e40:
    // 0x184e40: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x184e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x184e44: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x184E44u;
    {
        const bool branch_taken_0x184e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e44) {
            ctx->pc = 0x184E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184E44u;
            // 0x184e48: 0x3243ffff  andi        $v1, $s2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x184E6Cu;
            goto label_184e6c;
        }
    }
    ctx->pc = 0x184E4Cu;
    // 0x184e4c: 0x3242ff7f  andi        $v0, $s2, 0xFF7F
    ctx->pc = 0x184e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65407);
    // 0x184e50: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x184e50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x184e54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x184e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x184e58: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x184e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x184e5c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x184e5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x184e60: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x184E60u;
    SET_GPR_U32(ctx, 31, 0x184E68u);
    ctx->pc = 0x184E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184E60u;
    // 0x184e64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE10u, 0x184E60u, 0x184E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184E68u;
label_184e68:
    // 0x184e68: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x184e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_184e6c:
    // 0x184e6c: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x184e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x184e70: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x184E70u;
    {
        const bool branch_taken_0x184e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e70) {
            ctx->pc = 0x184E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184E70u;
            // 0x184e74: 0x3245ffff  andi        $a1, $s2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x184E90u;
            goto label_184e90;
        }
    }
    ctx->pc = 0x184E78u;
    // 0x184e78: 0x3242cbff  andi        $v0, $s2, 0xCBFF
    ctx->pc = 0x184e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)52223);
    // 0x184e7c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x184e7cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x184e80: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x184e80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x184e84: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x184E84u;
    SET_GPR_U32(ctx, 31, 0x184E8Cu);
    ctx->pc = 0x184E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184E84u;
    // 0x184e88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE10u, 0x184E84u, 0x184E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184E8Cu;
label_184e8c:
    // 0x184e8c: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x184e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_184e90:
    // 0x184e90: 0x30a30800  andi        $v1, $a1, 0x800
    ctx->pc = 0x184e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x184e94: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x184E94u;
    {
        const bool branch_taken_0x184e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e94) {
            ctx->pc = 0x184E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184E94u;
            // 0x184e98: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184EB8u;
            goto label_184eb8;
        }
    }
    ctx->pc = 0x184E9Cu;
    // 0x184e9c: 0x30a2f7ff  andi        $v0, $a1, 0xF7FF
    ctx->pc = 0x184e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63487);
    // 0x184ea0: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x184ea0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x184ea4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x184ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x184ea8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x184ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x184eac: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x184EACu;
    SET_GPR_U32(ctx, 31, 0x184EB4u);
    ctx->pc = 0x184EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184EACu;
    // 0x184eb0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE10u, 0x184EACu, 0x184EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184EB4u;
label_184eb4:
    // 0x184eb4: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x184eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_184eb8:
    // 0x184eb8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x184eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x184ebc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x184ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x184ec0: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x184ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x184ec4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x184ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x184ec8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x184ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x184ecc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x184eccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x184ed0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x184ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x184ed4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x184ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x184ed8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x184ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184edc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x184edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184ee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x184EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EE8u;
        // 0x184eec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184EF0u;
    // 0x184ef0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x184ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x184ef4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x184ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x184ef8: 0x2463dbb4  addiu       $v1, $v1, -0x244C
    ctx->pc = 0x184ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958004));
    // 0x184efc: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x184efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x184f00: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x184f00u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184f04: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x184f04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x184f08: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x184f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x184f0c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x184f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x184f10: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x184f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x184f14: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x184f14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x184f18: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x184f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x184f1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x184f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184f20: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x184f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x184f24: 0x94a303a4  lhu         $v1, 0x3A4($a1)
    ctx->pc = 0x184f24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 932)));
    // 0x184f28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x184f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x184f2c: 0x805f6b0  j           func_17DAC0
    ctx->pc = 0x184F2Cu;
    ctx->pc = 0x184F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184F2Cu;
    // 0x184f30: 0xa4a203a4  sh          $v0, 0x3A4($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DAC0u;
    sub_0017DAC0_0x17dac0(rdram, ctx, runtime); return;
    ctx->pc = 0x184F34u;
    // 0x184f34: 0x0  nop
    ctx->pc = 0x184f34u;
    // NOP
    // 0x184f38: 0x0  nop
    ctx->pc = 0x184f38u;
    // NOP
    // 0x184f3c: 0x0  nop
    ctx->pc = 0x184f3cu;
    // NOP
    // 0x184f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x184f44: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x184f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x184f48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x184f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x184f4c: 0x2442db60  addiu       $v0, $v0, -0x24A0
    ctx->pc = 0x184f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957920));
    // 0x184f50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184f54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184f58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x184f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f5c: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x184f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x184f60: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x184f60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f68: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x184f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x184f6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x184f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x184f70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x184f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x184f74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x184f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x184f78: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x184f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x184f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x184f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x184f80: 0xc05f60c  jal         func_17D830
    ctx->pc = 0x184F80u;
    SET_GPR_U32(ctx, 31, 0x184F88u);
    ctx->pc = 0x184F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184F80u;
    // 0x184f84: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D830u, 0x184F80u, 0x184F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F88u;
label_184f88:
    // 0x184f88: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x184f88u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184f8c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x184f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x184f90: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x184f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x184f94: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x184f94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x184f98: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x184f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x184f9c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x184f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x184fa0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x184fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x184fa4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x184fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x184fa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x184fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x184fac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x184facu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184fb0: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x184FB0u;
    {
        const bool branch_taken_0x184fb0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x184FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184FB0u;
        // 0x184fb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fb0) {
            ctx->pc = 0x185008u;
            goto label_185008;
        }
    }
    ctx->pc = 0x184FB8u;
    // 0x184fb8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x184fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x184fbc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x184fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x184fc0: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x184fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x184fc4: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x184fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_184fc8:
    // 0x184fc8: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x184fc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x184fcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x184fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184fd0: 0xa0a3000a  sb          $v1, 0xA($a1)
    ctx->pc = 0x184fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x184fd4: 0xa0a60010  sb          $a2, 0x10($a1)
    ctx->pc = 0x184fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x184fd8: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x184fd8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184fdc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x184fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x184fe0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x184fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x184fe4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x184fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x184fe8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x184fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x184fec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x184fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x184ff0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x184ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x184ff4: 0x90630005  lbu         $v1, 0x5($v1)
    ctx->pc = 0x184ff4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x184ff8: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x184ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x184ffc: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x184FFCu;
    {
        const bool branch_taken_0x184ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184ffc) {
            ctx->pc = 0x185000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184FFCu;
            // 0x185000: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_184fc8;
        }
    }
    ctx->pc = 0x185004u;
    // 0x185004: 0x0  nop
    ctx->pc = 0x185004u;
    // NOP
label_185008:
    // 0x185008: 0xc052a3c  jal         func_14A8F0
    ctx->pc = 0x185008u;
    SET_GPR_U32(ctx, 31, 0x185010u);
    ctx->pc = 0x18500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185008u;
    // 0x18500c: 0x2604001e  addiu       $a0, $s0, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8F0u, 0x185008u, 0x185010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185010u;
label_185010:
    // 0x185010: 0xc0614a8  jal         func_1852A0
    ctx->pc = 0x185010u;
    SET_GPR_U32(ctx, 31, 0x185018u);
    ctx->pc = 0x185014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185010u;
    // 0x185014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1852A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1852A0u, 0x185010u, 0x185018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185018u;
label_185018:
    // 0x185018: 0xc0615c8  jal         func_185720
    ctx->pc = 0x185018u;
    SET_GPR_U32(ctx, 31, 0x185020u);
    ctx->pc = 0x18501Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185018u;
    // 0x18501c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185720u, 0x185018u, 0x185020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185020u;
label_185020:
    // 0x185020: 0xc05f654  jal         func_17D950
    ctx->pc = 0x185020u;
    SET_GPR_U32(ctx, 31, 0x185028u);
    ctx->pc = 0x185024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185020u;
    // 0x185024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D950u, 0x185020u, 0x185028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185028u;
label_185028:
    // 0x185028: 0xc061414  jal         func_185050
    ctx->pc = 0x185028u;
    SET_GPR_U32(ctx, 31, 0x185030u);
    ctx->pc = 0x18502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185028u;
    // 0x18502c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185050u, 0x185028u, 0x185030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185030u;
label_185030:
    // 0x185030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x185030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18503c: 0x3e00008  jr          $ra
    ctx->pc = 0x18503Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18503Cu;
        // 0x185040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18503Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185044u;
    // 0x185044: 0x0  nop
    ctx->pc = 0x185044u;
    // NOP
    // 0x185048: 0x0  nop
    ctx->pc = 0x185048u;
    // NOP
    // 0x18504c: 0x0  nop
    ctx->pc = 0x18504cu;
    // NOP
    if (ctx->pc == 0x18504cu) { ctx->pc = 0x185050u; }
}
