#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D4198
// Address: 0x2d4198 - 0x2d42b0
void sub_002D4198_0x2d4198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4198_0x2d4198");
#endif

    switch (ctx->pc) {
        case 0x2d41d8u: goto label_2d41d8;
        case 0x2d4218u: goto label_2d4218;
        case 0x2d4248u: goto label_2d4248;
        case 0x2d4280u: goto label_2d4280;
        default: break;
    }

    ctx->pc = 0x2d4198u;

    // 0x2d4198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d4198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d419c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d419cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d41a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d41a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d41a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d41a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d41a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d41acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d41b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d41b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d41b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d41b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d41b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d41bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d41c0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2d41c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d41c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d41c8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2d41c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d41ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d41d0: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D41D0u;
    SET_GPR_U32(ctx, 31, 0x2D41D8u);
    ctx->pc = 0x2D41D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D41D0u;
            // 0x2d41d4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D41D8u; }
        if (ctx->pc != 0x2D41D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D41D8u; }
        if (ctx->pc != 0x2D41D8u) { return; }
    }
    ctx->pc = 0x2D41D8u;
label_2d41d8:
    // 0x2d41d8: 0x440001b  bltz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D41D8u;
    {
        const bool branch_taken_0x2d41d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D41DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D41D8u;
            // 0x2d41dc: 0x101823  negu        $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41d8) {
            ctx->pc = 0x2D4248u;
            goto label_2d4248;
        }
    }
    ctx->pc = 0x2D41E0u;
    // 0x2d41e0: 0x1650000d  bne         $s2, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D41E0u;
    {
        const bool branch_taken_0x2d41e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D41E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D41E0u;
            // 0x2d41e4: 0xaeb20000  sw          $s2, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41e0) {
            ctx->pc = 0x2D4218u;
            goto label_2d4218;
        }
    }
    ctx->pc = 0x2D41E8u;
    // 0x2d41e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d41e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d41ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d41f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d41f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d41f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d41f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d41f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d41fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d41fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4204: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d4204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4208: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d4208u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d420c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d420cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4210: 0x80b3fdc  j           func_2CFF70
    ctx->pc = 0x2D4210u;
    ctx->pc = 0x2D4214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4210u;
            // 0x2d4214: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (runtime->hasFunction(0x2CFF70u)) {
        auto targetFn = runtime->lookupFunction(0x2CFF70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CFF70_0x2cff70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D4218u;
label_2d4218:
    // 0x2d4218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d421c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d421cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4220: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d4220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4224: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d4224u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4228: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d4228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d422c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d422cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4234: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d4234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4238: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d4238u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d423c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d423cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4240: 0x80b3f3e  j           func_2CFCF8
    ctx->pc = 0x2D4240u;
    ctx->pc = 0x2D4244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4240u;
            // 0x2d4244: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCF8u;
    if (runtime->hasFunction(0x2CFCF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFCF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CFCF8_0x2cfcf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D4248u;
label_2d4248:
    // 0x2d4248: 0x1650000d  bne         $s2, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D4248u;
    {
        const bool branch_taken_0x2d4248 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D424Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4248u;
            // 0x2d424c: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4248) {
            ctx->pc = 0x2D4280u;
            goto label_2d4280;
        }
    }
    ctx->pc = 0x2D4250u;
    // 0x2d4250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d4250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4254: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d4254u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d4258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d425c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d425cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4260: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d4260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4264: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d4264u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d426c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d426cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4270: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d4270u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4274: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d4274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4278: 0x80b3fdc  j           func_2CFF70
    ctx->pc = 0x2D4278u;
    ctx->pc = 0x2D427Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4278u;
            // 0x2d427c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (runtime->hasFunction(0x2CFF70u)) {
        auto targetFn = runtime->lookupFunction(0x2CFF70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CFF70_0x2cff70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D4280u;
label_2d4280:
    // 0x2d4280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4288: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d4288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d428c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d428cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4290: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d4290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4294: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d4294u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d429c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d429cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d42a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d42a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d42a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d42a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d42a8: 0x80b3f3e  j           func_2CFCF8
    ctx->pc = 0x2D42A8u;
    ctx->pc = 0x2D42ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D42A8u;
            // 0x2d42ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCF8u;
    if (runtime->hasFunction(0x2CFCF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFCF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CFCF8_0x2cfcf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D42B0u;
    ctx->pc = 0x2d42b0u;
}
