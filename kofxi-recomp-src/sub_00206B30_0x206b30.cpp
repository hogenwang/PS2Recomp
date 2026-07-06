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

// Function: sub_00206B30
// Address: 0x206b30 - 0x206df0
void sub_00206B30_0x206b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206B30_0x206b30");
#endif

    switch (ctx->pc) {
        case 0x206cfcu: goto label_206cfc;
        case 0x206d28u: goto label_206d28;
        case 0x206d54u: goto label_206d54;
        case 0x206d80u: goto label_206d80;
        case 0x206dacu: goto label_206dac;
        case 0x206dd8u: goto label_206dd8;
        default: break;
    }

    ctx->pc = 0x206b30u;

    // 0x206b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x206b34: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x206b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x206b38: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x206b38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x206b3c: 0xa36821  addu        $t5, $a1, $v1
    ctx->pc = 0x206b3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x206b40: 0x65100  sll         $t2, $a2, 4
    ctx->pc = 0x206b40u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x206b44: 0x31230002  andi        $v1, $t1, 0x2
    ctx->pc = 0x206b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x206b48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x206b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x206b4c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x206B4Cu;
    {
        const bool branch_taken_0x206b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B4Cu;
        // 0x206b50: 0x8a7021  addu        $t6, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b4c) {
            ctx->pc = 0x206BC4u;
            goto label_206bc4;
        }
    }
    ctx->pc = 0x206B54u;
    // 0x206b54: 0x29c30040  slti        $v1, $t6, 0x40
    ctx->pc = 0x206b54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x206b58: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x206b58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x206b5c: 0x1460009e  bnez        $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x206B5Cu;
    {
        const bool branch_taken_0x206b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B5Cu;
        // 0x206b60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b5c) {
            ctx->pc = 0x206DD8u;
            goto label_206dd8;
        }
    }
    ctx->pc = 0x206B64u;
    // 0x206b64: 0x29c10131  slti        $at, $t6, 0x131
    ctx->pc = 0x206b64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)305) ? 1 : 0);
    // 0x206b68: 0x54200008  bnel        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x206B68u;
    {
        const bool branch_taken_0x206b68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x206b68) {
            ctx->pc = 0x206B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206B68u;
            // 0x206b6c: 0x28810040  slti        $at, $a0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206B8Cu;
            goto label_206b8c;
        }
    }
    ctx->pc = 0x206B70u;
    // 0x206b70: 0x25c3fed0  addiu       $v1, $t6, -0x130
    ctx->pc = 0x206b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966992));
    // 0x206b74: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206B74u;
    {
        const bool branch_taken_0x206b74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x206B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B74u;
        // 0x206b78: 0x35043  sra         $t2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b74) {
            ctx->pc = 0x206B84u;
            goto label_206b84;
        }
    }
    ctx->pc = 0x206B7Cu;
    // 0x206b7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x206b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206b80: 0x35043  sra         $t2, $v1, 1
    ctx->pc = 0x206b80u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 1));
label_206b84:
    // 0x206b84: 0x240e0130  addiu       $t6, $zero, 0x130
    ctx->pc = 0x206b84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x206b88: 0x28810040  slti        $at, $a0, 0x40
    ctx->pc = 0x206b88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
label_206b8c:
    // 0x206b8c: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x206B8Cu;
    {
        const bool branch_taken_0x206b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206b8c) {
            ctx->pc = 0x206B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206B8Cu;
            // 0x206b90: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206BB8u;
            goto label_206bb8;
        }
    }
    ctx->pc = 0x206B94u;
    // 0x206b94: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x206b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x206b98: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x206b98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x206b9c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206B9Cu;
    {
        const bool branch_taken_0x206b9c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x206BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B9Cu;
        // 0x206ba0: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b9c) {
            ctx->pc = 0x206BACu;
            goto label_206bac;
        }
    }
    ctx->pc = 0x206BA4u;
    // 0x206ba4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x206ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x206ba8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x206ba8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_206bac:
    // 0x206bac: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x206bacu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x206bb0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x206bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x206bb4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x206bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_206bb8:
    // 0x206bb8: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x206bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x206bbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x206BBCu;
    {
        const bool branch_taken_0x206bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BBCu;
        // 0x206bc0: 0x246cfff8  addiu       $t4, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206bbc) {
            ctx->pc = 0x206BD4u;
            goto label_206bd4;
        }
    }
    ctx->pc = 0x206BC4u;
