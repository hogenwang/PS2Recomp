#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4B50
// Address: 0x1e4b50 - 0x1e5240
void sub_001E4B50_0x1e4b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4B50_0x1e4b50");
#endif

    switch (ctx->pc) {
        case 0x1e4b80u: goto label_1e4b80;
        case 0x1e4b94u: goto label_1e4b94;
        case 0x1e4ba8u: goto label_1e4ba8;
        case 0x1e4bc8u: goto label_1e4bc8;
        case 0x1e4becu: goto label_1e4bec;
        case 0x1e4c18u: goto label_1e4c18;
        case 0x1e4c3cu: goto label_1e4c3c;
        case 0x1e4c50u: goto label_1e4c50;
        case 0x1e4c88u: goto label_1e4c88;
        case 0x1e4cacu: goto label_1e4cac;
        case 0x1e4cd8u: goto label_1e4cd8;
        case 0x1e4cfcu: goto label_1e4cfc;
        case 0x1e4d28u: goto label_1e4d28;
        case 0x1e4d48u: goto label_1e4d48;
        case 0x1e4d60u: goto label_1e4d60;
        case 0x1e4d80u: goto label_1e4d80;
        case 0x1e4d90u: goto label_1e4d90;
        case 0x1e4da4u: goto label_1e4da4;
        case 0x1e4db0u: goto label_1e4db0;
        case 0x1e4dc8u: goto label_1e4dc8;
        case 0x1e4de8u: goto label_1e4de8;
        case 0x1e4e00u: goto label_1e4e00;
        case 0x1e4e20u: goto label_1e4e20;
        case 0x1e4e30u: goto label_1e4e30;
        case 0x1e4e44u: goto label_1e4e44;
        case 0x1e4e50u: goto label_1e4e50;
        case 0x1e4e68u: goto label_1e4e68;
        case 0x1e4e80u: goto label_1e4e80;
        case 0x1e4e98u: goto label_1e4e98;
        case 0x1e4eb0u: goto label_1e4eb0;
        case 0x1e4ec8u: goto label_1e4ec8;
        case 0x1e4ee0u: goto label_1e4ee0;
        case 0x1e4ef8u: goto label_1e4ef8;
        case 0x1e4f14u: goto label_1e4f14;
        case 0x1e4f40u: goto label_1e4f40;
        case 0x1e4f48u: goto label_1e4f48;
        case 0x1e4f68u: goto label_1e4f68;
        case 0x1e4f7cu: goto label_1e4f7c;
        case 0x1e4f94u: goto label_1e4f94;
        case 0x1e4fa8u: goto label_1e4fa8;
        case 0x1e4fb0u: goto label_1e4fb0;
        case 0x1e4fc8u: goto label_1e4fc8;
        case 0x1e4fdcu: goto label_1e4fdc;
        case 0x1e4ff8u: goto label_1e4ff8;
        case 0x1e5014u: goto label_1e5014;
        case 0x1e5040u: goto label_1e5040;
        case 0x1e5048u: goto label_1e5048;
        case 0x1e5068u: goto label_1e5068;
        case 0x1e507cu: goto label_1e507c;
        case 0x1e5094u: goto label_1e5094;
        case 0x1e50a8u: goto label_1e50a8;
        case 0x1e50b0u: goto label_1e50b0;
        case 0x1e50c8u: goto label_1e50c8;
        case 0x1e50e0u: goto label_1e50e0;
        case 0x1e5154u: goto label_1e5154;
        case 0x1e517cu: goto label_1e517c;
        case 0x1e5188u: goto label_1e5188;
        case 0x1e5198u: goto label_1e5198;
        case 0x1e51c8u: goto label_1e51c8;
        case 0x1e51e0u: goto label_1e51e0;
        case 0x1e51f8u: goto label_1e51f8;
        case 0x1e5210u: goto label_1e5210;
        case 0x1e5228u: goto label_1e5228;
        default: break;
    }

    ctx->pc = 0x1e4b50u;

    // 0x1e4b50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e4b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1e4b54: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1e4b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1e4b58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b5c: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x1e4b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x1e4b60: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x1e4b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x1e4b64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e4b64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b68: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x1e4b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x1e4b6c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e4b6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b70: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x1e4b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x1e4b74: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x1e4b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x1e4b78: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4B78u;
    SET_GPR_U32(ctx, 31, 0x1E4B80u);
    ctx->pc = 0x1E4B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B78u;
            // 0x1e4b7c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B80u; }
        if (ctx->pc != 0x1E4B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B80u; }
        if (ctx->pc != 0x1E4B80u) { return; }
    }
    ctx->pc = 0x1E4B80u;
label_1e4b80:
    // 0x1e4b80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e4b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e4b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b8c: 0xc078e9a  jal         func_1E3A68
    ctx->pc = 0x1E4B8Cu;
    SET_GPR_U32(ctx, 31, 0x1E4B94u);
    ctx->pc = 0x1E4B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B8Cu;
            // 0x1e4b90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A68u;
    if (runtime->hasFunction(0x1E3A68u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B94u; }
        if (ctx->pc != 0x1E4B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A68_0x1e3a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B94u; }
        if (ctx->pc != 0x1E4B94u) { return; }
    }
    ctx->pc = 0x1E4B94u;
