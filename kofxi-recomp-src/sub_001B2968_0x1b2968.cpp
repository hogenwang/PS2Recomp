#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2968
// Address: 0x1b2968 - 0x1b2bd0
void sub_001B2968_0x1b2968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2968_0x1b2968");
#endif

    switch (ctx->pc) {
        case 0x1b2980u: goto label_1b2980;
        case 0x1b29a0u: goto label_1b29a0;
        case 0x1b29ccu: goto label_1b29cc;
        case 0x1b29e4u: goto label_1b29e4;
        case 0x1b29fcu: goto label_1b29fc;
        case 0x1b2a28u: goto label_1b2a28;
        case 0x1b2a60u: goto label_1b2a60;
        case 0x1b2a68u: goto label_1b2a68;
        case 0x1b2a78u: goto label_1b2a78;
        case 0x1b2a98u: goto label_1b2a98;
        case 0x1b2af0u: goto label_1b2af0;
        case 0x1b2af8u: goto label_1b2af8;
        case 0x1b2b00u: goto label_1b2b00;
        case 0x1b2b08u: goto label_1b2b08;
        case 0x1b2b28u: goto label_1b2b28;
        case 0x1b2b58u: goto label_1b2b58;
        case 0x1b2b80u: goto label_1b2b80;
        default: break;
    }

    ctx->pc = 0x1b2968u;

    // 0x1b2968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b296c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2970: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2970u;
    {
        const bool branch_taken_0x1b2970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2970u;
            // 0x1b2974: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2970) {
            ctx->pc = 0x1B2990u;
            goto label_1b2990;
        }
    }
    ctx->pc = 0x1B2978u;
    // 0x1b2978: 0xc06cd92  jal         func_1B3648
    ctx->pc = 0x1B2978u;
    SET_GPR_U32(ctx, 31, 0x1B2980u);
    ctx->pc = 0x1B3648u;
    if (runtime->hasFunction(0x1B3648u)) {
        auto targetFn = runtime->lookupFunction(0x1B3648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2980u; }
        if (ctx->pc != 0x1B2980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3648_0x1b3648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2980u; }
        if (ctx->pc != 0x1B2980u) { return; }
    }
    ctx->pc = 0x1B2980u;
label_1b2980:
    // 0x1b2980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2984: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b2984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b2988: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b2988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b298c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b298cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b2990:
    // 0x1b2990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2994: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b2994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2998: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B299Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2998u;
            // 0x1b299c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B29A0u;
label_1b29a0:
    // 0x1b29a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b29a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b29a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b29a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b29a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b29ac: 0x24523030  addiu       $s2, $v0, 0x3030
    ctx->pc = 0x1b29acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12336));
    // 0x1b29b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b29b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b29b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b29b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b29b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b29bc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B29BCu;
    {
        const bool branch_taken_0x1b29bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B29C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29BCu;
            // 0x1b29c0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29bc) {
            ctx->pc = 0x1B2A04u;
            goto label_1b2a04;
        }
    }
    ctx->pc = 0x1B29C4u;
    // 0x1b29c4: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x1B29C4u;
    SET_GPR_U32(ctx, 31, 0x1B29CCu);
    ctx->pc = 0x1B29C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29C4u;
            // 0x1b29c8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29CCu; }
        if (ctx->pc != 0x1B29CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29CCu; }
        if (ctx->pc != 0x1B29CCu) { return; }
    }
    ctx->pc = 0x1B29CCu;
label_1b29cc:
    // 0x1b29cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b29ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29d0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b29d4: 0x8c453000  lw          $a1, 0x3000($v0)
    ctx->pc = 0x1b29d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12288)));
    // 0x1b29d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b29d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29dc: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B29DCu;
    SET_GPR_U32(ctx, 31, 0x1B29E4u);
    ctx->pc = 0x1B29E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29DCu;
            // 0x1b29e0: 0x26103088  addiu       $s0, $s0, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29E4u; }
        if (ctx->pc != 0x1B29E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29E4u; }
        if (ctx->pc != 0x1B29E4u) { return; }
    }
    ctx->pc = 0x1B29E4u;
label_1b29e4:
    // 0x1b29e4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b29e8: 0xac62a920  sw          $v0, -0x56E0($v1)
    ctx->pc = 0x1b29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945056), GPR_U32(ctx, 2));
    // 0x1b29ec: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1b29ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1b29f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b29f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b29f4: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B29F4u;
    SET_GPR_U32(ctx, 31, 0x1B29FCu);
    ctx->pc = 0x1B29F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29F4u;
            // 0x1b29f8: 0xacb1a924  sw          $s1, -0x56DC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294945060), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3198u;
    if (runtime->hasFunction(0x1B3198u)) {
        auto targetFn = runtime->lookupFunction(0x1B3198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29FCu; }
        if (ctx->pc != 0x1B29FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadResumeIfSuspended_0x1b3198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29FCu; }
        if (ctx->pc != 0x1B29FCu) { return; }
    }
    ctx->pc = 0x1B29FCu;