label_206bc4:
    // 0x206bc4: 0x619c0  sll         $v1, $a2, 7
    ctx->pc = 0x206bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x206bc8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x206bc8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bcc: 0x246a0008  addiu       $t2, $v1, 0x8
    ctx->pc = 0x206bccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x206bd0: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x206bd0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_206bd4:
    // 0x206bd4: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x206bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x206bd8: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x206BD8u;
    {
        const bool branch_taken_0x206bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206bd8) {
            ctx->pc = 0x206BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206BD8u;
            // 0x206bdc: 0x758c0  sll         $t3, $a3, 3 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206C48u;
            goto label_206c48;
        }
    }
    ctx->pc = 0x206BE0u;
    // 0x206be0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x206be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x206be4: 0x28a10050  slti        $at, $a1, 0x50
    ctx->pc = 0x206be4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x206be8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x206be8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bec: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x206BECu;
    {
        const bool branch_taken_0x206bec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x206BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BECu;
        // 0x206bf0: 0x2466fff8  addiu       $a2, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206bec) {
            ctx->pc = 0x206C14u;
            goto label_206c14;
        }
    }
    ctx->pc = 0x206BF4u;
    // 0x206bf4: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x206bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x206bf8: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x206bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x206bfc: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206BFCu;
    {
        const bool branch_taken_0x206bfc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x206C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BFCu;
        // 0x206c00: 0x51843  sra         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206bfc) {
            ctx->pc = 0x206C0Cu;
            goto label_206c0c;
        }
    }
    ctx->pc = 0x206C04u;
    // 0x206c04: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x206c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x206c08: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x206c08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_206c0c:
    // 0x206c0c: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x206c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x206c10: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x206c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_206c14:
    // 0x206c14: 0x29a10191  slti        $at, $t5, 0x191
    ctx->pc = 0x206c14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x206c18: 0x54200008  bnel        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x206C18u;
    {
        const bool branch_taken_0x206c18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x206c18) {
            ctx->pc = 0x206C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C18u;
            // 0x206c1c: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206C3Cu;
            goto label_206c3c;
        }
    }
    ctx->pc = 0x206C20u;
    // 0x206c20: 0x25a3fe70  addiu       $v1, $t5, -0x190
    ctx->pc = 0x206c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 4294966896));
    // 0x206c24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206C24u;
    {
        const bool branch_taken_0x206c24 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x206C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C24u;
        // 0x206c28: 0x35843  sra         $t3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c24) {
            ctx->pc = 0x206C34u;
            goto label_206c34;
        }
    }
    ctx->pc = 0x206C2Cu;
    // 0x206c2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x206c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206c30: 0x35843  sra         $t3, $v1, 1
    ctx->pc = 0x206c30u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 1));
label_206c34:
    // 0x206c34: 0x240d0190  addiu       $t5, $zero, 0x190
    ctx->pc = 0x206c34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x206c38: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x206c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_206c3c:
    // 0x206c3c: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x206c3cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x206c40: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x206C40u;
    {
        const bool branch_taken_0x206c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C40u;
        // 0x206c44: 0x2469fff8  addiu       $t1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c40) {
            ctx->pc = 0x206CA4u;
            goto label_206ca4;
        }
    }
    ctx->pc = 0x206C48u;
