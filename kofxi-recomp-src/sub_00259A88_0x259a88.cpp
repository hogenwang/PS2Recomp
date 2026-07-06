#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00259A88
// Address: 0x259a88 - 0x259d20
void sub_00259A88_0x259a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259A88_0x259a88");
#endif

    switch (ctx->pc) {
        case 0x259b10u: goto label_259b10;
        case 0x259becu: goto label_259bec;
        case 0x259c08u: goto label_259c08;
        case 0x259c2cu: goto label_259c2c;
        case 0x259c48u: goto label_259c48;
        case 0x259c58u: goto label_259c58;
        case 0x259c60u: goto label_259c60;
        case 0x259c68u: goto label_259c68;
        case 0x259ca4u: goto label_259ca4;
        case 0x259cb8u: goto label_259cb8;
        case 0x259cc4u: goto label_259cc4;
        case 0x259cd8u: goto label_259cd8;
        case 0x259ce0u: goto label_259ce0;
        default: break;
    }

    ctx->pc = 0x259a88u;

    // 0x259a88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x259a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x259a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x259a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259a90: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x259a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x259a94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x259a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x259a98: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x259a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x259a9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x259a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259aa0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x259aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x259aa4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x259aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x259aa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x259aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x259aac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x259aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x259ab0: 0x8e340030  lw          $s4, 0x30($s1)
    ctx->pc = 0x259ab0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x259ab4: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x259AB4u;
    {
        const bool branch_taken_0x259ab4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x259AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259AB4u;
            // 0x259ab8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259ab4) {
            ctx->pc = 0x259AC4u;
            goto label_259ac4;
        }
    }
    ctx->pc = 0x259ABCu;
    // 0x259abc: 0x8e95001c  lw          $s5, 0x1C($s4)
    ctx->pc = 0x259abcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x259ac0: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x259ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_259ac4:
    // 0x259ac4: 0xdea20088  ld          $v0, 0x88($s5)
    ctx->pc = 0x259ac4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x259ac8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x259ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x259acc: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x259accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x259ad0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x259ad0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x259ad4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x259ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x259ad8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x259ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259adc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x259adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x259ae0: 0x4610050  bgez        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x259AE0u;
    {
        const bool branch_taken_0x259ae0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x259ae0) {
            ctx->pc = 0x259C24u;
            goto label_259c24;
        }
    }
    ctx->pc = 0x259AE8u;
    // 0x259ae8: 0x10a0004e  beqz        $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x259AE8u;
    {
        const bool branch_taken_0x259ae8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ae8) {
            ctx->pc = 0x259C24u;
            goto label_259c24;
        }
    }
    ctx->pc = 0x259AF0u;
    // 0x259af0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x259af0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x259af4: 0x1240004b  beqz        $s2, . + 4 + (0x4B << 2)
    ctx->pc = 0x259AF4u;
    {
        const bool branch_taken_0x259af4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x259af4) {
            ctx->pc = 0x259C24u;
            goto label_259c24;
        }
    }
    ctx->pc = 0x259AFCu;
    // 0x259afc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x259afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x259b00: 0x88500007  lwl         $s0, 0x7($v0)
    ctx->pc = 0x259b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x259b04: 0x98500004  lwr         $s0, 0x4($v0)
    ctx->pc = 0x259b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x259b08: 0xc08a254  jal         func_228950
    ctx->pc = 0x259B08u;
    SET_GPR_U32(ctx, 31, 0x259B10u);
    ctx->pc = 0x259B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259B08u;
            // 0x259b0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B10u; }
        if (ctx->pc != 0x259B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259B10u; }
        if (ctx->pc != 0x259B10u) { return; }
    }
    ctx->pc = 0x259B10u;
