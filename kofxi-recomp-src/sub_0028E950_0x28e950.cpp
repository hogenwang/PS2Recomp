#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E950
// Address: 0x28e950 - 0x28ea28
void sub_0028E950_0x28e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E950_0x28e950");
#endif

    switch (ctx->pc) {
        case 0x28e950u: goto label_28e950;
        case 0x28e954u: goto label_28e954;
        case 0x28e958u: goto label_28e958;
        case 0x28e95cu: goto label_28e95c;
        case 0x28e960u: goto label_28e960;
        case 0x28e964u: goto label_28e964;
        case 0x28e968u: goto label_28e968;
        case 0x28e96cu: goto label_28e96c;
        case 0x28e970u: goto label_28e970;
        case 0x28e974u: goto label_28e974;
        case 0x28e978u: goto label_28e978;
        case 0x28e97cu: goto label_28e97c;
        case 0x28e980u: goto label_28e980;
        case 0x28e984u: goto label_28e984;
        case 0x28e988u: goto label_28e988;
        case 0x28e98cu: goto label_28e98c;
        case 0x28e990u: goto label_28e990;
        case 0x28e994u: goto label_28e994;
        case 0x28e998u: goto label_28e998;
        case 0x28e99cu: goto label_28e99c;
        case 0x28e9a0u: goto label_28e9a0;
        case 0x28e9a4u: goto label_28e9a4;
        case 0x28e9a8u: goto label_28e9a8;
        case 0x28e9acu: goto label_28e9ac;
        case 0x28e9b0u: goto label_28e9b0;
        case 0x28e9b4u: goto label_28e9b4;
        case 0x28e9b8u: goto label_28e9b8;
        case 0x28e9bcu: goto label_28e9bc;
        case 0x28e9c0u: goto label_28e9c0;
        case 0x28e9c4u: goto label_28e9c4;
        case 0x28e9c8u: goto label_28e9c8;
        case 0x28e9ccu: goto label_28e9cc;
        case 0x28e9d0u: goto label_28e9d0;
        case 0x28e9d4u: goto label_28e9d4;
        case 0x28e9d8u: goto label_28e9d8;
        case 0x28e9dcu: goto label_28e9dc;
        case 0x28e9e0u: goto label_28e9e0;
        case 0x28e9e4u: goto label_28e9e4;
        case 0x28e9e8u: goto label_28e9e8;
        case 0x28e9ecu: goto label_28e9ec;
        case 0x28e9f0u: goto label_28e9f0;
        case 0x28e9f4u: goto label_28e9f4;
        case 0x28e9f8u: goto label_28e9f8;
        case 0x28e9fcu: goto label_28e9fc;
        case 0x28ea00u: goto label_28ea00;
        case 0x28ea04u: goto label_28ea04;
        case 0x28ea08u: goto label_28ea08;
        case 0x28ea0cu: goto label_28ea0c;
        case 0x28ea10u: goto label_28ea10;
        case 0x28ea14u: goto label_28ea14;
        case 0x28ea18u: goto label_28ea18;
        case 0x28ea1cu: goto label_28ea1c;
        case 0x28ea20u: goto label_28ea20;
        case 0x28ea24u: goto label_28ea24;
        default: break;
    }

    ctx->pc = 0x28e950u;

label_28e950:
    // 0x28e950: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e954:
    // 0x28e954: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e958:
    // 0x28e958: 0x8c424600  lw          $v0, 0x4600($v0)
    ctx->pc = 0x28e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17920)));
label_28e95c:
    // 0x28e95c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e960:
    if (ctx->pc == 0x28E960u) {
        ctx->pc = 0x28E960u;
            // 0x28e960: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28E964u;
        goto label_28e964;
    }
    ctx->pc = 0x28E95Cu;
    {
        const bool branch_taken_0x28e95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E95Cu;
            // 0x28e960: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e95c) {
            ctx->pc = 0x28E984u;
            goto label_28e984;
        }
    }
    ctx->pc = 0x28E964u;