label_1e4b94:
    // 0x1e4b94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b98: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e4b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b9c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e4b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ba0: 0xc0806d8  jal         func_201B60
    ctx->pc = 0x1E4BA0u;
    SET_GPR_U32(ctx, 31, 0x1E4BA8u);
    ctx->pc = 0x1E4BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BA0u;
            // 0x1e4ba4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201B60u;
    if (runtime->hasFunction(0x201B60u)) {
        auto targetFn = runtime->lookupFunction(0x201B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BA8u; }
        if (ctx->pc != 0x1E4BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201B60_0x201b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BA8u; }
        if (ctx->pc != 0x1E4BA8u) { return; }
    }
    ctx->pc = 0x1E4BA8u;
label_1e4ba8:
    // 0x1e4ba8: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1e4ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e4bac: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x1e4bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4bb0: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x1e4bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4bb4: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x1e4bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e4bb8: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x1e4bb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e4bbc: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1e4bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e4bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BC0u;
            // 0x1e4bc4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4BC8u;
label_1e4bc8:
    // 0x1e4bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4bd0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1e4bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4bd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e4bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e4bd8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e4bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4bdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e4bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e4be0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e4be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e4be4: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4BE4u;
    SET_GPR_U32(ctx, 31, 0x1E4BECu);
    ctx->pc = 0x1E4BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BE4u;
            // 0x1e4be8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BECu; }
        if (ctx->pc != 0x1E4BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BECu; }
        if (ctx->pc != 0x1E4BECu) { return; }
    }
    ctx->pc = 0x1E4BECu;
label_1e4bec:
    // 0x1e4bec: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x1e4becu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x1e4bf0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e4bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4bf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4bf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4bfc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e4bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e4c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4c04: 0x2e070001  sltiu       $a3, $s0, 0x1
    ctx->pc = 0x1e4c04u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e4c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c10: 0x80806e0  j           func_201B80
    ctx->pc = 0x1E4C10u;
    ctx->pc = 0x1E4C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C10u;
            // 0x1e4c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201B80u;
    {
        auto targetFn = runtime->lookupFunction(0x201B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E4C18u;
label_1e4c18:
    // 0x1e4c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e4c1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e4c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e4c20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e4c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c24: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e4c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e4c28: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e4c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c2c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e4c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e4c30: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e4c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e4c34: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4C34u;
    SET_GPR_U32(ctx, 31, 0x1E4C3Cu);
    ctx->pc = 0x1E4C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C34u;
            // 0x1e4c38: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C3Cu; }
        if (ctx->pc != 0x1E4C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C3Cu; }
        if (ctx->pc != 0x1E4C3Cu) { return; }
    }
    ctx->pc = 0x1E4C3Cu;
label_1e4c3c:
    // 0x1e4c3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e4c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4c44: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1e4c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e4c48: 0xc0806e6  jal         func_201B98
    ctx->pc = 0x1E4C48u;
    SET_GPR_U32(ctx, 31, 0x1E4C50u);
    ctx->pc = 0x1E4C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C48u;
            // 0x1e4c4c: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201B98u;
    if (runtime->hasFunction(0x201B98u)) {
        auto targetFn = runtime->lookupFunction(0x201B98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C50u; }
        if (ctx->pc != 0x1E4C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201B98_0x201b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C50u; }
        if (ctx->pc != 0x1E4C50u) { return; }
    }
    ctx->pc = 0x1E4C50u;
label_1e4c50:
    // 0x1e4c50: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4c54: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1e4c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e4c58: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e4c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4c5c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1e4c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e4c60: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1e4c60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e4c64: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e4c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e4c68: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1e4c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1e4c6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e4c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e4c70: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1e4c70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x1e4c74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e4c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4c78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e4c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4c7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e4c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4c80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C80u;
            // 0x1e4c84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4C88u;
label_1e4c88:
    // 0x1e4c88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4c90: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1e4c90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e4c94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e4c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e4c98: 0x30d100ff  andi        $s1, $a2, 0xFF
    ctx->pc = 0x1e4c98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1e4c9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e4c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e4ca0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e4ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e4ca4: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4CA4u;
    SET_GPR_U32(ctx, 31, 0x1E4CACu);
    ctx->pc = 0x1E4CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CA4u;
            // 0x1e4ca8: 0x30f200ff  andi        $s2, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CACu; }
        if (ctx->pc != 0x1E4CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CACu; }
        if (ctx->pc != 0x1E4CACu) { return; }
    }
    ctx->pc = 0x1E4CACu;