label_206c48:
    // 0x206c48: 0x28a10050  slti        $at, $a1, 0x50
    ctx->pc = 0x206c48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x206c4c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x206C4Cu;
    {
        const bool branch_taken_0x206c4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C4Cu;
        // 0x206c50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c4c) {
            ctx->pc = 0x206C70u;
            goto label_206c70;
        }
    }
    ctx->pc = 0x206C54u;
    // 0x206c54: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x206c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x206c58: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x206c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x206c5c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206C5Cu;
    {
        const bool branch_taken_0x206c5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x206C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C5Cu;
        // 0x206c60: 0x33843  sra         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c5c) {
            ctx->pc = 0x206C6Cu;
            goto label_206c6c;
        }
    }
    ctx->pc = 0x206C64u;
    // 0x206c64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x206c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206c68: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x206c68u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
label_206c6c:
    // 0x206c6c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x206c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_206c70:
    // 0x206c70: 0x29a101a1  slti        $at, $t5, 0x1A1
    ctx->pc = 0x206c70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)417) ? 1 : 0);
    // 0x206c74: 0x54200009  bnel        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x206C74u;
    {
        const bool branch_taken_0x206c74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x206c74) {
            ctx->pc = 0x206C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C74u;
            // 0x206c78: 0x71900  sll         $v1, $a3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206C9Cu;
            goto label_206c9c;
        }
    }
    ctx->pc = 0x206C7Cu;
    // 0x206c7c: 0x25a6fe60  addiu       $a2, $t5, -0x1A0
    ctx->pc = 0x206c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 4294966880));
    // 0x206c80: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x206C80u;
    {
        const bool branch_taken_0x206c80 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x206C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C80u;
        // 0x206c84: 0x61843  sra         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c80) {
            ctx->pc = 0x206C90u;
            goto label_206c90;
        }
    }
    ctx->pc = 0x206C88u;
    // 0x206c88: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x206c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x206c8c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x206c8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_206c90:
    // 0x206c90: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x206c90u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x206c94: 0x240d01a0  addiu       $t5, $zero, 0x1A0
    ctx->pc = 0x206c94u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x206c98: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x206c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_206c9c:
    // 0x206c9c: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x206c9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x206ca0: 0x24690008  addiu       $t1, $v1, 0x8
    ctx->pc = 0x206ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_206ca4:
    // 0x206ca4: 0x3c06009d  lui         $a2, 0x9D
    ctx->pc = 0x206ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)157 << 16));
    // 0x206ca8: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x206ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x206cac: 0x90c6b281  lbu         $a2, -0x4D7F($a2)
    ctx->pc = 0x206cacu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294947457)));
    // 0x206cb0: 0x2cc10006  sltiu       $at, $a2, 0x6
    ctx->pc = 0x206cb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x206cb4: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x206CB4u;
    {
        const bool branch_taken_0x206cb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x206CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CB4u;
        // 0x206cb8: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cb4) {
            ctx->pc = 0x206DD8u;
            goto label_206dd8;
        }
    }
    ctx->pc = 0x206CBCu;
    // 0x206cbc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x206cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x206cc0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x206cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x206cc4: 0x24e7f7e0  addiu       $a3, $a3, -0x820
    ctx->pc = 0x206cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965216));
    // 0x206cc8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x206cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x206ccc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x206cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x206cd0: 0xc00008  jr          $a2
    ctx->pc = 0x206CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206CD8u: goto label_206cd8;
            case 0x206D04u: goto label_206d04;
            case 0x206D30u: goto label_206d30;
            case 0x206D5Cu: goto label_206d5c;
            case 0x206D88u: goto label_206d88;
            case 0x206DB4u: goto label_206db4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206CD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x206CD8u;
label_206cd8:
    // 0x206cd8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x206cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x206cdc: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x206cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ce0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x206ce4: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x206ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ce8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x206cec: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x206cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206cf0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x206cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x206cf4: 0xc0cb83c  jal         func_32E0F0
    ctx->pc = 0x206CF4u;
    SET_GPR_U32(ctx, 31, 0x206CFCu);
    ctx->pc = 0x206CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CF4u;
    // 0x206cf8: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E0F0u, 0x206CF4u, 0x206CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206CFCu;
label_206cfc:
    // 0x206cfc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x206CFCu;
    {
        const bool branch_taken_0x206cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CFCu;
        // 0x206d00: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cfc) {
            ctx->pc = 0x206DDCu;
            goto label_206ddc;
        }
    }
    ctx->pc = 0x206D04u;
