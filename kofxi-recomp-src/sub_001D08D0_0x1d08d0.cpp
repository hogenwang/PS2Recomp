#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D08D0
// Address: 0x1d08d0 - 0x1d0a38
void sub_001D08D0_0x1d08d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D08D0_0x1d08d0");
#endif

    switch (ctx->pc) {
        case 0x1d08f0u: goto label_1d08f0;
        case 0x1d0958u: goto label_1d0958;
        case 0x1d0980u: goto label_1d0980;
        case 0x1d0990u: goto label_1d0990;
        case 0x1d09b8u: goto label_1d09b8;
        case 0x1d09d4u: goto label_1d09d4;
        case 0x1d0a00u: goto label_1d0a00;
        case 0x1d0a08u: goto label_1d0a08;
        case 0x1d0a1cu: goto label_1d0a1c;
        default: break;
    }

    ctx->pc = 0x1d08d0u;

    // 0x1d08d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d08d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d08d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d08d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d08d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d08d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d08dc: 0x24900180  addiu       $s0, $a0, 0x180
    ctx->pc = 0x1d08dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1d08e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d08e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d08e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d08e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d08e8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1D08E8u;
    SET_GPR_U32(ctx, 31, 0x1D08F0u);
    ctx->pc = 0x1D08ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D08E8u;
            // 0x1d08ec: 0x240604d0  addiu       $a2, $zero, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D08F0u; }
        if (ctx->pc != 0x1D08F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D08F0u; }
        if (ctx->pc != 0x1D08F0u) { return; }
    }
    ctx->pc = 0x1D08F0u;
label_1d08f0:
    // 0x1d08f0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d08f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d08f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d08f8: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1d08f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1d08fc: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1d08fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1d0900: 0xae0004c0  sw          $zero, 0x4C0($s0)
    ctx->pc = 0x1d0900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1216), GPR_U32(ctx, 0));
    // 0x1d0904: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1d0904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1d0908: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1d0908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1d090c: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1d090cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x1d0910: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1d0910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1d0914: 0xae00040c  sw          $zero, 0x40C($s0)
    ctx->pc = 0x1d0914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 0));
    // 0x1d0918: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x1d0918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
    // 0x1d091c: 0xae000414  sw          $zero, 0x414($s0)
    ctx->pc = 0x1d091cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 0));
    // 0x1d0920: 0xae000418  sw          $zero, 0x418($s0)
    ctx->pc = 0x1d0920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 0));
    // 0x1d0924: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x1d0924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
    // 0x1d0928: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x1d0928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
    // 0x1d092c: 0xae000428  sw          $zero, 0x428($s0)
    ctx->pc = 0x1d092cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 0));
    // 0x1d0930: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x1d0930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
    // 0x1d0934: 0xae00049c  sw          $zero, 0x49C($s0)
    ctx->pc = 0x1d0934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 0));
    // 0x1d0938: 0xae0004a0  sw          $zero, 0x4A0($s0)
    ctx->pc = 0x1d0938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1184), GPR_U32(ctx, 0));
    // 0x1d093c: 0xae0004b0  sw          $zero, 0x4B0($s0)
    ctx->pc = 0x1d093cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 0));
    // 0x1d0940: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1d0940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1d0944: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d094c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D094Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D094Cu;
            // 0x1d0950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0954u;
    // 0x1d0954: 0x0  nop
    ctx->pc = 0x1d0954u;
    // NOP
label_1d0958:
    // 0x1d0958: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1d0958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d095c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d095cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d0960: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d0960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d0964: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d0964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d0968: 0x24840138  addiu       $a0, $a0, 0x138
    ctx->pc = 0x1d0968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 312));
    // 0x1d096c: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1d096cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1d0970: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1d0970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1d0974: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0974u;
            // 0x1d0978: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D097Cu;
    // 0x1d097c: 0x0  nop
    ctx->pc = 0x1d097cu;
    // NOP
label_1d0980:
    // 0x1d0980: 0x24840168  addiu       $a0, $a0, 0x168
    ctx->pc = 0x1d0980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
    // 0x1d0984: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1d0984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1d0988: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D098Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0988u;
            // 0x1d098c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0990u;