label_1e4cac:
    // 0x1e4cac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e4cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4cb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4cb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e4cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4cb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4cbc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e4cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4cc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e4cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ccc: 0x80806ec  j           func_201BB0
    ctx->pc = 0x1E4CCCu;
    ctx->pc = 0x1E4CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CCCu;
            // 0x1e4cd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201BB0u;
    {
        auto targetFn = runtime->lookupFunction(0x201BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E4CD4u;
    // 0x1e4cd4: 0x0  nop
    ctx->pc = 0x1e4cd4u;
    // NOP
label_1e4cd8:
    // 0x1e4cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4ce0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e4ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e4ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e4ce8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e4ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4cec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e4cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e4cf0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e4cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e4cf4: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4CF4u;
    SET_GPR_U32(ctx, 31, 0x1E4CFCu);
    ctx->pc = 0x1E4CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CF4u;
            // 0x1e4cf8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CFCu; }
        if (ctx->pc != 0x1E4CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CFCu; }
        if (ctx->pc != 0x1E4CFCu) { return; }
    }
    ctx->pc = 0x1E4CFCu;
label_1e4cfc:
    // 0x1e4cfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e4cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4d00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4d04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e4d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4d08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4d0c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e4d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4d10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e4d10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4d18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4d1c: 0x80806fc  j           func_201BF0
    ctx->pc = 0x1E4D1Cu;
    ctx->pc = 0x1E4D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D1Cu;
            // 0x1e4d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201BF0u;
    {
        auto targetFn = runtime->lookupFunction(0x201BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E4D24u;
    // 0x1e4d24: 0x0  nop
    ctx->pc = 0x1e4d24u;
    // NOP
label_1e4d28:
    // 0x1e4d28: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e4d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e4d2c: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x1e4d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x1e4d30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4d34: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x1e4d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x1e4d38: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1e4d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1e4d3c: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x1e4d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x1e4d40: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E4D40u;
    SET_GPR_U32(ctx, 31, 0x1E4D48u);
    ctx->pc = 0x1E4D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D40u;
            // 0x1e4d44: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D48u; }
        if (ctx->pc != 0x1E4D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D48u; }
        if (ctx->pc != 0x1E4D48u) { return; }
    }
    ctx->pc = 0x1E4D48u;
label_1e4d48:
    // 0x1e4d48: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e4d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e4d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4d50: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4D50u;
    {
        const bool branch_taken_0x1e4d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E4D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D50u;
            // 0x1e4d54: 0x2484df38  addiu       $a0, $a0, -0x20C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d50) {
            ctx->pc = 0x1E4D68u;
            goto label_1e4d68;
        }
    }
    ctx->pc = 0x1E4D58u;
    // 0x1e4d58: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E4D58u;
    SET_GPR_U32(ctx, 31, 0x1E4D60u);
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D60u; }
        if (ctx->pc != 0x1E4D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D60u; }
        if (ctx->pc != 0x1E4D60u) { return; }
    }
    ctx->pc = 0x1E4D60u;
label_1e4d60:
    // 0x1e4d60: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E4D60u;
    {
        const bool branch_taken_0x1e4d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D60u;
            // 0x1e4d64: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d60) {
            ctx->pc = 0x1E4DB4u;
            goto label_1e4db4;
        }
    }
    ctx->pc = 0x1E4D68u;
label_1e4d68:
    // 0x1e4d68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e4d6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4D6Cu;
    {
        const bool branch_taken_0x1e4d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d6c) {
            ctx->pc = 0x1E4D88u;
            goto label_1e4d88;
        }
    }
    ctx->pc = 0x1E4D74u;
    // 0x1e4d74: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e4d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e4d78: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E4D78u;
    SET_GPR_U32(ctx, 31, 0x1E4D80u);
    ctx->pc = 0x1E4D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D78u;
            // 0x1e4d7c: 0x2484df68  addiu       $a0, $a0, -0x2098 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D80u; }
        if (ctx->pc != 0x1E4D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D80u; }
        if (ctx->pc != 0x1E4D80u) { return; }
    }
    ctx->pc = 0x1E4D80u;
label_1e4d80:
    // 0x1e4d80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E4D80u;
    {
        const bool branch_taken_0x1e4d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D80u;
            // 0x1e4d84: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d80) {
            ctx->pc = 0x1E4DB4u;
            goto label_1e4db4;
        }
    }
    ctx->pc = 0x1E4D88u;
label_1e4d88:
    // 0x1e4d88: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4D88u;
    SET_GPR_U32(ctx, 31, 0x1E4D90u);
    ctx->pc = 0x1E4D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D88u;
            // 0x1e4d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D90u; }
        if (ctx->pc != 0x1E4D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D90u; }
        if (ctx->pc != 0x1E4D90u) { return; }
    }
    ctx->pc = 0x1E4D90u;
label_1e4d90:
    // 0x1e4d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4d94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e4d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4d98: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e4d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4d9c: 0xc078e9a  jal         func_1E3A68
    ctx->pc = 0x1E4D9Cu;
    SET_GPR_U32(ctx, 31, 0x1E4DA4u);
    ctx->pc = 0x1E4DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D9Cu;
            // 0x1e4da0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A68u;
    if (runtime->hasFunction(0x1E3A68u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DA4u; }
        if (ctx->pc != 0x1E4DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A68_0x1e3a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DA4u; }
        if (ctx->pc != 0x1E4DA4u) { return; }
    }
    ctx->pc = 0x1E4DA4u;