label_1b29fc:
    // 0x1b29fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b29fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2a00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b2a04:
    // 0x1b2a04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b2a08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2a0c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1b2a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1b2a10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2a14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2a18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b2a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A1Cu;
            // 0x1b2a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2A24u;
    // 0x1b2a24: 0x0  nop
    ctx->pc = 0x1b2a24u;
    // NOP
label_1b2a28:
    // 0x1b2a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2a2c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2a30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2a34: 0x24713030  addiu       $s1, $v1, 0x3030
    ctx->pc = 0x1b2a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 12336));
    // 0x1b2a38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2a3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2a40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b2a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2a48: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2A48u;
    {
        const bool branch_taken_0x1b2a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A48u;
            // 0x1b2a4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a48) {
            ctx->pc = 0x1B2A78u;
            goto label_1b2a78;
        }
    }
    ctx->pc = 0x1B2A50u;
    // 0x1b2a50: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b2a50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b2a54: 0x26103088  addiu       $s0, $s0, 0x3088
    ctx->pc = 0x1b2a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12424));
    // 0x1b2a58: 0xc06cc80  jal         func_1B3200
    ctx->pc = 0x1B2A58u;
    SET_GPR_U32(ctx, 31, 0x1B2A60u);
    ctx->pc = 0x1B2A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A58u;
            // 0x1b2a5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3200u;
    if (runtime->hasFunction(0x1B3200u)) {
        auto targetFn = runtime->lookupFunction(0x1B3200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A60u; }
        if (ctx->pc != 0x1B2A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadSuspendIfRunnable_0x1b3200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A60u; }
        if (ctx->pc != 0x1B2A60u) { return; }
    }
    ctx->pc = 0x1B2A60u;
label_1b2a60:
    // 0x1b2a60: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x1B2A60u;
    SET_GPR_U32(ctx, 31, 0x1B2A68u);
    ctx->pc = 0x1B2A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A60u;
            // 0x1b2a64: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A68u; }
        if (ctx->pc != 0x1B2A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A68u; }
        if (ctx->pc != 0x1B2A68u) { return; }
    }
    ctx->pc = 0x1B2A68u;
label_1b2a68:
    // 0x1b2a68: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b2a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b2a6c: 0x8c65a920  lw          $a1, -0x56E0($v1)
    ctx->pc = 0x1b2a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945056)));
    // 0x1b2a70: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B2A70u;
    SET_GPR_U32(ctx, 31, 0x1B2A78u);
    ctx->pc = 0x1B2A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A70u;
            // 0x1b2a74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A78u; }
        if (ctx->pc != 0x1B2A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A78u; }
        if (ctx->pc != 0x1B2A78u) { return; }
    }
    ctx->pc = 0x1B2A78u;
label_1b2a78:
    // 0x1b2a78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2a7c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B2A7Cu;
    {
        const bool branch_taken_0x1b2a7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b2a7c) {
            ctx->pc = 0x1B2A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A7Cu;
            // 0x1b2a80: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2A84u;
            goto label_1b2a84;
        }
    }
    ctx->pc = 0x1B2A84u;
label_1b2a84:
    // 0x1b2a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2a88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2a8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A90u;
            // 0x1b2a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2A98u;
label_1b2a98:
    // 0x1b2a98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b2a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b2a9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2aa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b2aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aa4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b2aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b2aa8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b2aa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2ab0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2ab4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2ab8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b2ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b2abc: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B2ABCu;
    {
        const bool branch_taken_0x1b2abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2ABCu;
            // 0x1b2ac0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2abc) {
            ctx->pc = 0x1B2B58u;
            goto label_1b2b58;
        }
    }
    ctx->pc = 0x1B2AC4u;
    // 0x1b2ac4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2ac8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b2ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b2acc: 0x8c453000  lw          $a1, 0x3000($v0)
    ctx->pc = 0x1b2accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12288)));
    // 0x1b2ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2ad4: 0x26103034  addiu       $s0, $s0, 0x3034
    ctx->pc = 0x1b2ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12340));
    // 0x1b2ad8: 0x3c120beb  lui         $s2, 0xBEB
    ctx->pc = 0x1b2ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3051 << 16));
    // 0x1b2adc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b2adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b2ae0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1b2ae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ae4: 0x3652c1ff  ori         $s2, $s2, 0xC1FF
    ctx->pc = 0x1b2ae4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)49663);
    // 0x1b2ae8: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B2AE8u;
    SET_GPR_U32(ctx, 31, 0x1B2AF0u);
    ctx->pc = 0x1B2AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AE8u;
            // 0x1b2aec: 0x3c14003e  lui         $s4, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AF0u; }
        if (ctx->pc != 0x1B2AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AF0u; }
        if (ctx->pc != 0x1B2AF0u) { return; }
    }
    ctx->pc = 0x1B2AF0u;