label_206d04:
    // 0x206d04: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x206d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x206d08: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x206d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d0c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x206d10: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x206d10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d14: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x206d18: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x206d18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d1c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x206d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x206d20: 0xc0cb8d8  jal         func_32E360
    ctx->pc = 0x206D20u;
    SET_GPR_U32(ctx, 31, 0x206D28u);
    ctx->pc = 0x206D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D20u;
    // 0x206d24: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E360u, 0x206D20u, 0x206D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D28u;
label_206d28:
    // 0x206d28: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x206D28u;
    {
        const bool branch_taken_0x206d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d28) {
            ctx->pc = 0x206DD8u;
            goto label_206dd8;
        }
    }
    ctx->pc = 0x206D30u;
label_206d30:
    // 0x206d30: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x206d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x206d34: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x206d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d38: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x206d3c: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x206d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d40: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x206d44: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x206d44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d48: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x206d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x206d4c: 0xc0cb978  jal         func_32E5E0
    ctx->pc = 0x206D4Cu;
    SET_GPR_U32(ctx, 31, 0x206D54u);
    ctx->pc = 0x206D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D4Cu;
    // 0x206d50: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E5E0u, 0x206D4Cu, 0x206D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D54u;
label_206d54:
    // 0x206d54: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x206D54u;
    {
        const bool branch_taken_0x206d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d54) {
            ctx->pc = 0x206DD8u;
            goto label_206dd8;
        }
    }
    ctx->pc = 0x206D5Cu;
label_206d5c:
    // 0x206d5c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x206d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x206d60: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x206d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d64: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x206d68: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x206d68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d6c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x206d70: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x206d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d74: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x206d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x206d78: 0xc0cba84  jal         func_32EA10
    ctx->pc = 0x206D78u;
    SET_GPR_U32(ctx, 31, 0x206D80u);
    ctx->pc = 0x206D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D78u;
    // 0x206d7c: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA10u, 0x206D78u, 0x206D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D80u;
label_206d80:
    // 0x206d80: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x206D80u;
    {
        const bool branch_taken_0x206d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d80) {
            ctx->pc = 0x206DD8u;
            goto label_206dd8;
        }
    }
    ctx->pc = 0x206D88u;
label_206d88:
    // 0x206d88: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x206d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x206d8c: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x206d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d90: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x206d94: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x206d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d98: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x206d9c: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x206d9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206da0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x206da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x206da4: 0xc0cbb8c  jal         func_32EE30
    ctx->pc = 0x206DA4u;
    SET_GPR_U32(ctx, 31, 0x206DACu);
    ctx->pc = 0x206DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DA4u;
    // 0x206da8: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EE30u, 0x206DA4u, 0x206DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DACu;
label_206dac:
    // 0x206dac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x206DACu;
    {
        const bool branch_taken_0x206dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206dac) {
            ctx->pc = 0x206DD8u;
            goto label_206dd8;
        }
    }
    ctx->pc = 0x206DB4u;
label_206db4:
    // 0x206db4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x206db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x206db8: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x206db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dbc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x206dc0: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x206dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dc4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x206dc8: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x206dc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206dcc: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x206dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x206dd0: 0xc0cbc94  jal         func_32F250
    ctx->pc = 0x206DD0u;
    SET_GPR_U32(ctx, 31, 0x206DD8u);
    ctx->pc = 0x206DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DD0u;
    // 0x206dd4: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F250u, 0x206DD0u, 0x206DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DD8u;
label_206dd8:
    // 0x206dd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_206ddc:
    // 0x206ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x206DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DDCu;
        // 0x206de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206DE4u;
    // 0x206de4: 0x0  nop
    ctx->pc = 0x206de4u;
    // NOP
    // 0x206de8: 0x0  nop
    ctx->pc = 0x206de8u;
    // NOP
    // 0x206dec: 0x0  nop
    ctx->pc = 0x206decu;
    // NOP
    if (ctx->pc == 0x206decu) { ctx->pc = 0x206df0u; }
}