label_259b10:
    // 0x259b10: 0x12020044  beq         $s0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x259B10u;
    {
        const bool branch_taken_0x259b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x259b10) {
            ctx->pc = 0x259C24u;
            goto label_259c24;
        }
    }
    ctx->pc = 0x259B18u;
    // 0x259b18: 0xde450058  ld          $a1, 0x58($s2)
    ctx->pc = 0x259b18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x259b1c: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x259b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x259b20: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x259B20u;
    {
        const bool branch_taken_0x259b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B20u;
            // 0x259b24: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b20) {
            ctx->pc = 0x259B5Cu;
            goto label_259b5c;
        }
    }
    ctx->pc = 0x259B28u;
    // 0x259b28: 0x862300a0  lh          $v1, 0xA0($s1)
    ctx->pc = 0x259b28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x259b2c: 0x24023d09  addiu       $v0, $zero, 0x3D09
    ctx->pc = 0x259b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15625));
    // 0x259b30: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x259b30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x259b34: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x259b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x259b38: 0x1812  mflo        $v1
    ctx->pc = 0x259b38u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x259b3c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x259B3Cu;
    {
        const bool branch_taken_0x259b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b3c) {
            ctx->pc = 0x259B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259B3Cu;
            // 0x259b40: 0xfe430090  sd          $v1, 0x90($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259B5Cu;
            goto label_259b5c;
        }
    }
    ctx->pc = 0x259B44u;
    // 0x259b44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259B44u;
    {
        const bool branch_taken_0x259b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B44u;
            // 0x259b48: 0x83102d  daddu       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b44) {
            ctx->pc = 0x259B58u;
            goto label_259b58;
        }
    }
    ctx->pc = 0x259B4Cu;
    // 0x259b4c: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x259b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x259b50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x259B50u;
    {
        const bool branch_taken_0x259b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B50u;
            // 0x259b54: 0xfe420090  sd          $v0, 0x90($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b50) {
            ctx->pc = 0x259B5Cu;
            goto label_259b5c;
        }
    }
    ctx->pc = 0x259B58u;
label_259b58:
    // 0x259b58: 0xfe430090  sd          $v1, 0x90($s2)
    ctx->pc = 0x259b58u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 3));
label_259b5c:
    // 0x259b5c: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x259b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x259b60: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x259B60u;
    {
        const bool branch_taken_0x259b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B60u;
            // 0x259b64: 0x30a20020  andi        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b60) {
            ctx->pc = 0x259BA0u;
            goto label_259ba0;
        }
    }
    ctx->pc = 0x259B68u;
    // 0x259b68: 0x862300a2  lh          $v1, 0xA2($s1)
    ctx->pc = 0x259b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 162)));
    // 0x259b6c: 0x24027a12  addiu       $v0, $zero, 0x7A12
    ctx->pc = 0x259b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31250));
    // 0x259b70: 0xde440098  ld          $a0, 0x98($s2)
    ctx->pc = 0x259b70u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x259b74: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x259b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x259b78: 0x1812  mflo        $v1
    ctx->pc = 0x259b78u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x259b7c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x259B7Cu;
    {
        const bool branch_taken_0x259b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x259b7c) {
            ctx->pc = 0x259B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259B7Cu;
            // 0x259b80: 0xfe430098  sd          $v1, 0x98($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 152), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259B9Cu;
            goto label_259b9c;
        }
    }
    ctx->pc = 0x259B84u;
    // 0x259b84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259B84u;
    {
        const bool branch_taken_0x259b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B84u;
            // 0x259b88: 0x83102d  daddu       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b84) {
            ctx->pc = 0x259B98u;
            goto label_259b98;
        }
    }
    ctx->pc = 0x259B8Cu;
    // 0x259b8c: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x259b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x259b90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x259B90u;
    {
        const bool branch_taken_0x259b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259B90u;
            // 0x259b94: 0xfe420098  sd          $v0, 0x98($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 152), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259b90) {
            ctx->pc = 0x259B9Cu;
            goto label_259b9c;
        }
    }
    ctx->pc = 0x259B98u;
label_259b98:
    // 0x259b98: 0xfe430098  sd          $v1, 0x98($s2)
    ctx->pc = 0x259b98u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 152), GPR_U64(ctx, 3));
