#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298198
// Address: 0x298198 - 0x298358
void sub_00298198_0x298198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298198_0x298198");
#endif

    switch (ctx->pc) {
        case 0x298208u: goto label_298208;
        case 0x298218u: goto label_298218;
        case 0x29824cu: goto label_29824c;
        case 0x298270u: goto label_298270;
        case 0x29829cu: goto label_29829c;
        case 0x2982acu: goto label_2982ac;
        case 0x2982ccu: goto label_2982cc;
        case 0x2982e0u: goto label_2982e0;
        case 0x2982f4u: goto label_2982f4;
        case 0x298304u: goto label_298304;
        case 0x298320u: goto label_298320;
        default: break;
    }

    ctx->pc = 0x298198u;

    // 0x298198: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x298198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x29819c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29819cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981a0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x2981a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x2981a4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2981a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2981a8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x2981a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2981ac: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2981acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x2981b0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2981b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981b4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2981b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2981b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2981b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981bc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2981bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2981c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2981c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981c4: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x2981c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x2981c8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2981c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2981cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2981CCu;
    {
        const bool branch_taken_0x2981cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2981D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2981CCu;
            // 0x2981d0: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981cc) {
            ctx->pc = 0x2981DCu;
            goto label_2981dc;
        }
    }
    ctx->pc = 0x2981D4u;
    // 0x2981d4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2981D4u;
    {
        const bool branch_taken_0x2981d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2981D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2981D4u;
            // 0x2981d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981d4) {
            ctx->pc = 0x29832Cu;
            goto label_29832c;
        }
    }
    ctx->pc = 0x2981DCu;
label_2981dc:
    // 0x2981dc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2981dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2981e0: 0x24150102  addiu       $s5, $zero, 0x102
    ctx->pc = 0x2981e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x2981e4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2981e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2981e8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2981e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2981ec: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2981ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2981f0: 0x27b2000c  addiu       $s2, $sp, 0xC
    ctx->pc = 0x2981f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x2981f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2981f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2981f8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2981f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2981fc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2981fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x298200: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x298200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298204: 0x0  nop
    ctx->pc = 0x298204u;
    // NOP
label_298208:
    // 0x298208: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x298208u;
    {
        const bool branch_taken_0x298208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x298208) {
            ctx->pc = 0x29820Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298208u;
            // 0x29820c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298254u;
            goto label_298254;
        }
    }
    ctx->pc = 0x298210u;
    // 0x298210: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x298210u;
    SET_GPR_U32(ctx, 31, 0x298218u);
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298218u; }
        if (ctx->pc != 0x298218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298218u; }
        if (ctx->pc != 0x298218u) { return; }
    }
    ctx->pc = 0x298218u;
label_298218:
    // 0x298218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298218u;
    {
        const bool branch_taken_0x298218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29821Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298218u;
            // 0x29821c: 0x210c2  srl         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298218) {
            ctx->pc = 0x298228u;
            goto label_298228;
        }
    }
    ctx->pc = 0x298220u;
    // 0x298220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x298220u;
    {
        const bool branch_taken_0x298220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298220u;
            // 0x298224: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298220) {
            ctx->pc = 0x29822Cu;
            goto label_29822c;
        }
    }
    ctx->pc = 0x298228u;
label_298228:
    // 0x298228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29822c:
    // 0x29822c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29822cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298230: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x298230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x298234: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x298234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298238: 0xa2880b  movn        $s1, $a1, $v0
    ctx->pc = 0x298238u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x29823c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x29823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x298240: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x298240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298244: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x298244u;
    SET_GPR_U32(ctx, 31, 0x29824Cu);
    ctx->pc = 0x298248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298244u;
            // 0x298248: 0x2a3300b  movn        $a2, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (runtime->hasFunction(0x2818E8u)) {
        auto targetFn = runtime->lookupFunction(0x2818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29824Cu; }
        if (ctx->pc != 0x29824Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002818E8_0x2818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29824Cu; }
        if (ctx->pc != 0x29824Cu) { return; }
    }
    ctx->pc = 0x29824Cu;
label_29824c:
    // 0x29824c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x29824cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x298250: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x298250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_298254:
    // 0x298254: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x298254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x298258: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x298258u;
    {
        const bool branch_taken_0x298258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298258) {
            ctx->pc = 0x29825Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298258u;
            // 0x29825c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298208;
        }
    }
    ctx->pc = 0x298260u;
    // 0x298260: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298264: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x298264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298268: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x298268u;
    SET_GPR_U32(ctx, 31, 0x298270u);
    ctx->pc = 0x29826Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298268u;
            // 0x29826c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (runtime->hasFunction(0x2818E8u)) {
        auto targetFn = runtime->lookupFunction(0x2818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298270u; }
        if (ctx->pc != 0x298270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002818E8_0x2818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298270u; }
        if (ctx->pc != 0x298270u) { return; }
    }
    ctx->pc = 0x298270u;
