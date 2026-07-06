#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00115288
// Address: 0x115288 - 0x1155e8
void sub_00115288_0x115288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115288_0x115288");
#endif

    switch (ctx->pc) {
        case 0x115298u: goto label_115298;
        case 0x1152a8u: goto label_1152a8;
        case 0x1152f8u: goto label_1152f8;
        case 0x11537cu: goto label_11537c;
        case 0x115398u: goto label_115398;
        case 0x1153e8u: goto label_1153e8;
        case 0x115408u: goto label_115408;
        case 0x115458u: goto label_115458;
        case 0x115478u: goto label_115478;
        case 0x1154c8u: goto label_1154c8;
        case 0x1154e8u: goto label_1154e8;
        case 0x115544u: goto label_115544;
        case 0x115568u: goto label_115568;
        case 0x1155c4u: goto label_1155c4;
        default: break;
    }

    ctx->pc = 0x115288u;

    // 0x115288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11528c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115290: 0xc045484  jal         func_115210
    ctx->pc = 0x115290u;
    SET_GPR_U32(ctx, 31, 0x115298u);
    ctx->pc = 0x115210u;
    if (runtime->hasFunction(0x115210u)) {
        auto targetFn = runtime->lookupFunction(0x115210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115298u; }
        if (ctx->pc != 0x115298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiIopHeapFree_0x115210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115298u; }
        if (ctx->pc != 0x115298u) { return; }
    }
    ctx->pc = 0x115298u;
label_115298:
    // 0x115298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11529c: 0x3e00008  jr          $ra
    ctx->pc = 0x11529Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1152A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11529Cu;
            // 0x1152a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1152A4u;
    // 0x1152a4: 0x0  nop
    ctx->pc = 0x1152a4u;
    // NOP
label_1152a8:
    // 0x1152a8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1152a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1152ac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1152acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1152b0: 0x8c438758  lw          $v1, -0x78A8($v0)
    ctx->pc = 0x1152b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936408)));
    // 0x1152b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1152b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1152b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1152bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1152BCu;
    {
        const bool branch_taken_0x1152bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1152C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1152BCu;
            // 0x1152c0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152bc) {
            ctx->pc = 0x1152CCu;
            goto label_1152cc;
        }
    }
    ctx->pc = 0x1152C4u;
    // 0x1152c4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1152C4u;
    {
        const bool branch_taken_0x1152c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1152C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1152C4u;
            // 0x1152c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152c4) {
            ctx->pc = 0x115388u;
            goto label_115388;
        }
    }
    ctx->pc = 0x1152CCu;
label_1152cc:
    // 0x1152cc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1152ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1152d0: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x1152d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x1152d4: 0x24e39b40  addiu       $v1, $a3, -0x64C0
    ctx->pc = 0x1152d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941504));
    // 0x1152d8: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x1152d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1152dc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1152dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1152e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1152E0u;
    {
        const bool branch_taken_0x1152e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1152E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1152E0u;
            // 0x1152e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152e0) {
            ctx->pc = 0x115328u;
            goto label_115328;
        }
    }
    ctx->pc = 0x1152E8u;
    // 0x1152e8: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1152e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1152ec: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1152ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1152f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1152f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1152f4: 0x0  nop
    ctx->pc = 0x1152f4u;
    // NOP
label_1152f8:
    // 0x1152f8: 0x290200fc  slti        $v0, $t0, 0xFC
    ctx->pc = 0x1152f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x1152fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1152FCu;
    {
        const bool branch_taken_0x1152fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1152FCu;
            // 0x115300: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152fc) {
            ctx->pc = 0x115330u;
            goto label_115330;
        }
    }
    ctx->pc = 0x115304u;
    // 0x115304: 0x24e39b40  addiu       $v1, $a3, -0x64C0
    ctx->pc = 0x115304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941504));
    // 0x115308: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x115308u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11530c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x115310: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x115310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x115314: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x115314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x115318: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x115318u;
    {
        const bool branch_taken_0x115318 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x115318) {
            ctx->pc = 0x11531Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x115318u;
            // 0x11531c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1152F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1152f8;
        }
    }
    ctx->pc = 0x115320u;
    // 0x115320: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115320u;
    {
        const bool branch_taken_0x115320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115320u;
            // 0x115324: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115320) {
            ctx->pc = 0x115334u;
            goto label_115334;
        }
    }
    ctx->pc = 0x115328u;
label_115328:
    // 0x115328: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x115328u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11532c: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x11532cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