label_259b9c:
    // 0x259b9c: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x259b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_259ba0:
    // 0x259ba0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x259BA0u;
    {
        const bool branch_taken_0x259ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259ba0) {
            ctx->pc = 0x259BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259BA0u;
            // 0x259ba4: 0xde420080  ld          $v0, 0x80($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259BC4u;
            goto label_259bc4;
        }
    }
    ctx->pc = 0x259BA8u;
    // 0x259ba8: 0xde230090  ld          $v1, 0x90($s1)
    ctx->pc = 0x259ba8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x259bac: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x259BACu;
    {
        const bool branch_taken_0x259bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259bac) {
            ctx->pc = 0x259BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259BACu;
            // 0x259bb0: 0xde420080  ld          $v0, 0x80($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259BC4u;
            goto label_259bc4;
        }
    }
    ctx->pc = 0x259BB4u;
    // 0x259bb4: 0xde530088  ld          $s3, 0x88($s2)
    ctx->pc = 0x259bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x259bb8: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x259BB8u;
    {
        const bool branch_taken_0x259bb8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x259bb8) {
            ctx->pc = 0x259BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259BB8u;
            // 0x259bbc: 0x96300024  lhu         $s0, 0x24($s1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259BDCu;
            goto label_259bdc;
        }
    }
    ctx->pc = 0x259BC0u;
    // 0x259bc0: 0xde420080  ld          $v0, 0x80($s2)
    ctx->pc = 0x259bc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 128)));
label_259bc4:
    // 0x259bc4: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x259bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x259bc8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x259bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x259bcc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x259BCCu;
    {
        const bool branch_taken_0x259bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259bcc) {
            ctx->pc = 0x259C24u;
            goto label_259c24;
        }
    }
    ctx->pc = 0x259BD4u;
    // 0x259bd4: 0xde530088  ld          $s3, 0x88($s2)
    ctx->pc = 0x259bd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x259bd8: 0x96300024  lhu         $s0, 0x24($s1)
    ctx->pc = 0x259bd8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_259bdc:
    // 0x259bdc: 0x96250024  lhu         $a1, 0x24($s1)
    ctx->pc = 0x259bdcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x259be0: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x259be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x259be4: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x259BE4u;
    SET_GPR_U32(ctx, 31, 0x259BECu);
    ctx->pc = 0x259BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259BE4u;
            // 0x259be8: 0x64202d  daddu       $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (runtime->hasFunction(0x1215E8u)) {
        auto targetFn = runtime->lookupFunction(0x1215E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259BECu; }
        if (ctx->pc != 0x259BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001215E8_0x1215e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259BECu; }
        if (ctx->pc != 0x259BECu) { return; }
    }
    ctx->pc = 0x259BECu;
label_259bec:
    // 0x259bec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x259becu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259bf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x259bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x259bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259bf8: 0x26050028  addiu       $a1, $s0, 0x28
    ctx->pc = 0x259bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x259bfc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x259bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x259c00: 0xc048082  jal         func_120208
    ctx->pc = 0x259C00u;
    SET_GPR_U32(ctx, 31, 0x259C08u);
    ctx->pc = 0x259C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259C00u;
            // 0x259c04: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C08u; }
        if (ctx->pc != 0x259C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C08u; }
        if (ctx->pc != 0x259C08u) { return; }
    }
    ctx->pc = 0x259C08u;
label_259c08:
    // 0x259c08: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x259C08u;
    {
        const bool branch_taken_0x259c08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C08u;
            // 0x259c0c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c08) {
            ctx->pc = 0x259C20u;
            goto label_259c20;
        }
    }
    ctx->pc = 0x259C10u;
    // 0x259c10: 0x263102d  daddu       $v0, $s3, $v1
    ctx->pc = 0x259c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 3));
    // 0x259c14: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x259c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x259c18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x259C18u;
    {
        const bool branch_taken_0x259c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C18u;
            // 0x259c1c: 0xfe420088  sd          $v0, 0x88($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 136), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c18) {
            ctx->pc = 0x259C24u;
            goto label_259c24;
        }
    }
    ctx->pc = 0x259C20u;
label_259c20:
    // 0x259c20: 0xfe430088  sd          $v1, 0x88($s2)
    ctx->pc = 0x259c20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 136), GPR_U64(ctx, 3));