label_28e964:
    // 0x28e964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e968:
    // 0x28e968: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e96c:
    // 0x28e96c: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x28e96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_28e970:
    // 0x28e970: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e974:
    // 0x28e974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e978:
    // 0x28e978: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e97c:
    // 0x28e97c: 0x80a5648  j           func_295920
label_28e980:
    if (ctx->pc == 0x28E980u) {
        ctx->pc = 0x28E980u;
            // 0x28e980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28E984u;
        goto label_28e984;
    }
    ctx->pc = 0x28E97Cu;
    ctx->pc = 0x28E980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E97Cu;
            // 0x28e980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00295920_0x295920(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x28E984u;
label_28e984:
    // 0x28e984: 0x40f809  jalr        $v0
label_28e988:
    if (ctx->pc == 0x28E988u) {
        ctx->pc = 0x28E98Cu;
        goto label_28e98c;
    }
    ctx->pc = 0x28E984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E98Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28E98Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28E98Cu; }
            if (ctx->pc != 0x28E98Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28E98Cu;
label_28e98c:
    // 0x28e98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e990:
    // 0x28e990: 0x3e00008  jr          $ra
label_28e994:
    if (ctx->pc == 0x28E994u) {
        ctx->pc = 0x28E994u;
            // 0x28e994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28E998u;
        goto label_28e998;
    }
    ctx->pc = 0x28E990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E990u;
            // 0x28e994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E998u;
label_28e998:
    // 0x28e998: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e99c:
    // 0x28e99c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e99cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e9a0:
    // 0x28e9a0: 0x8c424604  lw          $v0, 0x4604($v0)
    ctx->pc = 0x28e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17924)));
label_28e9a4:
    // 0x28e9a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e9a8:
    if (ctx->pc == 0x28E9A8u) {
        ctx->pc = 0x28E9A8u;
            // 0x28e9a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28E9ACu;
        goto label_28e9ac;
    }
    ctx->pc = 0x28E9A4u;
    {
        const bool branch_taken_0x28e9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E9A4u;
            // 0x28e9a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9a4) {
            ctx->pc = 0x28E9CCu;
            goto label_28e9cc;
        }
    }
    ctx->pc = 0x28E9ACu;
label_28e9ac:
    // 0x28e9ac: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e9b0:
    // 0x28e9b0: 0x2405007a  addiu       $a1, $zero, 0x7A
    ctx->pc = 0x28e9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_28e9b4:
    // 0x28e9b4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e9b8:
    // 0x28e9b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e9b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e9bc:
    // 0x28e9bc: 0xc0a5648  jal         func_295920
label_28e9c0:
    if (ctx->pc == 0x28E9C0u) {
        ctx->pc = 0x28E9C0u;
            // 0x28e9c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E9C4u;
        goto label_28e9c4;
    }
    ctx->pc = 0x28E9BCu;
    SET_GPR_U32(ctx, 31, 0x28E9C4u);
    ctx->pc = 0x28E9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E9BCu;
            // 0x28e9c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E9C4u; }
        if (ctx->pc != 0x28E9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E9C4u; }
        if (ctx->pc != 0x28E9C4u) { return; }
    }
    ctx->pc = 0x28E9C4u;
label_28e9c4:
    // 0x28e9c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e9c8:
    if (ctx->pc == 0x28E9C8u) {
        ctx->pc = 0x28E9C8u;
            // 0x28e9c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E9CCu;
        goto label_28e9cc;
    }
    ctx->pc = 0x28E9C4u;
    {
        const bool branch_taken_0x28e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E9C4u;
            // 0x28e9c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9c4) {
            ctx->pc = 0x28E9D4u;
            goto label_28e9d4;
        }
    }
    ctx->pc = 0x28E9CCu;
label_28e9cc:
    // 0x28e9cc: 0x40f809  jalr        $v0