label_115330:
    // 0x115330: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x115330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_115334:
    // 0x115334: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115334u;
    {
        const bool branch_taken_0x115334 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x115334) {
            ctx->pc = 0x115338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x115334u;
            // 0x115338: 0xace59b40  sw          $a1, -0x64C0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294941504), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11534Cu;
            goto label_11534c;
        }
    }
    ctx->pc = 0x11533Cu;
    // 0x11533c: 0x24e29b40  addiu       $v0, $a3, -0x64C0
    ctx->pc = 0x11533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941504));
    // 0x115340: 0x240800fb  addiu       $t0, $zero, 0xFB
    ctx->pc = 0x115340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x115344: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x115344u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x115348: 0xace59b40  sw          $a1, -0x64C0($a3)
    ctx->pc = 0x115348u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294941504), GPR_U32(ctx, 5));
label_11534c:
    // 0x11534c: 0x24e29b40  addiu       $v0, $a3, -0x64C0
    ctx->pc = 0x11534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941504));
    // 0x115350: 0x25249a80  addiu       $a0, $t1, -0x6580
    ctx->pc = 0x115350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941312));
    // 0x115354: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x115354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x115358: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x115358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11535c: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x11535cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x115360: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115364: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x115364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11536c: 0x26099ac0  addiu       $t1, $s0, -0x6540
    ctx->pc = 0x11536cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941376));
    // 0x115370: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115374: 0xc04434c  jal         func_110D30
    ctx->pc = 0x115374u;
    SET_GPR_U32(ctx, 31, 0x11537Cu);
    ctx->pc = 0x115378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115374u;
            // 0x115378: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11537Cu; }
        if (ctx->pc != 0x11537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11537Cu; }
        if (ctx->pc != 0x11537Cu) { return; }
    }
    ctx->pc = 0x11537Cu;
label_11537c:
    // 0x11537c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11537Cu;
    {
        const bool branch_taken_0x11537c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11537Cu;
            // 0x115380: 0x8e029ac0  lw          $v0, -0x6540($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11537c) {
            ctx->pc = 0x115388u;
            goto label_115388;
        }
    }
    ctx->pc = 0x115384u;
    // 0x115384: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_115388:
    // 0x115388: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11538c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11538cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115390: 0x3e00008  jr          $ra
    ctx->pc = 0x115390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115390u;
            // 0x115394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115398u;
label_115398:
    // 0x115398: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x115398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11539c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11539cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1153a0: 0x8c438758  lw          $v1, -0x78A8($v0)
    ctx->pc = 0x1153a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936408)));
    // 0x1153a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1153a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1153a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1153A8u;
    {
        const bool branch_taken_0x1153a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1153ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1153A8u;
            // 0x1153ac: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153a8) {
            ctx->pc = 0x1153B8u;
            goto label_1153b8;
        }
    }
    ctx->pc = 0x1153B0u;
    // 0x1153b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1153B0u;
    {
        const bool branch_taken_0x1153b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1153B0u;
            // 0x1153b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153b0) {
            ctx->pc = 0x1153F8u;
            goto label_1153f8;
        }
    }
    ctx->pc = 0x1153B8u;
label_1153b8:
    // 0x1153b8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1153b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1153bc: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1153bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1153c0: 0x24849a80  addiu       $a0, $a0, -0x6580
    ctx->pc = 0x1153c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941312));
    // 0x1153c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1153c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1153c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1153c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1153cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1153ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1153d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1153d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1153d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1153d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1153d8: 0x26099ac0  addiu       $t1, $s0, -0x6540
    ctx->pc = 0x1153d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941376));
    // 0x1153dc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1153dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1153e0: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1153E0u;
    SET_GPR_U32(ctx, 31, 0x1153E8u);
    ctx->pc = 0x1153E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1153E0u;
            // 0x1153e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1153E8u; }
        if (ctx->pc != 0x1153E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1153E8u; }
        if (ctx->pc != 0x1153E8u) { return; }
    }
    ctx->pc = 0x1153E8u;
label_1153e8:
    // 0x1153e8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1153E8u;
    {
        const bool branch_taken_0x1153e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1153e8) {
            ctx->pc = 0x1153ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1153E8u;
            // 0x1153ec: 0x8e029ac0  lw          $v0, -0x6540($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941376)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1153F8u;
            goto label_1153f8;
        }
    }
    ctx->pc = 0x1153F0u;
    // 0x1153f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1153f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1153f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1153f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1153f8:
    // 0x1153f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1153f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1153fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1153fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115400: 0x3e00008  jr          $ra
    ctx->pc = 0x115400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115400u;
            // 0x115404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115408u;
