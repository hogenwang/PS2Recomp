#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F8948
// Address: 0x2f8948 - 0x2f8de8
void sub_002F8948_0x2f8948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8948_0x2f8948");
#endif

    switch (ctx->pc) {
        case 0x2f8980u: goto label_2f8980;
        case 0x2f899cu: goto label_2f899c;
        case 0x2f89acu: goto label_2f89ac;
        case 0x2f89dcu: goto label_2f89dc;
        case 0x2f8a04u: goto label_2f8a04;
        case 0x2f8a24u: goto label_2f8a24;
        case 0x2f8a4cu: goto label_2f8a4c;
        case 0x2f8a78u: goto label_2f8a78;
        case 0x2f8aa0u: goto label_2f8aa0;
        case 0x2f8b40u: goto label_2f8b40;
        case 0x2f8b78u: goto label_2f8b78;
        case 0x2f8ba8u: goto label_2f8ba8;
        case 0x2f8bb8u: goto label_2f8bb8;
        case 0x2f8bd0u: goto label_2f8bd0;
        case 0x2f8becu: goto label_2f8bec;
        case 0x2f8d08u: goto label_2f8d08;
        case 0x2f8dacu: goto label_2f8dac;
        case 0x2f8dc8u: goto label_2f8dc8;
        default: break;
    }

    ctx->pc = 0x2f8948u;

label_2f8948:
    // 0x2f8948: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f8948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f894c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f894cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f8950: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2f8950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2f8954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f8954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8958: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f8958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f895c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2f895cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8960: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f8960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f8964: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f8964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8968: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f8968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f896c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f896cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f8970: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f8970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f8974: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f8974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f8978: 0xc0bc79c  jal         func_2F1E70
    ctx->pc = 0x2F8978u;
    SET_GPR_U32(ctx, 31, 0x2F8980u);
    ctx->pc = 0x2F897Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8978u;
            // 0x2f897c: 0xffb40040  sd          $s4, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E70u;
    if (runtime->hasFunction(0x2F1E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F1E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8980u; }
        if (ctx->pc != 0x2F8980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1E70_0x2f1e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8980u; }
        if (ctx->pc != 0x2F8980u) { return; }
    }
    ctx->pc = 0x2F8980u;
label_2f8980:
    // 0x2f8980: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f8980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8984: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f8984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f8988: 0x2708823  subu        $s1, $s3, $s0
    ctx->pc = 0x2f8988u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2f898c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F898Cu;
    {
        const bool branch_taken_0x2f898c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F898Cu;
            // 0x2f8990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f898c) {
            ctx->pc = 0x2F89A4u;
            goto label_2f89a4;
        }
    }
    ctx->pc = 0x2F8994u;
    // 0x2f8994: 0xc0bdff4  jal         func_2F7FD0
    ctx->pc = 0x2F8994u;
    SET_GPR_U32(ctx, 31, 0x2F899Cu);
    ctx->pc = 0x2F8998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8994u;
            // 0x2f8998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7FD0u;
    if (runtime->hasFunction(0x2F7FD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F7FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F899Cu; }
        if (ctx->pc != 0x2F899Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7FD0_0x2f7fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F899Cu; }
        if (ctx->pc != 0x2F899Cu) { return; }
    }
    ctx->pc = 0x2F899Cu;
label_2f899c:
    // 0x2f899c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F899Cu;
    {
        const bool branch_taken_0x2f899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f899c) {
            ctx->pc = 0x2F89ACu;
            goto label_2f89ac;
        }
    }
    ctx->pc = 0x2F89A4u;
label_2f89a4:
    // 0x2f89a4: 0xc0be04c  jal         func_2F8130
    ctx->pc = 0x2F89A4u;
    SET_GPR_U32(ctx, 31, 0x2F89ACu);
    ctx->pc = 0x2F89A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89A4u;
            // 0x2f89a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8130u;
    if (runtime->hasFunction(0x2F8130u)) {
        auto targetFn = runtime->lookupFunction(0x2F8130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F89ACu; }
        if (ctx->pc != 0x2F89ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8130_0x2f8130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F89ACu; }
        if (ctx->pc != 0x2F89ACu) { return; }
    }
    ctx->pc = 0x2F89ACu;