label_1d0990:
    // 0x1d0990: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0990u;
    {
        const bool branch_taken_0x1d0990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0990u;
            // 0x1d0994: 0x24840168  addiu       $a0, $a0, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0990) {
            ctx->pc = 0x1D09A0u;
            goto label_1d09a0;
        }
    }
    ctx->pc = 0x1D0998u;
    // 0x1d0998: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d0998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d099c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1d099cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1d09a0:
    // 0x1d09a0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D09A0u;
    {
        const bool branch_taken_0x1d09a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d09a0) {
            ctx->pc = 0x1D09B0u;
            goto label_1d09b0;
        }
    }
    ctx->pc = 0x1D09A8u;
    // 0x1d09a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1d09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d09ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1d09acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1d09b0:
    // 0x1d09b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D09B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D09B8u;
label_1d09b8:
    // 0x1d09b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d09b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d09bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d09bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d09c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d09c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d09c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d09c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d09c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d09cc: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x1D09CCu;
    SET_GPR_U32(ctx, 31, 0x1D09D4u);
    ctx->pc = 0x1D09D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09CCu;
            // 0x1d09d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (runtime->hasFunction(0x1D5F50u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D09D4u; }
        if (ctx->pc != 0x1D09D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F50_0x1d5f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D09D4u; }
        if (ctx->pc != 0x1D09D4u) { return; }
    }
    ctx->pc = 0x1D09D4u;
label_1d09d4:
    // 0x1d09d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d09d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D09D8u;
    {
        const bool branch_taken_0x1d09d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D09DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09D8u;
            // 0x1d09dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09d8) {
            ctx->pc = 0x1D0A00u;
            goto label_1d0a00;
        }
    }
    ctx->pc = 0x1D09E0u;
    // 0x1d09e0: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d09e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d09e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d09e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d09e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d09e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d09ec: 0x34a5020c  ori         $a1, $a1, 0x20C
    ctx->pc = 0x1d09ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
    // 0x1d09f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d09f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d09f4: 0x8074128  j           func_1D04A0
    ctx->pc = 0x1D09F4u;
    ctx->pc = 0x1D09F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D09F4u;
            // 0x1d09f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D04A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1D04A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1D09FCu;
    // 0x1d09fc: 0x0  nop
    ctx->pc = 0x1d09fcu;
    // NOP
label_1d0a00:
    // 0x1d0a00: 0xc0742ea  jal         func_1D0BA8
    ctx->pc = 0x1D0A00u;
    SET_GPR_U32(ctx, 31, 0x1D0A08u);
    ctx->pc = 0x1D0A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A00u;
            // 0x1d0a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BA8u;
    if (runtime->hasFunction(0x1D0BA8u)) {
        auto targetFn = runtime->lookupFunction(0x1D0BA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A08u; }
        if (ctx->pc != 0x1D0A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0BA8_0x1d0ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A08u; }
        if (ctx->pc != 0x1D0A08u) { return; }
    }
    ctx->pc = 0x1D0A08u;
label_1d0a08:
    // 0x1d0a08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d0a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0a0c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0A0Cu;
    {
        const bool branch_taken_0x1d0a0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A0Cu;
            // 0x1d0a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a0c) {
            ctx->pc = 0x1D0A1Cu;
            goto label_1d0a1c;
        }
    }
    ctx->pc = 0x1D0A14u;
    // 0x1d0a14: 0xc07428e  jal         func_1D0A38
    ctx->pc = 0x1D0A14u;
    SET_GPR_U32(ctx, 31, 0x1D0A1Cu);
    ctx->pc = 0x1D0A38u;
    if (runtime->hasFunction(0x1D0A38u)) {
        auto targetFn = runtime->lookupFunction(0x1D0A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A1Cu; }
        if (ctx->pc != 0x1D0A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0A38_0x1d0a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0A1Cu; }
        if (ctx->pc != 0x1D0A1Cu) { return; }
    }
    ctx->pc = 0x1D0A1Cu;
label_1d0a1c:
    // 0x1d0a1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0a24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0a28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0A2Cu;
            // 0x1d0a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0A34u;
    // 0x1d0a34: 0x0  nop
    ctx->pc = 0x1d0a34u;
    // NOP
    ctx->pc = 0x1d0a38u;
}