label_298270:
    // 0x298270: 0x1280002e  beqz        $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x298270u;
    {
        const bool branch_taken_0x298270 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x298274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298270u;
            // 0x298274: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298270) {
            ctx->pc = 0x29832Cu;
            goto label_29832c;
        }
    }
    ctx->pc = 0x298278u;
    // 0x298278: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x298278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29827c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x29827cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298280: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x298280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x298284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298288: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x298288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x29828c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29828cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298290: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x298290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x298294: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x298294u;
    SET_GPR_U32(ctx, 31, 0x29829Cu);
    ctx->pc = 0x298298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298294u;
            // 0x298298: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (runtime->hasFunction(0x281740u)) {
        auto targetFn = runtime->lookupFunction(0x281740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29829Cu; }
        if (ctx->pc != 0x29829Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281740_0x281740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29829Cu; }
        if (ctx->pc != 0x29829Cu) { return; }
    }
    ctx->pc = 0x29829Cu;
label_29829c:
    // 0x29829c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2982a0: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2982a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2982a4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2982A4u;
    SET_GPR_U32(ctx, 31, 0x2982ACu);
    ctx->pc = 0x2982A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2982A4u;
            // 0x2982a8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982ACu; }
        if (ctx->pc != 0x2982ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982ACu; }
        if (ctx->pc != 0x2982ACu) { return; }
    }
    ctx->pc = 0x2982ACu;
label_2982ac:
    // 0x2982ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2982ACu;
    {
        const bool branch_taken_0x2982ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2982B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2982ACu;
            // 0x2982b0: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982ac) {
            ctx->pc = 0x2982D4u;
            goto label_2982d4;
        }
    }
    ctx->pc = 0x2982B4u;
    // 0x2982b4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2982b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2982b8: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x2982b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x2982bc: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2982bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2982c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2982c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982c4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2982C4u;
    SET_GPR_U32(ctx, 31, 0x2982CCu);
    ctx->pc = 0x2982C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2982C4u;
            // 0x2982c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982CCu; }
        if (ctx->pc != 0x2982CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982CCu; }
        if (ctx->pc != 0x2982CCu) { return; }
    }
    ctx->pc = 0x2982CCu;
label_2982cc:
    // 0x2982cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2982CCu;
    {
        const bool branch_taken_0x2982cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2982D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2982CCu;
            // 0x2982d0: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982cc) {
            ctx->pc = 0x298324u;
            goto label_298324;
        }
    }
    ctx->pc = 0x2982D4u;
label_2982d4:
    // 0x2982d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2982d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982d8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2982d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982dc: 0x0  nop
    ctx->pc = 0x2982dcu;
    // NOP
label_2982e0:
    // 0x2982e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2982e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2982e4: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2982E4u;
    {
        const bool branch_taken_0x2982e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2982e4) {
            ctx->pc = 0x2982E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2982E4u;
            // 0x2982e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298308u;
            goto label_298308;
        }
    }
    ctx->pc = 0x2982ECu;
    // 0x2982ec: 0xc0a1bdc  jal         func_286F70
    ctx->pc = 0x2982ECu;
    SET_GPR_U32(ctx, 31, 0x2982F4u);
    ctx->pc = 0x2982F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2982ECu;
            // 0x2982f0: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286F70u;
    if (runtime->hasFunction(0x286F70u)) {
        auto targetFn = runtime->lookupFunction(0x286F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982F4u; }
        if (ctx->pc != 0x2982F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286F70_0x286f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982F4u; }
        if (ctx->pc != 0x2982F4u) { return; }
    }
    ctx->pc = 0x2982F4u;
label_2982f4:
    // 0x2982f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2982f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2982f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2982f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2982fc: 0xc0a004a  jal         func_280128
    ctx->pc = 0x2982FCu;
    SET_GPR_U32(ctx, 31, 0x298304u);
    ctx->pc = 0x298300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2982FCu;
            // 0x298300: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (runtime->hasFunction(0x280128u)) {
        auto targetFn = runtime->lookupFunction(0x280128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298304u; }
        if (ctx->pc != 0x298304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280128_0x280128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298304u; }
        if (ctx->pc != 0x298304u) { return; }
    }
    ctx->pc = 0x298304u;
label_298304:
    // 0x298304: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x298304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_298308:
    // 0x298308: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x298308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x29830c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29830Cu;
    {
        const bool branch_taken_0x29830c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29830Cu;
            // 0x298310: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29830c) {
            ctx->pc = 0x2982E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2982e0;
        }
    }
    ctx->pc = 0x298314u;
    // 0x298314: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x298314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298318: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x298318u;
    SET_GPR_U32(ctx, 31, 0x298320u);
    ctx->pc = 0x29831Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298318u;
            // 0x29831c: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298320u; }
        if (ctx->pc != 0x298320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298320u; }
        if (ctx->pc != 0x298320u) { return; }
    }
    ctx->pc = 0x298320u;
label_298320:
    // 0x298320: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x298320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_298324:
    // 0x298324: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x298324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298328: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x298328u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_29832c:
    // 0x29832c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x29832cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x298330: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x298330u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x298334: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x298334u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x298338: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x298338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29833c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x29833cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298340: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x298340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298344: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x298344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298348: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x298348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29834c: 0x3e00008  jr          $ra
    ctx->pc = 0x29834Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29834Cu;
            // 0x298350: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298354u;
    // 0x298354: 0x0  nop
    ctx->pc = 0x298354u;
    // NOP
    ctx->pc = 0x298358u;
}