label_2f89ac:
    // 0x2f89ac: 0x440005d  bltz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2F89ACu;
    {
        const bool branch_taken_0x2f89ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F89B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89ACu;
            // 0x2f89b0: 0x2519023  subu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89ac) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F89B4u;
    // 0x2f89b4: 0x2a420015  slti        $v0, $s2, 0x15
    ctx->pc = 0x2f89b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x2f89b8: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2F89B8u;
    {
        const bool branch_taken_0x2f89b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F89BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89B8u;
            // 0x2f89bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89b8) {
            ctx->pc = 0x2F8B48u;
            goto label_2f8b48;
        }
    }
    ctx->pc = 0x2F89C0u;
    // 0x2f89c0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2f89c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f89c4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2f89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f89c8: 0x82120000  lb          $s2, 0x0($s0)
    ctx->pc = 0x2f89c8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f89cc: 0x16420055  bne         $s2, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2F89CCu;
    {
        const bool branch_taken_0x2f89cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F89D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89CCu;
            // 0x2f89d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89cc) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F89D4u;
    // 0x2f89d4: 0xc0be0b6  jal         func_2F82D8
    ctx->pc = 0x2F89D4u;
    SET_GPR_U32(ctx, 31, 0x2F89DCu);
    ctx->pc = 0x2F89D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89D4u;
            // 0x2f89d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F82D8u;
    if (runtime->hasFunction(0x2F82D8u)) {
        auto targetFn = runtime->lookupFunction(0x2F82D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F89DCu; }
        if (ctx->pc != 0x2F89DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F82D8_0x2f82d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F89DCu; }
        if (ctx->pc != 0x2F89DCu) { return; }
    }
    ctx->pc = 0x2F89DCu;
label_2f89dc:
    // 0x2f89dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f89dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f89e0: 0x1aa00050  blez        $s5, . + 4 + (0x50 << 2)
    ctx->pc = 0x2F89E0u;
    {
        const bool branch_taken_0x2f89e0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2F89E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89E0u;
            // 0x2f89e4: 0x2aa2000d  slti        $v0, $s5, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89e0) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F89E8u;
    // 0x2f89e8: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2F89E8u;
    {
        const bool branch_taken_0x2f89e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F89ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89E8u;
            // 0x2f89ec: 0x26100003  addiu       $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89e8) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F89F0u;
    // 0x2f89f0: 0x82110000  lb          $s1, 0x0($s0)
    ctx->pc = 0x2f89f0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f89f4: 0x1632004b  bne         $s1, $s2, . + 4 + (0x4B << 2)
    ctx->pc = 0x2F89F4u;
    {
        const bool branch_taken_0x2f89f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F89F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89F4u;
            // 0x2f89f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89f4) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F89FCu;
    // 0x2f89fc: 0xc0be134  jal         func_2F84D0
    ctx->pc = 0x2F89FCu;
    SET_GPR_U32(ctx, 31, 0x2F8A04u);
    ctx->pc = 0x2F8A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89FCu;
            // 0x2f8a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F84D0u;
    if (runtime->hasFunction(0x2F84D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F84D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8A04u; }
        if (ctx->pc != 0x2F8A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F84D0_0x2f84d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8A04u; }
        if (ctx->pc != 0x2F8A04u) { return; }
    }
    ctx->pc = 0x2F8A04u;
label_2f8a04:
    // 0x2f8a04: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2f8a04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8a08: 0x1ac00046  blez        $s6, . + 4 + (0x46 << 2)
    ctx->pc = 0x2F8A08u;
    {
        const bool branch_taken_0x2f8a08 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2F8A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A08u;
            // 0x2f8a0c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a08) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8A10u;
    // 0x2f8a10: 0x82120000  lb          $s2, 0x0($s0)
    ctx->pc = 0x2f8a10u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8a14: 0x16510043  bne         $s2, $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2F8A14u;
    {
        const bool branch_taken_0x2f8a14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F8A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A14u;
            // 0x2f8a18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a14) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8A1Cu;
    // 0x2f8a1c: 0xc0be14a  jal         func_2F8528
    ctx->pc = 0x2F8A1Cu;
    SET_GPR_U32(ctx, 31, 0x2F8A24u);
    ctx->pc = 0x2F8A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A1Cu;
            // 0x2f8a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8528u;
    if (runtime->hasFunction(0x2F8528u)) {
        auto targetFn = runtime->lookupFunction(0x2F8528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8A24u; }
        if (ctx->pc != 0x2F8A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8528_0x2f8528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8A24u; }
        if (ctx->pc != 0x2F8A24u) { return; }
    }
    ctx->pc = 0x2F8A24u;
label_2f8a24:
    // 0x2f8a24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f8a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8a28: 0x2a2207b2  slti        $v0, $s1, 0x7B2
    ctx->pc = 0x2f8a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1970) ? 1 : 0);
    // 0x2f8a2c: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2F8A2Cu;
    {
        const bool branch_taken_0x2f8a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A2Cu;
            // 0x2f8a30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a2c) {
            ctx->pc = 0x2F8B48u;
            goto label_2f8b48;
        }
    }
    ctx->pc = 0x2F8A34u;
    // 0x2f8a34: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2f8a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2f8a38: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2f8a38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8a3c: 0x14520039  bne         $v0, $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x2F8A3Cu;
    {
        const bool branch_taken_0x2f8a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F8A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A3Cu;
            // 0x2f8a40: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a3c) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8A44u;
    // 0x2f8a44: 0xc0be134  jal         func_2F84D0
    ctx->pc = 0x2F8A44u;
    SET_GPR_U32(ctx, 31, 0x2F8A4Cu);
    ctx->pc = 0x2F8A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A44u;
            // 0x2f8a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F84D0u;
    if (runtime->hasFunction(0x2F84D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F84D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8A4Cu; }
        if (ctx->pc != 0x2F8A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F84D0_0x2f84d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8A4Cu; }
        if (ctx->pc != 0x2F8A4Cu) { return; }
    }
    ctx->pc = 0x2F8A4Cu;
label_2f8a4c:
    // 0x2f8a4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f8a4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8a50: 0x6800034  bltz        $s4, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F8A50u;
    {
        const bool branch_taken_0x2f8a50 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2F8A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A50u;
            // 0x2f8a54: 0x2a820018  slti        $v0, $s4, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a50) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8A58u;
    // 0x2f8a58: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F8A58u;
    {
        const bool branch_taken_0x2f8a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A58u;
            // 0x2f8a5c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a58) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8A60u;
    // 0x2f8a60: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x2f8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2f8a64: 0x82120000  lb          $s2, 0x0($s0)
    ctx->pc = 0x2f8a64u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8a68: 0x1642002e  bne         $s2, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F8A68u;
    {
        const bool branch_taken_0x2f8a68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A68u;
            // 0x2f8a6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a68) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8A70u;
    // 0x2f8a70: 0xc0be134  jal         func_2F84D0
    ctx->pc = 0x2F8A70u;
    SET_GPR_U32(ctx, 31, 0x2F8A78u);
    ctx->pc = 0x2F8A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A70u;
            // 0x2f8a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F84D0u;
    if (runtime->hasFunction(0x2F84D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F84D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8A78u; }
        if (ctx->pc != 0x2F8A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F84D0_0x2f84d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8A78u; }
        if (ctx->pc != 0x2F8A78u) { return; }
    }
    ctx->pc = 0x2F8A78u;
label_2f8a78:
    // 0x2f8a78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f8a78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8a7c: 0x6600029  bltz        $s3, . + 4 + (0x29 << 2)
    ctx->pc = 0x2F8A7Cu;
    {
        const bool branch_taken_0x2f8a7c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2F8A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A7Cu;
            // 0x2f8a80: 0x2a62003c  slti        $v0, $s3, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a7c) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8A84u;
    // 0x2f8a84: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F8A84u;
    {
        const bool branch_taken_0x2f8a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A84u;
            // 0x2f8a88: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a84) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8A8Cu;
    // 0x2f8a8c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2f8a8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8a90: 0x14520024  bne         $v0, $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x2F8A90u;
    {
        const bool branch_taken_0x2f8a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F8A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A90u;
            // 0x2f8a94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a90) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8A98u;
    // 0x2f8a98: 0xc0be134  jal         func_2F84D0
    ctx->pc = 0x2F8A98u;
    SET_GPR_U32(ctx, 31, 0x2F8AA0u);
    ctx->pc = 0x2F8A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A98u;
            // 0x2f8a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F84D0u;
    if (runtime->hasFunction(0x2F84D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F84D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8AA0u; }
        if (ctx->pc != 0x2F8AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F84D0_0x2f84d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8AA0u; }
        if (ctx->pc != 0x2F8AA0u) { return; }
    }
    ctx->pc = 0x2F8AA0u;
label_2f8aa0:
    // 0x2f8aa0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f8aa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8aa4: 0x520001f  bltz        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F8AA4u;
    {
        const bool branch_taken_0x2f8aa4 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x2F8AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8AA4u;
            // 0x2f8aa8: 0x2922003c  slti        $v0, $t1, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8aa4) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8AACu;
    // 0x2f8aac: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F8AACu;
    {
        const bool branch_taken_0x2f8aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8AACu;
            // 0x2f8ab0: 0x32220003  andi        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8aac) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8AB4u;
    // 0x2f8ab4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F8AB4u;
    {
        const bool branch_taken_0x2f8ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8AB4u;
            // 0x2f8ab8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ab4) {
            ctx->pc = 0x2F8AF8u;
            goto label_2f8af8;
        }
    }
    ctx->pc = 0x2F8ABCu;
    // 0x2f8abc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2f8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f8ac0: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x2f8ac0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f8ac4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F8AC4u;
    {
        const bool branch_taken_0x2f8ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ac4) {
            ctx->pc = 0x2F8AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8AC4u;
            // 0x2f8ac8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8ACCu;
            goto label_2f8acc;
        }
    }
    ctx->pc = 0x2F8ACCu;
label_2f8acc:
    // 0x2f8acc: 0x1810  mfhi        $v1
    ctx->pc = 0x2f8accu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f8ad0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F8AD0u;
    {
        const bool branch_taken_0x2f8ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8AD0u;
            // 0x2f8ad4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ad0) {
            ctx->pc = 0x2F8AF8u;
            goto label_2f8af8;
        }
    }
    ctx->pc = 0x2F8AD8u;
    // 0x2f8ad8: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2f8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2f8adc: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x2f8adcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f8ae0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F8AE0u;
    {
        const bool branch_taken_0x2f8ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ae0) {
            ctx->pc = 0x2F8AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8AE0u;
            // 0x2f8ae4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8AE8u;
            goto label_2f8ae8;
        }
    }
    ctx->pc = 0x2F8AE8u;
label_2f8ae8:
    // 0x2f8ae8: 0x1810  mfhi        $v1
    ctx->pc = 0x2f8ae8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f8aec: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8AECu;
    {
        const bool branch_taken_0x2f8aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8AECu;
            // 0x2f8af0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8aec) {
            ctx->pc = 0x2F8AF8u;
            goto label_2f8af8;
        }
    }
    ctx->pc = 0x2F8AF4u;
    // 0x2f8af4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8af8:
    // 0x2f8af8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f8afc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2f8afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2f8b00: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2f8b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f8b04: 0x248405e0  addiu       $a0, $a0, 0x5E0
    ctx->pc = 0x2f8b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1504));
    // 0x2f8b08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f8b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f8b0c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2f8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2f8b10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f8b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f8b14: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2f8b14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8b18: 0x76182a  slt         $v1, $v1, $s6
    ctx->pc = 0x2f8b18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2f8b1c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8B1Cu;
    {
        const bool branch_taken_0x2f8b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8B1Cu;
            // 0x2f8b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b1c) {
            ctx->pc = 0x2F8B2Cu;
            goto label_2f8b2c;
        }
    }
    ctx->pc = 0x2F8B24u;
label_2f8b24:
    // 0x2f8b24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F8B24u;
    {
        const bool branch_taken_0x2f8b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8B24u;
            // 0x2f8b28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b24) {
            ctx->pc = 0x2F8B48u;
            goto label_2f8b48;
        }
    }
    ctx->pc = 0x2F8B2Cu;
label_2f8b2c:
    // 0x2f8b2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2f8b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b30: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2f8b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b34: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2f8b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b38: 0xc0be174  jal         func_2F85D0
    ctx->pc = 0x2F8B38u;
    SET_GPR_U32(ctx, 31, 0x2F8B40u);
    ctx->pc = 0x2F8B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8B38u;
            // 0x2f8b3c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F85D0u;
    if (runtime->hasFunction(0x2F85D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F85D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8B40u; }
        if (ctx->pc != 0x2F8B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F85D0_0x2f85d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8B40u; }
        if (ctx->pc != 0x2F8B40u) { return; }
    }
    ctx->pc = 0x2F8B40u;
label_2f8b40:
    // 0x2f8b40: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x2f8b40u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x2f8b44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b48:
    // 0x2f8b48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f8b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f8b4c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2f8b4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f8b50: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2f8b50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f8b54: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f8b54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f8b58: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f8b58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8b5c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f8b5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8b60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f8b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8b64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f8b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f8b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8B6Cu;
            // 0x2f8b70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8B74u;
    // 0x2f8b74: 0x0  nop
    ctx->pc = 0x2f8b74u;
    // NOP
label_2f8b78:
    // 0x2f8b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f8b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f8b7c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2f8b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f8b80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8B80u;
    {
        const bool branch_taken_0x2f8b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8B80u;
            // 0x2f8b84: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b80) {
            ctx->pc = 0x2F8B90u;
            goto label_2f8b90;
        }
    }
    ctx->pc = 0x2F8B88u;
    // 0x2f8b88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F8B88u;
    {
        const bool branch_taken_0x2f8b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8B88u;
            // 0x2f8b8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b88) {
            ctx->pc = 0x2F8BC0u;
            goto label_2f8bc0;
        }
    }
    ctx->pc = 0x2F8B90u;
label_2f8b90:
    // 0x2f8b90: 0x80830003  lb          $v1, 0x3($a0)
    ctx->pc = 0x2f8b90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2f8b94: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2f8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f8b98: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8B98u;
    {
        const bool branch_taken_0x2f8b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f8b98) {
            ctx->pc = 0x2F8BB0u;
            goto label_2f8bb0;
        }
    }
    ctx->pc = 0x2F8BA0u;
    // 0x2f8ba0: 0xc0be252  jal         func_2F8948
    ctx->pc = 0x2F8BA0u;
    SET_GPR_U32(ctx, 31, 0x2F8BA8u);
    ctx->pc = 0x2F8948u;
    goto label_2f8948;
    ctx->pc = 0x2F8BA8u;