label_1e4da4:
    // 0x1e4da4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e4da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4da8: 0xc08033e  jal         func_200CF8
    ctx->pc = 0x1E4DA8u;
    SET_GPR_U32(ctx, 31, 0x1E4DB0u);
    ctx->pc = 0x1E4DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DA8u;
            // 0x1e4dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200CF8u;
    if (runtime->hasFunction(0x200CF8u)) {
        auto targetFn = runtime->lookupFunction(0x200CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DB0u; }
        if (ctx->pc != 0x1E4DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200CF8_0x200cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DB0u; }
        if (ctx->pc != 0x1E4DB0u) { return; }
    }
    ctx->pc = 0x1E4DB0u;
label_1e4db0:
    // 0x1e4db0: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1e4db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1e4db4:
    // 0x1e4db4: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x1e4db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4db8: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x1e4db8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4dbc: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x1e4dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e4dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DC0u;
            // 0x1e4dc4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4DC8u;
label_1e4dc8:
    // 0x1e4dc8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e4dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e4dcc: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x1e4dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x1e4dd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4dd4: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x1e4dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x1e4dd8: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1e4dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1e4ddc: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x1e4ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x1e4de0: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E4DE0u;
    SET_GPR_U32(ctx, 31, 0x1E4DE8u);
    ctx->pc = 0x1E4DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DE0u;
            // 0x1e4de4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DE8u; }
        if (ctx->pc != 0x1E4DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4DE8u; }
        if (ctx->pc != 0x1E4DE8u) { return; }
    }
    ctx->pc = 0x1E4DE8u;
label_1e4de8:
    // 0x1e4de8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e4dec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4df0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4DF0u;
    {
        const bool branch_taken_0x1e4df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E4DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4DF0u;
            // 0x1e4df4: 0x2484df98  addiu       $a0, $a0, -0x2068 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4df0) {
            ctx->pc = 0x1E4E08u;
            goto label_1e4e08;
        }
    }
    ctx->pc = 0x1E4DF8u;
    // 0x1e4df8: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E4DF8u;
    SET_GPR_U32(ctx, 31, 0x1E4E00u);
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E00u; }
        if (ctx->pc != 0x1E4E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E00u; }
        if (ctx->pc != 0x1E4E00u) { return; }
    }
    ctx->pc = 0x1E4E00u;
label_1e4e00:
    // 0x1e4e00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E4E00u;
    {
        const bool branch_taken_0x1e4e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E00u;
            // 0x1e4e04: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e00) {
            ctx->pc = 0x1E4E54u;
            goto label_1e4e54;
        }
    }
    ctx->pc = 0x1E4E08u;
label_1e4e08:
    // 0x1e4e08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e4e0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4E0Cu;
    {
        const bool branch_taken_0x1e4e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e0c) {
            ctx->pc = 0x1E4E28u;
            goto label_1e4e28;
        }
    }
    ctx->pc = 0x1E4E14u;
    // 0x1e4e14: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e4e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e4e18: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E4E18u;
    SET_GPR_U32(ctx, 31, 0x1E4E20u);
    ctx->pc = 0x1E4E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E18u;
            // 0x1e4e1c: 0x2484dfc8  addiu       $a0, $a0, -0x2038 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E20u; }
        if (ctx->pc != 0x1E4E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E20u; }
        if (ctx->pc != 0x1E4E20u) { return; }
    }
    ctx->pc = 0x1E4E20u;
label_1e4e20:
    // 0x1e4e20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E4E20u;
    {
        const bool branch_taken_0x1e4e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E20u;
            // 0x1e4e24: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e20) {
            ctx->pc = 0x1E4E54u;
            goto label_1e4e54;
        }
    }
    ctx->pc = 0x1E4E28u;
label_1e4e28:
    // 0x1e4e28: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4E28u;
    SET_GPR_U32(ctx, 31, 0x1E4E30u);
    ctx->pc = 0x1E4E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E28u;
            // 0x1e4e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E30u; }
        if (ctx->pc != 0x1E4E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E30u; }
        if (ctx->pc != 0x1E4E30u) { return; }
    }
    ctx->pc = 0x1E4E30u;
label_1e4e30:
    // 0x1e4e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4e34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e4e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4e38: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e4e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4e3c: 0xc078e9a  jal         func_1E3A68
    ctx->pc = 0x1E4E3Cu;
    SET_GPR_U32(ctx, 31, 0x1E4E44u);
    ctx->pc = 0x1E4E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E3Cu;
            // 0x1e4e40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A68u;
    if (runtime->hasFunction(0x1E3A68u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E44u; }
        if (ctx->pc != 0x1E4E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A68_0x1e3a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E44u; }
        if (ctx->pc != 0x1E4E44u) { return; }
    }
    ctx->pc = 0x1E4E44u;