label_259c24:
    // 0x259c24: 0xc08c682  jal         func_231A08
    ctx->pc = 0x259C24u;
    SET_GPR_U32(ctx, 31, 0x259C2Cu);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C2Cu; }
        if (ctx->pc != 0x259C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C2Cu; }
        if (ctx->pc != 0x259C2Cu) { return; }
    }
    ctx->pc = 0x259C2Cu;
label_259c2c:
    // 0x259c2c: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x259c2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x259c30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x259c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259c34: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x259c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x259c38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x259C38u;
    {
        const bool branch_taken_0x259c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C38u;
            // 0x259c3c: 0x34624000  ori         $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c38) {
            ctx->pc = 0x259C50u;
            goto label_259c50;
        }
    }
    ctx->pc = 0x259C40u;
    // 0x259c40: 0xc08c698  jal         func_231A60
    ctx->pc = 0x259C40u;
    SET_GPR_U32(ctx, 31, 0x259C48u);
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C48u; }
        if (ctx->pc != 0x259C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C48u; }
        if (ctx->pc != 0x259C48u) { return; }
    }
    ctx->pc = 0x259C48u;
label_259c48:
    // 0x259c48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x259C48u;
    {
        const bool branch_taken_0x259c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c48) {
            ctx->pc = 0x259C58u;
            goto label_259c58;
        }
    }
    ctx->pc = 0x259C50u;
label_259c50:
    // 0x259c50: 0xc08c698  jal         func_231A60
    ctx->pc = 0x259C50u;
    SET_GPR_U32(ctx, 31, 0x259C58u);
    ctx->pc = 0x259C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259C50u;
            // 0x259c54: 0xa6220028  sh          $v0, 0x28($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C58u; }
        if (ctx->pc != 0x259C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C58u; }
        if (ctx->pc != 0x259C58u) { return; }
    }
    ctx->pc = 0x259C58u;
label_259c58:
    // 0x259c58: 0xc096748  jal         func_259D20
    ctx->pc = 0x259C58u;
    SET_GPR_U32(ctx, 31, 0x259C60u);
    ctx->pc = 0x259C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259C58u;
            // 0x259c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259D20u;
    if (runtime->hasFunction(0x259D20u)) {
        auto targetFn = runtime->lookupFunction(0x259D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C60u; }
        if (ctx->pc != 0x259C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259D20_0x259d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C60u; }
        if (ctx->pc != 0x259C60u) { return; }
    }
    ctx->pc = 0x259C60u;
label_259c60:
    // 0x259c60: 0xc0969ee  jal         func_25A7B8
    ctx->pc = 0x259C60u;
    SET_GPR_U32(ctx, 31, 0x259C68u);
    ctx->pc = 0x259C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259C60u;
            // 0x259c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A7B8u;
    if (runtime->hasFunction(0x25A7B8u)) {
        auto targetFn = runtime->lookupFunction(0x25A7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C68u; }
        if (ctx->pc != 0x259C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A7B8_0x25a7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C68u; }
        if (ctx->pc != 0x259C68u) { return; }
    }
    ctx->pc = 0x259C68u;
label_259c68:
    // 0x259c68: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x259c68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x259c6c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x259c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x259c70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x259C70u;
    {
        const bool branch_taken_0x259c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C70u;
            // 0x259c74: 0x3062fffd  andi        $v0, $v1, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c70) {
            ctx->pc = 0x259C9Cu;
            goto label_259c9c;
        }
    }
    ctx->pc = 0x259C78u;
    // 0x259c78: 0xa6220028  sh          $v0, 0x28($s1)
    ctx->pc = 0x259c78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x259c7c: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x259c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x259c80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x259C80u;
    {
        const bool branch_taken_0x259c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C80u;
            // 0x259c84: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c80) {
            ctx->pc = 0x259C98u;
            goto label_259c98;
        }
    }
    ctx->pc = 0x259C88u;
    // 0x259c88: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x259c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x259c8c: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x259c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x259c90: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x259c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x259c94: 0x0  nop
    ctx->pc = 0x259c94u;
    // NOP