label_2f8ba8:
    // 0x2f8ba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8BA8u;
    {
        const bool branch_taken_0x2f8ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8BA8u;
            // 0x2f8bac: 0x40102d  daddu       $v0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ba8) {
            ctx->pc = 0x2F8BB8u;
            goto label_2f8bb8;
        }
    }
    ctx->pc = 0x2F8BB0u;
label_2f8bb0:
    // 0x2f8bb0: 0xc0be1a6  jal         func_2F8698
    ctx->pc = 0x2F8BB0u;
    SET_GPR_U32(ctx, 31, 0x2F8BB8u);
    ctx->pc = 0x2F8698u;
    if (runtime->hasFunction(0x2F8698u)) {
        auto targetFn = runtime->lookupFunction(0x2F8698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8BB8u; }
        if (ctx->pc != 0x2F8BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8698_0x2f8698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8BB8u; }
        if (ctx->pc != 0x2F8BB8u) { return; }
    }
    ctx->pc = 0x2F8BB8u;
label_2f8bb8:
    // 0x2f8bb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f8bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f8bbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f8bbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2f8bc0:
    // 0x2f8bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f8bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8BC4u;
            // 0x2f8bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8BCCu;
    // 0x2f8bcc: 0x0  nop
    ctx->pc = 0x2f8bccu;
    // NOP