label_1e4e44:
    // 0x1e4e44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e4e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4e48: 0xc08035c  jal         func_200D70
    ctx->pc = 0x1E4E48u;
    SET_GPR_U32(ctx, 31, 0x1E4E50u);
    ctx->pc = 0x1E4E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E48u;
            // 0x1e4e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D70u;
    if (runtime->hasFunction(0x200D70u)) {
        auto targetFn = runtime->lookupFunction(0x200D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E50u; }
        if (ctx->pc != 0x1E4E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200D70_0x200d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E50u; }
        if (ctx->pc != 0x1E4E50u) { return; }
    }
    ctx->pc = 0x1E4E50u;
label_1e4e50:
    // 0x1e4e50: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1e4e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1e4e54:
    // 0x1e4e54: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x1e4e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4e58: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x1e4e58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4e5c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x1e4e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e4e60: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E60u;
            // 0x1e4e64: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4E68u;
label_1e4e68:
    // 0x1e4e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4e70: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e4e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4e78: 0x8080702  j           func_201C08
    ctx->pc = 0x1E4E78u;
    ctx->pc = 0x1E4E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E78u;
            // 0x1e4e7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    {
        auto targetFn = runtime->lookupFunction(0x201C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E4E80u;
label_1e4e80:
    // 0x1e4e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4e88: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e4e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4e90: 0x8080704  j           func_201C10
    ctx->pc = 0x1E4E90u;
    ctx->pc = 0x1E4E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E90u;
            // 0x1e4e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C10u;
    {
        auto targetFn = runtime->lookupFunction(0x201C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E4E98u;
label_1e4e98:
    // 0x1e4e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4e9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4ea0: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e4ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e4ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4ea8: 0x8080706  j           func_201C18
    ctx->pc = 0x1E4EA8u;
    ctx->pc = 0x1E4EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EA8u;
            // 0x1e4eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C18u;
    {
        auto targetFn = runtime->lookupFunction(0x201C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E4EB0u;
label_1e4eb0:
    // 0x1e4eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4eb8: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e4eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e4ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4ec0: 0x8080708  j           func_201C20
    ctx->pc = 0x1E4EC0u;
    ctx->pc = 0x1E4EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EC0u;
            // 0x1e4ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C20u;
    {
        auto targetFn = runtime->lookupFunction(0x201C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E4EC8u;
label_1e4ec8:
    // 0x1e4ec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4ed4: 0x808064e  j           func_201938
    ctx->pc = 0x1E4ED4u;
    ctx->pc = 0x1E4ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4ED4u;
            // 0x1e4ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201938u;
    if (runtime->hasFunction(0x201938u)) {
        auto targetFn = runtime->lookupFunction(0x201938u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00201938_0x201938(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E4EDCu;
    // 0x1e4edc: 0x0  nop
    ctx->pc = 0x1e4edcu;
    // NOP
label_1e4ee0:
    // 0x1e4ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4eec: 0x8080652  j           func_201948
    ctx->pc = 0x1E4EECu;
    ctx->pc = 0x1E4EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EECu;
            // 0x1e4ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201948u;
    if (runtime->hasFunction(0x201948u)) {
        auto targetFn = runtime->lookupFunction(0x201948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00201948_0x201948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E4EF4u;
    // 0x1e4ef4: 0x0  nop
    ctx->pc = 0x1e4ef4u;
    // NOP
label_1e4ef8:
    // 0x1e4ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4f04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e4f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e4f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e4f0c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E4F0Cu;
    SET_GPR_U32(ctx, 31, 0x1E4F14u);
    ctx->pc = 0x1E4F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F0Cu;
            // 0x1e4f10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F14u; }
        if (ctx->pc != 0x1E4F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F14u; }
        if (ctx->pc != 0x1E4F14u) { return; }
    }
    ctx->pc = 0x1E4F14u;
label_1e4f14:
    // 0x1e4f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4f18: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4F18u;
    {
        const bool branch_taken_0x1e4f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E4F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F18u;
            // 0x1e4f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f18) {
            ctx->pc = 0x1E4F40u;
            goto label_1e4f40;
        }
    }
    ctx->pc = 0x1E4F20u;
    // 0x1e4f20: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e4f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4f28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4f2c: 0x2484dff8  addiu       $a0, $a0, -0x2008
    ctx->pc = 0x1e4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959096));
    // 0x1e4f30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4f34: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E4F34u;
    ctx->pc = 0x1E4F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F34u;
            // 0x1e4f38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E4F3Cu;
    // 0x1e4f3c: 0x0  nop
    ctx->pc = 0x1e4f3cu;
    // NOP
label_1e4f40:
    // 0x1e4f40: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4F40u;
    SET_GPR_U32(ctx, 31, 0x1E4F48u);
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F48u; }
        if (ctx->pc != 0x1E4F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F48u; }
        if (ctx->pc != 0x1E4F48u) { return; }
    }
    ctx->pc = 0x1E4F48u;
label_1e4f48:
    // 0x1e4f48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4f50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4f54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4f5c: 0x8080766  j           func_201D98
    ctx->pc = 0x1E4F5Cu;
    ctx->pc = 0x1E4F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F5Cu;
            // 0x1e4f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201D98u;
    {
        auto targetFn = runtime->lookupFunction(0x201D98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E4F64u;
    // 0x1e4f64: 0x0  nop
    ctx->pc = 0x1e4f64u;
    // NOP
label_1e4f68:
    // 0x1e4f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4f70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e4f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e4f74: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E4F74u;
    SET_GPR_U32(ctx, 31, 0x1E4F7Cu);
    ctx->pc = 0x1E4F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F74u;
            // 0x1e4f78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F7Cu; }
        if (ctx->pc != 0x1E4F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F7Cu; }
        if (ctx->pc != 0x1E4F7Cu) { return; }
    }
    ctx->pc = 0x1E4F7Cu;
label_1e4f7c:
    // 0x1e4f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4f80: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4F80u;
    {
        const bool branch_taken_0x1e4f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E4F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F80u;
            // 0x1e4f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f80) {
            ctx->pc = 0x1E4FA8u;
            goto label_1e4fa8;
        }
    }
    ctx->pc = 0x1E4F88u;
    // 0x1e4f88: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e4f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e4f8c: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1E4F94u);
    ctx->pc = 0x1E4F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F8Cu;
            // 0x1e4f90: 0x2484e028  addiu       $a0, $a0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F94u; }
        if (ctx->pc != 0x1E4F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F94u; }
        if (ctx->pc != 0x1E4F94u) { return; }
    }
    ctx->pc = 0x1E4F94u;
label_1e4f94:
    // 0x1e4f94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e4f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4f9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e4f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FA0u;
            // 0x1e4fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4FA8u;
label_1e4fa8:
    // 0x1e4fa8: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4FA8u;
    SET_GPR_U32(ctx, 31, 0x1E4FB0u);
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FB0u; }
        if (ctx->pc != 0x1E4FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FB0u; }
        if (ctx->pc != 0x1E4FB0u) { return; }
    }
    ctx->pc = 0x1E4FB0u;
label_1e4fb0:
    // 0x1e4fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4fb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4fb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e4fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4fbc: 0x808077c  j           func_201DF0
    ctx->pc = 0x1E4FBCu;
    ctx->pc = 0x1E4FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FBCu;
            // 0x1e4fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201DF0u;
    {
        auto targetFn = runtime->lookupFunction(0x201DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E4FC4u;
    // 0x1e4fc4: 0x0  nop
    ctx->pc = 0x1e4fc4u;
    // NOP
label_1e4fc8:
    // 0x1e4fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4fd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e4fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e4fd4: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E4FD4u;
    SET_GPR_U32(ctx, 31, 0x1E4FDCu);
    ctx->pc = 0x1E4FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FD4u;
            // 0x1e4fd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FDCu; }
        if (ctx->pc != 0x1E4FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FDCu; }
        if (ctx->pc != 0x1E4FDCu) { return; }
    }
    ctx->pc = 0x1E4FDCu;
label_1e4fdc:
    // 0x1e4fdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e4fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4fe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4fe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4fe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4fec: 0x808065e  j           func_201978
    ctx->pc = 0x1E4FECu;
    ctx->pc = 0x1E4FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FECu;
            // 0x1e4ff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201978u;
    {
        auto targetFn = runtime->lookupFunction(0x201978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E4FF4u;
    // 0x1e4ff4: 0x0  nop
    ctx->pc = 0x1e4ff4u;
    // NOP
label_1e4ff8:
    // 0x1e4ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4ffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5004: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e5004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e500c: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E500Cu;
    SET_GPR_U32(ctx, 31, 0x1E5014u);
    ctx->pc = 0x1E5010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E500Cu;
            // 0x1e5010: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5014u; }
        if (ctx->pc != 0x1E5014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5014u; }
        if (ctx->pc != 0x1E5014u) { return; }
    }
    ctx->pc = 0x1E5014u;
label_1e5014:
    // 0x1e5014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5018: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5018u;
    {
        const bool branch_taken_0x1e5018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E501Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5018u;
            // 0x1e501c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5018) {
            ctx->pc = 0x1E5040u;
            goto label_1e5040;
        }
    }
    ctx->pc = 0x1E5020u;
    // 0x1e5020: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e5020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e5024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5028: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e502c: 0x2484e058  addiu       $a0, $a0, -0x1FA8
    ctx->pc = 0x1e502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959192));
    // 0x1e5030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5034: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E5034u;
    ctx->pc = 0x1E5038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5034u;
            // 0x1e5038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E503Cu;
    // 0x1e503c: 0x0  nop
    ctx->pc = 0x1e503cu;
    // NOP
label_1e5040:
    // 0x1e5040: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E5040u;
    SET_GPR_U32(ctx, 31, 0x1E5048u);
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5048u; }
        if (ctx->pc != 0x1E5048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5048u; }
        if (ctx->pc != 0x1E5048u) { return; }
    }
    ctx->pc = 0x1E5048u;