label_28e9d0:
    if (ctx->pc == 0x28E9D0u) {
        ctx->pc = 0x28E9D4u;
        goto label_28e9d4;
    }
    ctx->pc = 0x28E9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E9D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28E9D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28E9D4u; }
            if (ctx->pc != 0x28E9D4u) { return; }
        }
        }
    }
    ctx->pc = 0x28E9D4u;
label_28e9d4:
    // 0x28e9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e9d8:
    // 0x28e9d8: 0x3e00008  jr          $ra
label_28e9dc:
    if (ctx->pc == 0x28E9DCu) {
        ctx->pc = 0x28E9DCu;
            // 0x28e9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28E9E0u;
        goto label_28e9e0;
    }
    ctx->pc = 0x28E9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E9D8u;
            // 0x28e9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E9E0u;
label_28e9e0:
    // 0x28e9e0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e9e4:
    // 0x28e9e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e9e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e9e8:
    // 0x28e9e8: 0x8c424608  lw          $v0, 0x4608($v0)
    ctx->pc = 0x28e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17928)));
label_28e9ec:
    // 0x28e9ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e9f0:
    if (ctx->pc == 0x28E9F0u) {
        ctx->pc = 0x28E9F0u;
            // 0x28e9f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x28E9F4u;
        goto label_28e9f4;
    }
    ctx->pc = 0x28E9ECu;
    {
        const bool branch_taken_0x28e9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E9ECu;
            // 0x28e9f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9ec) {
            ctx->pc = 0x28EA14u;
            goto label_28ea14;
        }
    }
    ctx->pc = 0x28E9F4u;
label_28e9f4:
    // 0x28e9f4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e9f8:
    // 0x28e9f8: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x28e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_28e9fc:
    // 0x28e9fc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28ea00:
    // 0x28ea00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ea00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ea04:
    // 0x28ea04: 0xc0a5648  jal         func_295920
label_28ea08:
    if (ctx->pc == 0x28EA08u) {
        ctx->pc = 0x28EA08u;
            // 0x28ea08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EA0Cu;
        goto label_28ea0c;
    }
    ctx->pc = 0x28EA04u;
    SET_GPR_U32(ctx, 31, 0x28EA0Cu);
    ctx->pc = 0x28EA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA04u;
            // 0x28ea08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA0Cu; }
        if (ctx->pc != 0x28EA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA0Cu; }
        if (ctx->pc != 0x28EA0Cu) { return; }
    }
    ctx->pc = 0x28EA0Cu;
label_28ea0c:
    // 0x28ea0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28ea10:
    if (ctx->pc == 0x28EA10u) {
        ctx->pc = 0x28EA10u;
            // 0x28ea10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EA14u;
        goto label_28ea14;
    }
    ctx->pc = 0x28EA0Cu;
    {
        const bool branch_taken_0x28ea0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA0Cu;
            // 0x28ea10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea0c) {
            ctx->pc = 0x28EA1Cu;
            goto label_28ea1c;
        }
    }
    ctx->pc = 0x28EA14u;
label_28ea14:
    // 0x28ea14: 0x40f809  jalr        $v0
label_28ea18:
    if (ctx->pc == 0x28EA18u) {
        ctx->pc = 0x28EA1Cu;
        goto label_28ea1c;
    }
    ctx->pc = 0x28EA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EA1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28EA1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28EA1Cu; }
            if (ctx->pc != 0x28EA1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28EA1Cu;
label_28ea1c:
    // 0x28ea1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ea1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ea20:
    // 0x28ea20: 0x3e00008  jr          $ra
label_28ea24:
    if (ctx->pc == 0x28EA24u) {
        ctx->pc = 0x28EA24u;
            // 0x28ea24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28EA28u;
        goto label_fallthrough_0x28ea20;
    }
    ctx->pc = 0x28EA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA20u;
            // 0x28ea24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28ea20:
    ctx->pc = 0x28EA28u;
    ctx->pc = 0x28ea28u;
}