label_2f8bd0:
    // 0x2f8bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f8bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f8bd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f8bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f8bd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f8bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8bdc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f8bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f8be0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f8be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f8be4: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F8BE4u;
    SET_GPR_U32(ctx, 31, 0x2F8BECu);
    ctx->pc = 0x2F8BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8BE4u;
            // 0x2f8be8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (runtime->hasFunction(0x2F9140u)) {
        auto targetFn = runtime->lookupFunction(0x2F9140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8BECu; }
        if (ctx->pc != 0x2F8BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9140_0x2f9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8BECu; }
        if (ctx->pc != 0x2F8BECu) { return; }
    }
    ctx->pc = 0x2F8BECu;
label_2f8bec:
    // 0x2f8bec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f8becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8bf0: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8BF0u;
    {
        const bool branch_taken_0x2f8bf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8bf0) {
            ctx->pc = 0x2F8BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8BF0u;
            // 0x2f8bf4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8C00u;
            goto label_2f8c00;
        }
    }
    ctx->pc = 0x2F8BF8u;
    // 0x2f8bf8: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2F8BF8u;
    {
        const bool branch_taken_0x2f8bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8BF8u;
            // 0x2f8bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8bf8) {
            ctx->pc = 0x2F8DB4u;
            goto label_2f8db4;
        }
    }
    ctx->pc = 0x2F8C00u;
