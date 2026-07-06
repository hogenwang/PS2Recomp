#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014A8F0
// Address: 0x14a8f0 - 0x14aa00
void sub_0014A8F0_0x14a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A8F0_0x14a8f0");
#endif

    switch (ctx->pc) {
        case 0x14a930u: goto label_14a930;
        case 0x14a95cu: goto label_14a95c;
        case 0x14a978u: goto label_14a978;
        case 0x14a980u: goto label_14a980;
        case 0x14a9b0u: goto label_14a9b0;
        case 0x14a9c0u: goto label_14a9c0;
        case 0x14a9d4u: goto label_14a9d4;
        default: break;
    }

    ctx->pc = 0x14a8f0u;

    // 0x14a8f0: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x14a8f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a8f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14a8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8f8: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x14a8f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14a8fc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x14a8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x14a900: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x14a900u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x14a904: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x14a904u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x14a908: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x14a908u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14a90c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x14a90cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a910: 0xa02827  not         $a1, $a1
    ctx->pc = 0x14a910u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x14a914: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x14a914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x14a918: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x14a918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14a91c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x14a91cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x14a920: 0x3e00008  jr          $ra
    ctx->pc = 0x14A920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A920u;
            // 0x14a924: 0xa4800004  sh          $zero, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A928u;
    // 0x14a928: 0x0  nop
    ctx->pc = 0x14a928u;
    // NOP
    // 0x14a92c: 0x0  nop
    ctx->pc = 0x14a92cu;
    // NOP
label_14a930:
    // 0x14a930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14a934: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x14a934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x14a938: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14a93c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14a93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14a940: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a944: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a948: 0x8c636dc0  lw          $v1, 0x6DC0($v1)
    ctx->pc = 0x14a948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28096)));
    // 0x14a94c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14A94Cu;
    {
        const bool branch_taken_0x14a94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A94Cu;
            // 0x14a950: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a94c) {
            ctx->pc = 0x14A998u;
            goto label_14a998;
        }
    }
    ctx->pc = 0x14A954u;
    // 0x14a954: 0x3c11009b  lui         $s1, 0x9B
    ctx->pc = 0x14a954u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)155 << 16));
    // 0x14a958: 0x26316bc0  addiu       $s1, $s1, 0x6BC0
    ctx->pc = 0x14a958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27584));
label_14a95c:
    // 0x14a95c: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x14a95cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a960: 0x92430438  lbu         $v1, 0x438($s2)
    ctx->pc = 0x14a960u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1080)));
    // 0x14a964: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x14a964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x14a968: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A968u;
    {
        const bool branch_taken_0x14a968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a968) {
            ctx->pc = 0x14A980u;
            goto label_14a980;
        }
    }
    ctx->pc = 0x14A970u;
    // 0x14a970: 0xc062d3c  jal         func_18B4F0
    ctx->pc = 0x14A970u;
    SET_GPR_U32(ctx, 31, 0x14A978u);
    ctx->pc = 0x14A974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A970u;
            // 0x14a974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B4F0u;
    if (runtime->hasFunction(0x18B4F0u)) {
        auto targetFn = runtime->lookupFunction(0x18B4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A978u; }
        if (ctx->pc != 0x14A978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B4F0_0x18b4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A978u; }
        if (ctx->pc != 0x14A978u) { return; }
    }
    ctx->pc = 0x14A978u;
label_14a978:
    // 0x14a978: 0xc062d68  jal         func_18B5A0
    ctx->pc = 0x14A978u;
    SET_GPR_U32(ctx, 31, 0x14A980u);
    ctx->pc = 0x14A97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A978u;
            // 0x14a97c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B5A0u;
    if (runtime->hasFunction(0x18B5A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A980u; }
        if (ctx->pc != 0x14A980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B5A0_0x18b5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A980u; }
        if (ctx->pc != 0x14A980u) { return; }
    }
    ctx->pc = 0x14A980u;
label_14a980:
    // 0x14a980: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x14a980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x14a984: 0x8c636dc0  lw          $v1, 0x6DC0($v1)
    ctx->pc = 0x14a984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28096)));
    // 0x14a988: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14a988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14a98c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x14a98cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14a990: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x14A990u;
    {
        const bool branch_taken_0x14a990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A990u;
            // 0x14a994: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a990) {
            ctx->pc = 0x14A95Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14a95c;
        }
    }
    ctx->pc = 0x14A998u;
label_14a998:
    // 0x14a998: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14a998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a99c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a99cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a9a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a9a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9A8u;
            // 0x14a9ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A9B0u;
label_14a9b0:
    // 0x14a9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x14A9B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9B0u;
            // 0x14a9b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A9B8u;
    // 0x14a9b8: 0x0  nop
    ctx->pc = 0x14a9b8u;
    // NOP
    // 0x14a9bc: 0x0  nop
    ctx->pc = 0x14a9bcu;
    // NOP
label_14a9c0:
    // 0x14a9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a9c4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14a9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a9cc: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14A9CCu;
    SET_GPR_U32(ctx, 31, 0x14A9D4u);
    ctx->pc = 0x14A9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9CCu;
            // 0x14a9d0: 0x2484cdb8  addiu       $a0, $a0, -0x3248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9D4u; }
        if (ctx->pc != 0x14A9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9D4u; }
        if (ctx->pc != 0x14A9D4u) { return; }
    }
    ctx->pc = 0x14A9D4u;
label_14a9d4:
    // 0x14a9d4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x14a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x14a9d8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x14a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x14a9dc: 0x94845cf8  lhu         $a0, 0x5CF8($a0)
    ctx->pc = 0x14a9dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 23800)));
    // 0x14a9e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a9e4: 0xa4645cf8  sh          $a0, 0x5CF8($v1)
    ctx->pc = 0x14a9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 23800), (uint16_t)GPR_U32(ctx, 4));
    // 0x14a9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14A9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9ECu;
            // 0x14a9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A9F4u;
    // 0x14a9f4: 0x0  nop
    ctx->pc = 0x14a9f4u;
    // NOP
    // 0x14a9f8: 0x0  nop
    ctx->pc = 0x14a9f8u;
    // NOP
    // 0x14a9fc: 0x0  nop
    ctx->pc = 0x14a9fcu;
    // NOP
    ctx->pc = 0x14aa00u;
}