label_1b2af0:
    // 0x1b2af0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b2af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2af4: 0x0  nop
    ctx->pc = 0x1b2af4u;
    // NOP
label_1b2af8:
    // 0x1b2af8: 0xc06cc4c  jal         func_1B3130
    ctx->pc = 0x1B2AF8u;
    SET_GPR_U32(ctx, 31, 0x1B2B00u);
    ctx->pc = 0x1B2AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AF8u;
            // 0x1b2afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3130u;
    if (runtime->hasFunction(0x1B3130u)) {
        auto targetFn = runtime->lookupFunction(0x1B3130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B00u; }
        if (ctx->pc != 0x1B2B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadWakeIfSleeping_0x1b3130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B00u; }
        if (ctx->pc != 0x1B2B00u) { return; }
    }
    ctx->pc = 0x1B2B00u;
label_1b2b00:
    // 0x1b2b00: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B2B00u;
    SET_GPR_U32(ctx, 31, 0x1B2B08u);
    ctx->pc = 0x1B2B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B00u;
            // 0x1b2b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3198u;
    if (runtime->hasFunction(0x1B3198u)) {
        auto targetFn = runtime->lookupFunction(0x1B3198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B08u; }
        if (ctx->pc != 0x1B2B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadResumeIfSuspended_0x1b3198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B08u; }
        if (ctx->pc != 0x1B2B08u) { return; }
    }
    ctx->pc = 0x1B2B08u;
label_1b2b08:
    // 0x1b2b08: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x1b2b08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b2b0c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2b10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2B10u;
    {
        const bool branch_taken_0x1b2b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B10u;
            // 0x1b2b14: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b10) {
            ctx->pc = 0x1B2B28u;
            goto label_1b2b28;
        }
    }
    ctx->pc = 0x1B2B18u;
    // 0x1b2b18: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B2B18u;
    {
        const bool branch_taken_0x1b2b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b18) {
            ctx->pc = 0x1B2AF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2af8;
        }
    }
    ctx->pc = 0x1B2B20u;
    // 0x1b2b20: 0xc073748  jal         func_1CDD20
    ctx->pc = 0x1B2B20u;
    SET_GPR_U32(ctx, 31, 0x1B2B28u);
    ctx->pc = 0x1B2B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B20u;
            // 0x1b2b24: 0x26847df0  addiu       $a0, $s4, 0x7DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD20u;
    if (runtime->hasFunction(0x1CDD20u)) {
        auto targetFn = runtime->lookupFunction(0x1CDD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B28u; }
        if (ctx->pc != 0x1B2B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDD20_0x1cdd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B28u; }
        if (ctx->pc != 0x1B2B28u) { return; }
    }
    ctx->pc = 0x1B2B28u;
label_1b2b28:
    // 0x1b2b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2b30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b2b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b34: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b2b34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2b3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2b3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2b40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2b40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2b44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b2b44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2b48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b2b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2b4c: 0x80432bc  j           func_10CAF0
    ctx->pc = 0x1B2B4Cu;
    ctx->pc = 0x1B2B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B4Cu;
            // 0x1b2b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2B54u;
    // 0x1b2b54: 0x0  nop
    ctx->pc = 0x1b2b54u;
    // NOP
label_1b2b58:
    // 0x1b2b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2b5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2b60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2b64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2b68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b2b68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2b6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b2b6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2b70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b2b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B74u;
            // 0x1b2b78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2B7Cu;
    // 0x1b2b7c: 0x0  nop
    ctx->pc = 0x1b2b7cu;
    // NOP
label_1b2b80:
    // 0x1b2b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2b84: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2b8c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2b90: 0x2442309c  addiu       $v0, $v0, 0x309C
    ctx->pc = 0x1b2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12444));
    // 0x1b2b94: 0x8c653018  lw          $a1, 0x3018($v1)
    ctx->pc = 0x1b2b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12312)));
    // 0x1b2b98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b2b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2ba0: 0x806caa6  j           func_1B2A98
    ctx->pc = 0x1B2BA0u;
    ctx->pc = 0x1B2BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BA0u;
            // 0x1b2ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2A98u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1b2a98;
    ctx->pc = 0x1B2BA8u;
    // 0x1b2ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2bac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2bb4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2bb8: 0x244230a0  addiu       $v0, $v0, 0x30A0
    ctx->pc = 0x1b2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12448));
    // 0x1b2bbc: 0x8c65301c  lw          $a1, 0x301C($v1)
    ctx->pc = 0x1b2bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12316)));
    // 0x1b2bc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b2bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2bc8: 0x806caa6  j           func_1B2A98
    ctx->pc = 0x1B2BC8u;
    ctx->pc = 0x1B2BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BC8u;
            // 0x1b2bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2A98u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1b2a98;
    ctx->pc = 0x1B2BD0u;
    ctx->pc = 0x1b2bd0u;
}