label_2f8c00:
    // 0x2f8c00: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x2f8c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2f8c04: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2f8c04u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2f8c08: 0x70a4001b  divu1       $zero, $a1, $a0
    ctx->pc = 0x2f8c08u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi1 = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo1=0xFFFFFFFFFFFFFFFFull; ctx->hi1=(uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2f8c0c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2f8c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f8c10: 0x2407016d  addiu       $a3, $zero, 0x16D
    ctx->pc = 0x2f8c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    // 0x2f8c14: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2f8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2f8c18: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F8C18u;
    {
        const bool branch_taken_0x2f8c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8c18) {
            ctx->pc = 0x2F8C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8C18u;
            // 0x2f8c1c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8C20u;
            goto label_2f8c20;
        }
    }
    ctx->pc = 0x2F8C20u;
label_2f8c20:
    // 0x2f8c20: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2f8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2f8c24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2f8c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8c28: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2f8c28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f8c2c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2f8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f8c30: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2f8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f8c34: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2f8c34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2f8c38: 0x260a05e0  addiu       $t2, $s0, 0x5E0
    ctx->pc = 0x2f8c38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 1504));
    // 0x2f8c3c: 0x70002812  mflo1       $a1
    ctx->pc = 0x2f8c3cu;
    SET_GPR_U64(ctx, 5, ctx->lo1);
    // 0x2f8c40: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x2f8c40u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2f8c44: 0x2812  mflo        $a1
    ctx->pc = 0x2f8c44u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2f8c48: 0xc010  mfhi        $t8
    ctx->pc = 0x2f8c48u;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x2f8c4c: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x2f8c4cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2f8c50: 0x2812  mflo        $a1
    ctx->pc = 0x2f8c50u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2f8c54: 0xc810  mfhi        $t9
    ctx->pc = 0x2f8c54u;
    SET_GPR_U64(ctx, 25, ctx->hi);
    // 0x2f8c58: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x2f8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2f8c5c: 0xa7001b  divu        $zero, $a1, $a3
    ctx->pc = 0x2f8c5cu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2f8c60: 0x2012  mflo        $a0
    ctx->pc = 0x2f8c60u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2f8c64: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2f8c64u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2f8c68: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2f8c68u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8c6c: 0x25860001  addiu       $a2, $t4, 0x1
    ctx->pc = 0x2f8c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2f8c70: 0x25820004  addiu       $v0, $t4, 0x4
    ctx->pc = 0x2f8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2f8c74: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x2f8c74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2f8c78: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x2f8c78u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x2f8c7c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2f8c7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2f8c80: 0x7810  mfhi        $t7
    ctx->pc = 0x2f8c80u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x2f8c84: 0x1872018  mult        $a0, $t4, $a3
    ctx->pc = 0x2f8c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f8c88: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f8c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f8c8c: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x2f8c8cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2f8c90: 0x1846023  subu        $t4, $t4, $a0
    ctx->pc = 0x2f8c90u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x2f8c94: 0x10c182a  slt         $v1, $t0, $t4
    ctx->pc = 0x2f8c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2f8c98: 0x25820003  addiu       $v0, $t4, 0x3
    ctx->pc = 0x2f8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
    // 0x2f8c9c: 0x183100b  movn        $v0, $t4, $v1
    ctx->pc = 0x2f8c9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x2f8ca0: 0x25840001  addiu       $a0, $t4, 0x1
    ctx->pc = 0x2f8ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2f8ca4: 0x26883  sra         $t5, $v0, 2
    ctx->pc = 0x2f8ca4u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2f8ca8: 0x1873818  mult        $a3, $t4, $a3
    ctx->pc = 0x2f8ca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2f8cac: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x2f8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x2f8cb0: 0x25820004  addiu       $v0, $t4, 0x4
    ctx->pc = 0x2f8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x2f8cb4: 0x1836823  subu        $t5, $t4, $v1
    ctx->pc = 0x2f8cb4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x2f8cb8: 0x104402a  slt         $t0, $t0, $a0
    ctx->pc = 0x2f8cb8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f8cbc: 0x39a30002  xori        $v1, $t5, 0x2
    ctx->pc = 0x2f8cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x2f8cc0: 0x88100b  movn        $v0, $a0, $t0
    ctx->pc = 0x2f8cc0u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2f8cc4: 0x2c6d0001  sltiu       $t5, $v1, 0x1
    ctx->pc = 0x2f8cc4u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f8cc8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2f8cc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2f8ccc: 0x1a94818  mult        $t1, $t5, $t1
    ctx->pc = 0x2f8cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2f8cd0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2f8cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2f8cd4: 0xa75823  subu        $t3, $a1, $a3
    ctx->pc = 0x2f8cd4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2f8cd8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2f8cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2f8cdc: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x2f8cdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2f8ce0: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x2f8ce0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2f8ce4: 0x5600015  bltz        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F8CE4u;
    {
        const bool branch_taken_0x2f8ce4 = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x2F8CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8CE4u;
            // 0x2f8ce8: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ce4) {
            ctx->pc = 0x2F8D3Cu;
            goto label_2f8d3c;
        }
    }
    ctx->pc = 0x2F8CECu;
    // 0x2f8cec: 0x258a07b2  addiu       $t2, $t4, 0x7B2
    ctx->pc = 0x2f8cecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 1970));
    // 0x2f8cf0: 0xf3880  sll         $a3, $t7, 2
    ctx->pc = 0x2f8cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2f8cf4: 0x3c0c0040  lui         $t4, 0x40
    ctx->pc = 0x2f8cf4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)64 << 16));
    // 0x2f8cf8: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2f8cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2f8cfc: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2f8cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2f8d00: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2f8d00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2f8d04: 0x0  nop
    ctx->pc = 0x2f8d04u;
    // NOP