label_259c98:
    // 0x259c98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_259c9c:
    // 0x259c9c: 0xc095aac  jal         func_256AB0
    ctx->pc = 0x259C9Cu;
    SET_GPR_U32(ctx, 31, 0x259CA4u);
    ctx->pc = 0x259CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259C9Cu;
            // 0x259ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256AB0u;
    if (runtime->hasFunction(0x256AB0u)) {
        auto targetFn = runtime->lookupFunction(0x256AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CA4u; }
        if (ctx->pc != 0x259CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00256AB0_0x256ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CA4u; }
        if (ctx->pc != 0x259CA4u) { return; }
    }
    ctx->pc = 0x259CA4u;
label_259ca4:
    // 0x259ca4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x259ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x259ca8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259CA8u;
    {
        const bool branch_taken_0x259ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ca8) {
            ctx->pc = 0x259CBCu;
            goto label_259cbc;
        }
    }
    ctx->pc = 0x259CB0u;
    // 0x259cb0: 0xc08a996  jal         func_22A658
    ctx->pc = 0x259CB0u;
    SET_GPR_U32(ctx, 31, 0x259CB8u);
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CB8u; }
        if (ctx->pc != 0x259CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CB8u; }
        if (ctx->pc != 0x259CB8u) { return; }
    }
    ctx->pc = 0x259CB8u;
label_259cb8:
    // 0x259cb8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x259cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_259cbc:
    // 0x259cbc: 0xc098560  jal         func_261580
    ctx->pc = 0x259CBCu;
    SET_GPR_U32(ctx, 31, 0x259CC4u);
    ctx->pc = 0x259CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259CBCu;
            // 0x259cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CC4u; }
        if (ctx->pc != 0x259CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CC4u; }
        if (ctx->pc != 0x259CC4u) { return; }
    }
    ctx->pc = 0x259CC4u;
label_259cc4:
    // 0x259cc4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x259CC4u;
    {
        const bool branch_taken_0x259cc4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x259CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259CC4u;
            // 0x259cc8: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259cc4) {
            ctx->pc = 0x259CE4u;
            goto label_259ce4;
        }
    }
    ctx->pc = 0x259CCCu;
    // 0x259ccc: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x259cccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x259cd0: 0xc08c13c  jal         func_2304F0
    ctx->pc = 0x259CD0u;
    SET_GPR_U32(ctx, 31, 0x259CD8u);
    ctx->pc = 0x259CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259CD0u;
            // 0x259cd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2304F0u;
    if (runtime->hasFunction(0x2304F0u)) {
        auto targetFn = runtime->lookupFunction(0x2304F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CD8u; }
        if (ctx->pc != 0x259CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002304F0_0x2304f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CD8u; }
        if (ctx->pc != 0x259CD8u) { return; }
    }
    ctx->pc = 0x259CD8u;
label_259cd8:
    // 0x259cd8: 0xc092fda  jal         func_24BF68
    ctx->pc = 0x259CD8u;
    SET_GPR_U32(ctx, 31, 0x259CE0u);
    ctx->pc = 0x259CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259CD8u;
            // 0x259cdc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24BF68u;
    if (runtime->hasFunction(0x24BF68u)) {
        auto targetFn = runtime->lookupFunction(0x24BF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CE0u; }
        if (ctx->pc != 0x259CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024BF68_0x24bf68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259CE0u; }
        if (ctx->pc != 0x259CE0u) { return; }
    }
    ctx->pc = 0x259CE0u;
label_259ce0:
    // 0x259ce0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x259ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_259ce4:
    // 0x259ce4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x259ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x259ce8: 0x24841308  addiu       $a0, $a0, 0x1308
    ctx->pc = 0x259ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x259cec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x259cecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259cf0: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x259cf0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x259cf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x259cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259cf8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x259cf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259cfc: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x259cfcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x259d00: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x259d00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259d04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x259d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259d08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x259d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x259d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259d10: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x259d10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
    // 0x259d14: 0x3e00008  jr          $ra
    ctx->pc = 0x259D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259D14u;
            // 0x259d18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259D1Cu;
    // 0x259d1c: 0x0  nop
    ctx->pc = 0x259d1cu;
    // NOP
    ctx->pc = 0x259d20u;
}
