#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5390
// Address: 0x2c5390 - 0x2c5410
void sub_002C5390_0x2c5390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5390_0x2c5390");
#endif

    switch (ctx->pc) {
        case 0x2c53a4u: goto label_2c53a4;
        case 0x2c53ccu: goto label_2c53cc;
        case 0x2c53dcu: goto label_2c53dc;
        case 0x2c53f4u: goto label_2c53f4;
        default: break;
    }

    ctx->pc = 0x2c5390u;

    // 0x2c5390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c5390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c5394: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c5394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c5398: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c5398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c539c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C539Cu;
    SET_GPR_U32(ctx, 31, 0x2C53A4u);
    ctx->pc = 0x2C53A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C539Cu;
            // 0x2c53a0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53A4u; }
        if (ctx->pc != 0x2C53A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53A4u; }
        if (ctx->pc != 0x2C53A4u) { return; }
    }
    ctx->pc = 0x2C53A4u;
label_2c53a4:
    // 0x2c53a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c53a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c53a8: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C53A8u;
    {
        const bool branch_taken_0x2c53a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C53ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53A8u;
            // 0x2c53ac: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53a8) {
            ctx->pc = 0x2C53D4u;
            goto label_2c53d4;
        }
    }
    ctx->pc = 0x2C53B0u;
    // 0x2c53b0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c53b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c53b4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2c53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2c53b8: 0x240500dd  addiu       $a1, $zero, 0xDD
    ctx->pc = 0x2c53b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x2c53bc: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c53bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c53c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c53c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c53c4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C53C4u;
    SET_GPR_U32(ctx, 31, 0x2C53CCu);
    ctx->pc = 0x2C53C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53C4u;
            // 0x2c53c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53CCu; }
        if (ctx->pc != 0x2C53CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53CCu; }
        if (ctx->pc != 0x2C53CCu) { return; }
    }
    ctx->pc = 0x2C53CCu;
label_2c53cc:
    // 0x2c53cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C53CCu;
    {
        const bool branch_taken_0x2c53cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C53D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53CCu;
            // 0x2c53d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53cc) {
            ctx->pc = 0x2C5400u;
            goto label_2c5400;
        }
    }
    ctx->pc = 0x2C53D4u;
label_2c53d4:
    // 0x2c53d4: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x2C53D4u;
    SET_GPR_U32(ctx, 31, 0x2C53DCu);
    ctx->pc = 0x2C53D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53D4u;
            // 0x2c53d8: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (runtime->hasFunction(0x281BC8u)) {
        auto targetFn = runtime->lookupFunction(0x281BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53DCu; }
        if (ctx->pc != 0x2C53DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281BC8_0x281bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53DCu; }
        if (ctx->pc != 0x2C53DCu) { return; }
    }
    ctx->pc = 0x2C53DCu;
label_2c53dc:
    // 0x2c53dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C53DCu;
    {
        const bool branch_taken_0x2c53dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C53E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53DCu;
            // 0x2c53e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53dc) {
            ctx->pc = 0x2C53ECu;
            goto label_2c53ec;
        }
    }
    ctx->pc = 0x2C53E4u;
    // 0x2c53e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C53E4u;
    {
        const bool branch_taken_0x2c53e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C53E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53E4u;
            // 0x2c53e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c53e4) {
            ctx->pc = 0x2C5400u;
            goto label_2c5400;
        }
    }
    ctx->pc = 0x2C53ECu;
label_2c53ec:
    // 0x2c53ec: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x2C53ECu;
    SET_GPR_U32(ctx, 31, 0x2C53F4u);
    ctx->pc = 0x2C53F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53ECu;
            // 0x2c53f0: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (runtime->hasFunction(0x281BC8u)) {
        auto targetFn = runtime->lookupFunction(0x281BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53F4u; }
        if (ctx->pc != 0x2C53F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281BC8_0x281bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53F4u; }
        if (ctx->pc != 0x2C53F4u) { return; }
    }
    ctx->pc = 0x2C53F4u;
label_2c53f4:
    // 0x2c53f4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2c53f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2c53f8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2c53f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2c53fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c53fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5400:
    // 0x2c5400: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c5400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5404: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c5404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5408: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C540Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5408u;
            // 0x2c540c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5410u;
    ctx->pc = 0x2c5410u;
}