label_1e5048:
    // 0x1e5048: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e5048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e504c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e504cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e505c: 0x808070a  j           func_201C28
    ctx->pc = 0x1E505Cu;
    ctx->pc = 0x1E5060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E505Cu;
            // 0x1e5060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C28u;
    {
        auto targetFn = runtime->lookupFunction(0x201C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E5064u;
    // 0x1e5064: 0x0  nop
    ctx->pc = 0x1e5064u;
    // NOP
label_1e5068:
    // 0x1e5068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e506c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e506cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5070: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e5070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e5074: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E5074u;
    SET_GPR_U32(ctx, 31, 0x1E507Cu);
    ctx->pc = 0x1E5078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5074u;
            // 0x1e5078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E507Cu; }
        if (ctx->pc != 0x1E507Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E507Cu; }
        if (ctx->pc != 0x1E507Cu) { return; }
    }
    ctx->pc = 0x1E507Cu;
label_1e507c:
    // 0x1e507c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e507cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5080: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5080u;
    {
        const bool branch_taken_0x1e5080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E5084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5080u;
            // 0x1e5084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5080) {
            ctx->pc = 0x1E50A8u;
            goto label_1e50a8;
        }
    }
    ctx->pc = 0x1E5088u;
    // 0x1e5088: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e5088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e508c: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E508Cu;
    SET_GPR_U32(ctx, 31, 0x1E5094u);
    ctx->pc = 0x1E5090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E508Cu;
            // 0x1e5090: 0x2484e088  addiu       $a0, $a0, -0x1F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5094u; }
        if (ctx->pc != 0x1E5094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5094u; }
        if (ctx->pc != 0x1E5094u) { return; }
    }
    ctx->pc = 0x1E5094u;