label_115408:
    // 0x115408: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x115408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11540c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11540cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115410: 0x8c438758  lw          $v1, -0x78A8($v0)
    ctx->pc = 0x115410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936408)));
    // 0x115414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115418: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115418u;
    {
        const bool branch_taken_0x115418 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11541Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115418u;
            // 0x11541c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115418) {
            ctx->pc = 0x115428u;
            goto label_115428;
        }
    }
    ctx->pc = 0x115420u;
    // 0x115420: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x115420u;
    {
        const bool branch_taken_0x115420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115420u;
            // 0x115424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115420) {
            ctx->pc = 0x115468u;
            goto label_115468;
        }
    }
    ctx->pc = 0x115428u;
label_115428:
    // 0x115428: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x115428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11542c: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x11542cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x115430: 0x24849a80  addiu       $a0, $a0, -0x6580
    ctx->pc = 0x115430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941312));
    // 0x115434: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115438: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x115438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11543c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11543cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115444: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x115444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115448: 0x26099ac0  addiu       $t1, $s0, -0x6540
    ctx->pc = 0x115448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941376));
    // 0x11544c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11544cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115450: 0xc04434c  jal         func_110D30
    ctx->pc = 0x115450u;
    SET_GPR_U32(ctx, 31, 0x115458u);
    ctx->pc = 0x115454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115450u;
            // 0x115454: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115458u; }
        if (ctx->pc != 0x115458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115458u; }
        if (ctx->pc != 0x115458u) { return; }
    }
    ctx->pc = 0x115458u;
label_115458:
    // 0x115458: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115458u;
    {
        const bool branch_taken_0x115458 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115458) {
            ctx->pc = 0x11545Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x115458u;
            // 0x11545c: 0x8e029ac0  lw          $v0, -0x6540($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941376)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x115468u;
            goto label_115468;
        }
    }
    ctx->pc = 0x115460u;
    // 0x115460: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x115460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x115464: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x115464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_115468:
    // 0x115468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11546c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11546cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115470: 0x3e00008  jr          $ra
    ctx->pc = 0x115470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115470u;
            // 0x115474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115478u;
label_115478:
    // 0x115478: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x115478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11547c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11547cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115480: 0x8c438758  lw          $v1, -0x78A8($v0)
    ctx->pc = 0x115480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936408)));
    // 0x115484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115488: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115488u;
    {
        const bool branch_taken_0x115488 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115488u;
            // 0x11548c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115488) {
            ctx->pc = 0x115498u;
            goto label_115498;
        }
    }
    ctx->pc = 0x115490u;
    // 0x115490: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x115490u;
    {
        const bool branch_taken_0x115490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115490u;
            // 0x115494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115490) {
            ctx->pc = 0x1154D8u;
            goto label_1154d8;
        }
    }
    ctx->pc = 0x115498u;
label_115498:
    // 0x115498: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x115498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11549c: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x11549cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1154a0: 0x24849a80  addiu       $a0, $a0, -0x6580
    ctx->pc = 0x1154a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941312));
    // 0x1154a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1154a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1154a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1154a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1154ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1154acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1154b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1154b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1154b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1154b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1154b8: 0x26099ac0  addiu       $t1, $s0, -0x6540
    ctx->pc = 0x1154b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941376));
    // 0x1154bc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1154bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1154c0: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1154C0u;
    SET_GPR_U32(ctx, 31, 0x1154C8u);
    ctx->pc = 0x1154C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1154C0u;
            // 0x1154c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1154C8u; }
        if (ctx->pc != 0x1154C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1154C8u; }
        if (ctx->pc != 0x1154C8u) { return; }
    }
    ctx->pc = 0x1154C8u;
label_1154c8:
    // 0x1154c8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1154C8u;
    {
        const bool branch_taken_0x1154c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1154c8) {
            ctx->pc = 0x1154CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1154C8u;
            // 0x1154cc: 0x8e029ac0  lw          $v0, -0x6540($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941376)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1154D8u;
            goto label_1154d8;
        }
    }
    ctx->pc = 0x1154D0u;
    // 0x1154d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1154d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1154d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1154d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1154d8:
    // 0x1154d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1154d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1154dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1154dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1154e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1154E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1154E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1154E0u;
            // 0x1154e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1154E8u;
label_1154e8:
    // 0x1154e8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1154e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1154ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1154ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1154f0: 0x8c628758  lw          $v0, -0x78A8($v1)
    ctx->pc = 0x1154f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936408)));
    // 0x1154f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1154f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1154f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1154f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1154fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1154FCu;
    {
        const bool branch_taken_0x1154fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1154FCu;
            // 0x115500: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154fc) {
            ctx->pc = 0x11550Cu;
            goto label_11550c;
        }
    }
    ctx->pc = 0x115504u;
    // 0x115504: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x115504u;
    {
        const bool branch_taken_0x115504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115504u;
            // 0x115508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115504) {
            ctx->pc = 0x115554u;
            goto label_115554;
        }
    }
    ctx->pc = 0x11550Cu;