label_2f8d08:
    // 0x2f8d08: 0x29c2000c  slti        $v0, $t6, 0xC
    ctx->pc = 0x2f8d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2f8d0c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F8D0Cu;
    {
        const bool branch_taken_0x2f8d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D0Cu;
            // 0x2f8d10: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d0c) {
            ctx->pc = 0x2F8D50u;
            goto label_2f8d50;
        }
    }
    ctx->pc = 0x2F8D14u;
    // 0x2f8d14: 0x260405e0  addiu       $a0, $s0, 0x5E0
    ctx->pc = 0x2f8d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1504));
    // 0x2f8d18: 0x1a21818  mult        $v1, $t5, $v0
    ctx->pc = 0x2f8d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f8d1c: 0x6e1021  addu        $v0, $v1, $t6
    ctx->pc = 0x2f8d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2f8d20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f8d24: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2f8d24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8d28: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x2f8d28u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2f8d2c: 0x563fff6  bgezl       $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F8D2Cu;
    {
        const bool branch_taken_0x2f8d2c = (GPR_S32(ctx, 11) >= 0);
        if (branch_taken_0x2f8d2c) {
            ctx->pc = 0x2F8D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D2Cu;
            // 0x2f8d30: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8d08;
        }
    }
    ctx->pc = 0x2F8D34u;
    // 0x2f8d34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F8D34u;
    {
        const bool branch_taken_0x2f8d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8D34u;
            // 0x2f8d38: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d34) {
            ctx->pc = 0x2F8D54u;
            goto label_2f8d54;
        }
    }
    ctx->pc = 0x2F8D3Cu;