label_1e5094:
    // 0x1e5094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e5094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e509c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e509cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e50a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E50A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E50A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50A0u;
            // 0x1e50a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E50A8u;
label_1e50a8:
    // 0x1e50a8: 0xc078e90  jal         func_1E3A40
    ctx->pc = 0x1E50A8u;
    SET_GPR_U32(ctx, 31, 0x1E50B0u);
    ctx->pc = 0x1E3A40u;
    if (runtime->hasFunction(0x1E3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50B0u; }
        if (ctx->pc != 0x1E50B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A40_0x1e3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50B0u; }
        if (ctx->pc != 0x1E50B0u) { return; }
    }
    ctx->pc = 0x1E50B0u;
label_1e50b0:
    // 0x1e50b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e50b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e50b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e50b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e50b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e50b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e50bc: 0x808070c  j           func_201C30
    ctx->pc = 0x1E50BCu;
    ctx->pc = 0x1E50C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50BCu;
            // 0x1e50c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201C30u;
    if (runtime->hasFunction(0x201C30u)) {
        auto targetFn = runtime->lookupFunction(0x201C30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00201C30_0x201c30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E50C4u;
    // 0x1e50c4: 0x0  nop
    ctx->pc = 0x1e50c4u;
    // NOP
label_1e50c8:
    // 0x1e50c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e50c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e50cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e50ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e50d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e50d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e50d4: 0x8080782  j           func_201E08
    ctx->pc = 0x1E50D4u;
    ctx->pc = 0x1E50D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50D4u;
            // 0x1e50d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201E08u;
    {
        auto targetFn = runtime->lookupFunction(0x201E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E50DCu;
    // 0x1e50dc: 0x0  nop
    ctx->pc = 0x1e50dcu;
    // NOP
label_1e50e0:
    // 0x1e50e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e50e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e50e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e50e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e50e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e50e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e50ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e50ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e50f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e50f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e50f4: 0x8c4b0010  lw          $t3, 0x10($v0)
    ctx->pc = 0x1e50f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e50f8: 0x8c4a000c  lw          $t2, 0xC($v0)
    ctx->pc = 0x1e50f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e50fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e50fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5100: 0x8079442  j           func_1E5108
    ctx->pc = 0x1E5100u;
    ctx->pc = 0x1E5104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5100u;
            // 0x1e5104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5108u;
    goto label_1e5108;
    ctx->pc = 0x1E5108u;
label_1e5108:
    // 0x1e5108: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1e5108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1e510c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x1e510cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x1e5110: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1e5110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5114: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1e5114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1e5118: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1e5118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e511c: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x1e511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x1e5120: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1e5120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5124: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x1e5124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x1e5128: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x1e5128u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e512c: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x1e512cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x1e5130: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1e5130u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5134: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x1e5134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x1e5138: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e5138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e513c: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x1e513cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x1e5140: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1e5140u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5144: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x1e5144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x1e5148: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x1e5148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x1e514c: 0xc078e9a  jal         func_1E3A68
    ctx->pc = 0x1E514Cu;
    SET_GPR_U32(ctx, 31, 0x1E5154u);
    ctx->pc = 0x1E5150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E514Cu;
            // 0x1e5150: 0x8c9000a8  lw          $s0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A68u;
    if (runtime->hasFunction(0x1E3A68u)) {
        auto targetFn = runtime->lookupFunction(0x1E3A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5154u; }
        if (ctx->pc != 0x1E5154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3A68_0x1e3a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5154u; }
        if (ctx->pc != 0x1E5154u) { return; }
    }
    ctx->pc = 0x1E5154u;
label_1e5154:
    // 0x1e5154: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x1e5154u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e5158: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e5158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e515c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e515cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5160: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1e5160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5164: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x1e5164u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5168: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x1e5168u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e516c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1e516cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5170: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1e5170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5174: 0xc08050c  jal         func_201430
    ctx->pc = 0x1E5174u;
    SET_GPR_U32(ctx, 31, 0x1E517Cu);
    ctx->pc = 0x1E5178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5174u;
            // 0x1e5178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201430u;
    if (runtime->hasFunction(0x201430u)) {
        auto targetFn = runtime->lookupFunction(0x201430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E517Cu; }
        if (ctx->pc != 0x1E517Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201430_0x201430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E517Cu; }
        if (ctx->pc != 0x1E517Cu) { return; }
    }
    ctx->pc = 0x1E517Cu;
label_1e517c:
    // 0x1e517c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e517cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5180: 0xc08037a  jal         func_200DE8
    ctx->pc = 0x1E5180u;
    SET_GPR_U32(ctx, 31, 0x1E5188u);
    ctx->pc = 0x1E5184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5180u;
            // 0x1e5184: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200DE8u;
    if (runtime->hasFunction(0x200DE8u)) {
        auto targetFn = runtime->lookupFunction(0x200DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5188u; }
        if (ctx->pc != 0x1E5188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200DE8_0x200de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5188u; }
        if (ctx->pc != 0x1E5188u) { return; }
    }
    ctx->pc = 0x1E5188u;
label_1e5188:
    // 0x1e5188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e518c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1e518cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5190: 0xc08038c  jal         func_200E30
    ctx->pc = 0x1E5190u;
    SET_GPR_U32(ctx, 31, 0x1E5198u);
    ctx->pc = 0x1E5194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5190u;
            // 0x1e5194: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E30u;
    if (runtime->hasFunction(0x200E30u)) {
        auto targetFn = runtime->lookupFunction(0x200E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5198u; }
        if (ctx->pc != 0x1E5198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200E30_0x200e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5198u; }
        if (ctx->pc != 0x1E5198u) { return; }
    }
    ctx->pc = 0x1E5198u;
label_1e5198:
    // 0x1e5198: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x1e5198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e519c: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x1e519cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1e51a0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1e51a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1e51a4: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x1e51a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1e51a8: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x1e51a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1e51ac: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x1e51acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1e51b0: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x1e51b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e51b4: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x1e51b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1e51b8: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x1e51b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e51bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E51BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E51C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51BCu;
            // 0x1e51c0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E51C4u;
    // 0x1e51c4: 0x0  nop
    ctx->pc = 0x1e51c4u;
    // NOP
label_1e51c8:
    // 0x1e51c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e51c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e51cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e51ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e51d0: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e51d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e51d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e51d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e51d8: 0x808037c  j           func_200DF0
    ctx->pc = 0x1E51D8u;
    ctx->pc = 0x1E51DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51D8u;
            // 0x1e51dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200DF0u;
    {
        auto targetFn = runtime->lookupFunction(0x200DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E51E0u;
label_1e51e0:
    // 0x1e51e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e51e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e51e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e51e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e51e8: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e51e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e51ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e51ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e51f0: 0x808037e  j           func_200DF8
    ctx->pc = 0x1E51F0u;
    ctx->pc = 0x1E51F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51F0u;
            // 0x1e51f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200DF8u;
    {
        auto targetFn = runtime->lookupFunction(0x200DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E51F8u;
label_1e51f8:
    // 0x1e51f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e51f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e51fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e51fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5200: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e5200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e5204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5208: 0x8080382  j           func_200E08
    ctx->pc = 0x1E5208u;
    ctx->pc = 0x1E520Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5208u;
            // 0x1e520c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E08u;
    {
        auto targetFn = runtime->lookupFunction(0x200E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E5210u;
label_1e5210:
    // 0x1e5210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5218: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e5218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e521c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e521cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5220: 0x8080386  j           func_200E18
    ctx->pc = 0x1E5220u;
    ctx->pc = 0x1E5224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5220u;
            // 0x1e5224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E18u;
    {
        auto targetFn = runtime->lookupFunction(0x200E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E5228u;
label_1e5228:
    // 0x1e5228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e522c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5230: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e5230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e5234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5238: 0x808038a  j           func_200E28
    ctx->pc = 0x1E5238u;
    ctx->pc = 0x1E523Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5238u;
            // 0x1e523c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E28u;
    {
        auto targetFn = runtime->lookupFunction(0x200E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E5240u;
    ctx->pc = 0x1e5240u;
}