label_11550c:
    // 0x11550c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x11550cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x115510: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x115510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x115514: 0xace59b00  sw          $a1, -0x6500($a3)
    ctx->pc = 0x115514u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294941440), GPR_U32(ctx, 5));
    // 0x115518: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x115518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x11551c: 0x24849a80  addiu       $a0, $a0, -0x6580
    ctx->pc = 0x11551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941312));
    // 0x115520: 0x24e79b00  addiu       $a3, $a3, -0x6500
    ctx->pc = 0x115520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941440));
    // 0x115524: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115528: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x115528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11552c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11552cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115530: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x115530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115534: 0x26099ac0  addiu       $t1, $s0, -0x6540
    ctx->pc = 0x115534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941376));
    // 0x115538: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11553c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11553Cu;
    SET_GPR_U32(ctx, 31, 0x115544u);
    ctx->pc = 0x115540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11553Cu;
            // 0x115540: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115544u; }
        if (ctx->pc != 0x115544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115544u; }
        if (ctx->pc != 0x115544u) { return; }
    }
    ctx->pc = 0x115544u;
label_115544:
    // 0x115544: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115544u;
    {
        const bool branch_taken_0x115544 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115544) {
            ctx->pc = 0x115548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x115544u;
            // 0x115548: 0x8e029ac0  lw          $v0, -0x6540($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941376)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x115554u;
            goto label_115554;
        }
    }
    ctx->pc = 0x11554Cu;
    // 0x11554c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11554cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x115550: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x115550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_115554:
    // 0x115554: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115558: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x115558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11555c: 0x3e00008  jr          $ra
    ctx->pc = 0x11555Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11555Cu;
            // 0x115560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115564u;
    // 0x115564: 0x0  nop
    ctx->pc = 0x115564u;
    // NOP
label_115568:
    // 0x115568: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x115568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11556c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11556cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115570: 0x8c628758  lw          $v0, -0x78A8($v1)
    ctx->pc = 0x115570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936408)));
    // 0x115574: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x115574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115578: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11557c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11557Cu;
    {
        const bool branch_taken_0x11557c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11557Cu;
            // 0x115580: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11557c) {
            ctx->pc = 0x11558Cu;
            goto label_11558c;
        }
    }
    ctx->pc = 0x115584u;
    // 0x115584: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x115584u;
    {
        const bool branch_taken_0x115584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115584u;
            // 0x115588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115584) {
            ctx->pc = 0x1155D4u;
            goto label_1155d4;
        }
    }
    ctx->pc = 0x11558Cu;
label_11558c:
    // 0x11558c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x11558cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x115590: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x115590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x115594: 0xace59b00  sw          $a1, -0x6500($a3)
    ctx->pc = 0x115594u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294941440), GPR_U32(ctx, 5));
    // 0x115598: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x115598u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x11559c: 0x24849a80  addiu       $a0, $a0, -0x6580
    ctx->pc = 0x11559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941312));
    // 0x1155a0: 0x24e79b00  addiu       $a3, $a3, -0x6500
    ctx->pc = 0x1155a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941440));
    // 0x1155a4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1155a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1155a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1155a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1155ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1155acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1155b0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1155b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1155b4: 0x26099ac0  addiu       $t1, $s0, -0x6540
    ctx->pc = 0x1155b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941376));
    // 0x1155b8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1155b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1155bc: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1155BCu;
    SET_GPR_U32(ctx, 31, 0x1155C4u);
    ctx->pc = 0x1155C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1155BCu;
            // 0x1155c0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1155C4u; }
        if (ctx->pc != 0x1155C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1155C4u; }
        if (ctx->pc != 0x1155C4u) { return; }
    }
    ctx->pc = 0x1155C4u;
label_1155c4:
    // 0x1155c4: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1155C4u;
    {
        const bool branch_taken_0x1155c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1155c4) {
            ctx->pc = 0x1155C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1155C4u;
            // 0x1155c8: 0x8e029ac0  lw          $v0, -0x6540($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941376)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1155D4u;
            goto label_1155d4;
        }
    }
    ctx->pc = 0x1155CCu;
    // 0x1155cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1155ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1155d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1155d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1155d4:
    // 0x1155d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1155d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1155d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1155d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1155dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1155DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1155E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1155DCu;
            // 0x1155e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1155E4u;
    // 0x1155e4: 0x0  nop
    ctx->pc = 0x1155e4u;
    // NOP
    ctx->pc = 0x1155e8u;
}