label_2f8d3c:
    // 0x2f8d3c: 0x258a07b2  addiu       $t2, $t4, 0x7B2
    ctx->pc = 0x2f8d3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 1970));
    // 0x2f8d40: 0xf3880  sll         $a3, $t7, 2
    ctx->pc = 0x2f8d40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2f8d44: 0x3c0c0040  lui         $t4, 0x40
    ctx->pc = 0x2f8d44u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)64 << 16));
    // 0x2f8d48: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2f8d48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2f8d4c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2f8d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_2f8d50:
    // 0x2f8d50: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2f8d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f8d54:
    // 0x2f8d54: 0x260605e0  addiu       $a2, $s0, 0x5E0
    ctx->pc = 0x2f8d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1504));
    // 0x2f8d58: 0x1a41018  mult        $v0, $t5, $a0
    ctx->pc = 0x2f8d58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f8d5c: 0x24a50618  addiu       $a1, $a1, 0x618
    ctx->pc = 0x2f8d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1560));
    // 0x2f8d60: 0xe1880  sll         $v1, $t6, 2
    ctx->pc = 0x2f8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x2f8d64: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2f8d64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2f8d68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f8d6c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2f8d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f8d70: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2f8d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f8d74: 0x4e2021  addu        $a0, $v0, $t6
    ctx->pc = 0x2f8d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2f8d78: 0x70001810  mfhi1       $v1
    ctx->pc = 0x2f8d78u;
    SET_GPR_U64(ctx, 3, ctx->hi1);
    // 0x2f8d7c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2f8d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f8d80: 0x250205f8  addiu       $v0, $t0, 0x5F8
    ctx->pc = 0x2f8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1528));
    // 0x2f8d84: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x2f8d84u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f8d88: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2f8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2f8d8c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2f8d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8d90: 0x258626a8  addiu       $a2, $t4, 0x26A8
    ctx->pc = 0x2f8d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 9896));
    // 0x2f8d94: 0x1684021  addu        $t0, $t3, $t0
    ctx->pc = 0x2f8d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x2f8d98: 0xafb80000  sw          $t8, 0x0($sp)
    ctx->pc = 0x2f8d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 24));
    // 0x2f8d9c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2f8d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2f8da0: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x2f8da0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8da4: 0xc043e24  jal         func_10F890
    ctx->pc = 0x2F8DA4u;
    SET_GPR_U32(ctx, 31, 0x2F8DACu);
    ctx->pc = 0x2F8DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8DA4u;
            // 0x2f8da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (runtime->hasFunction(0x10F890u)) {
        auto targetFn = runtime->lookupFunction(0x10F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8DACu; }
        if (ctx->pc != 0x2F8DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F890_0x10f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8DACu; }
        if (ctx->pc != 0x2F8DACu) { return; }
    }
    ctx->pc = 0x2F8DACu;
label_2f8dac:
    // 0x2f8dac: 0xa220001d  sb          $zero, 0x1D($s1)
    ctx->pc = 0x2f8dacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f8db0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f8db0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f8db4:
    // 0x2f8db4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f8db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8db8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f8db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8dbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f8dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8DC0u;
            // 0x2f8dc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8DC8u;
label_2f8dc8:
    // 0x2f8dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8dcc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2f8dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2f8dd0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2f8dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2f8dd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8dd8: 0xac830648  sw          $v1, 0x648($a0)
    ctx->pc = 0x2f8dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1608), GPR_U32(ctx, 3));
    // 0x2f8ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8DDCu;
            // 0x2f8de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8DE4u;
    // 0x2f8de4: 0x0  nop
    ctx->pc = 0x2f8de4u;
    // NOP
    ctx->pc = 0x2f8de8u;
}
