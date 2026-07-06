#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CC1B8
// Address: 0x1cc1b8 - 0x1cc2d0
void sub_001CC1B8_0x1cc1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC1B8_0x1cc1b8");
#endif

    switch (ctx->pc) {
        case 0x1cc1f0u: goto label_1cc1f0;
        case 0x1cc288u: goto label_1cc288;
        case 0x1cc2a0u: goto label_1cc2a0;
        case 0x1cc2b4u: goto label_1cc2b4;
        case 0x1cc2bcu: goto label_1cc2bc;
        default: break;
    }

    ctx->pc = 0x1cc1b8u;

    // 0x1cc1b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc1bc: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x1cc1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x1cc1c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc1c4: 0x2503cc08  addiu       $v1, $t0, -0x33F8
    ctx->pc = 0x1cc1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953992));
    // 0x1cc1c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc1cc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1cc1ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1d0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1cc1d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1d4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1cc1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1d8: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x1cc1d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cc1dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CC1DCu;
    {
        const bool branch_taken_0x1cc1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC1DCu;
            // 0x1cc1e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1dc) {
            ctx->pc = 0x1CC214u;
            goto label_1cc214;
        }
    }
    ctx->pc = 0x1CC1E4u;
    // 0x1cc1e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1cc1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1cc1e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cc1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cc1ec: 0x0  nop
    ctx->pc = 0x1cc1ecu;
    // NOP
label_1cc1f0:
    // 0x1cc1f0: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x1cc1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1cc1f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC1F4u;
    {
        const bool branch_taken_0x1cc1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC1F4u;
            // 0x1cc1f8: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1f4) {
            ctx->pc = 0x1CC214u;
            goto label_1cc214;
        }
    }
    ctx->pc = 0x1CC1FCu;
    // 0x1cc1fc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1cc1fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc200: 0x0  nop
    ctx->pc = 0x1cc200u;
    // NOP
    // 0x1cc204: 0x0  nop
    ctx->pc = 0x1cc204u;
    // NOP
    // 0x1cc208: 0x0  nop
    ctx->pc = 0x1cc208u;
    // NOP
    // 0x1cc20c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CC20Cu;
    {
        const bool branch_taken_0x1cc20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc20c) {
            ctx->pc = 0x1CC210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC20Cu;
            // 0x1cc210: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC1F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cc1f0;
        }
    }
    ctx->pc = 0x1CC214u;
label_1cc214:
    // 0x1cc214: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1cc214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1cc218: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CC218u;
    {
        const bool branch_taken_0x1cc218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CC21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC218u;
            // 0x1cc21c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc218) {
            ctx->pc = 0x1CC28Cu;
            goto label_1cc28c;
        }
    }
    ctx->pc = 0x1CC220u;
    // 0x1cc220: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x1cc220u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cc224: 0x2503cc08  addiu       $v1, $t0, -0x33F8
    ctx->pc = 0x1cc224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953992));
    // 0x1cc228: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1cc228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1cc22c: 0x24e4000f  addiu       $a0, $a3, 0xF
    ctx->pc = 0x1cc22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x1cc230: 0x28e20000  slti        $v0, $a3, 0x0
    ctx->pc = 0x1cc230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1cc234: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1cc234u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1cc238: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1cc238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1cc23c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cc23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1cc240: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x1cc240u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x1cc244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc248: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cc24c: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1cc24cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1cc250: 0x2463cbd0  addiu       $v1, $v1, -0x3430
    ctx->pc = 0x1cc250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953936));
    // 0x1cc254: 0x24a5bb40  addiu       $a1, $a1, -0x44C0
    ctx->pc = 0x1cc254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949696));
    // 0x1cc258: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x1cc258u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x1cc25c: 0x24c6bff8  addiu       $a2, $a2, -0x4008
    ctx->pc = 0x1cc25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950904));
    // 0x1cc260: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x1cc260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cc264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc268: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1cc268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1cc26c: 0xa2090005  sb          $t1, 0x5($s0)
    ctx->pc = 0x1cc26cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 9));
    // 0x1cc270: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1cc270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x1cc274: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x1cc274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x1cc278: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x1cc278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x1cc27c: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x1cc27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x1cc280: 0xc073132  jal         func_1CC4C8
    ctx->pc = 0x1CC280u;
    SET_GPR_U32(ctx, 31, 0x1CC288u);
    ctx->pc = 0x1CC284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC280u;
            // 0x1cc284: 0xae10002c  sw          $s0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC4C8u;
    if (runtime->hasFunction(0x1CC4C8u)) {
        auto targetFn = runtime->lookupFunction(0x1CC4C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC288u; }
        if (ctx->pc != 0x1CC288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC4C8_0x1cc4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC288u; }
        if (ctx->pc != 0x1CC288u) { return; }
    }
    ctx->pc = 0x1CC288u;
label_1cc288:
    // 0x1cc288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cc288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc28c:
    // 0x1cc28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc290: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc294: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC294u;
            // 0x1cc298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC29Cu;
    // 0x1cc29c: 0x0  nop
    ctx->pc = 0x1cc29cu;
    // NOP
label_1cc2a0:
    // 0x1cc2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc2a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc2a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc2ac: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CC2ACu;
    SET_GPR_U32(ctx, 31, 0x1CC2B4u);
    ctx->pc = 0x1CC2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2ACu;
            // 0x1cc2b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2B4u; }
        if (ctx->pc != 0x1CC2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2B4u; }
        if (ctx->pc != 0x1CC2B4u) { return; }
    }
    ctx->pc = 0x1CC2B4u;
label_1cc2b4:
    // 0x1cc2b4: 0xc0730b4  jal         func_1CC2D0
    ctx->pc = 0x1CC2B4u;
    SET_GPR_U32(ctx, 31, 0x1CC2BCu);
    ctx->pc = 0x1CC2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2B4u;
            // 0x1cc2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2D0u;
    if (runtime->hasFunction(0x1CC2D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2BCu; }
        if (ctx->pc != 0x1CC2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC2D0_0x1cc2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2BCu; }
        if (ctx->pc != 0x1CC2BCu) { return; }
    }
    ctx->pc = 0x1CC2BCu;
label_1cc2bc:
    // 0x1cc2bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc2c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc2c4: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1CC2C4u;
    ctx->pc = 0x1CC2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2C4u;
            // 0x1cc2c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CC2CCu;
    // 0x1cc2cc: 0x0  nop
    ctx->pc = 0x1cc2ccu;
    // NOP
    ctx->pc = 0x1cc2d0u;
}
