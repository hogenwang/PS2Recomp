#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00130840
// Address: 0x130840 - 0x130980
void sub_00130840_0x130840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130840_0x130840");
#endif

    switch (ctx->pc) {
        case 0x13086cu: goto label_13086c;
        case 0x1308bcu: goto label_1308bc;
        default: break;
    }

    ctx->pc = 0x130840u;

    // 0x130840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130844: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13084c: 0xa4605a98  sh          $zero, 0x5A98($v1)
    ctx->pc = 0x13084cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 23192), (uint16_t)GPR_U32(ctx, 0));
    // 0x130850: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x130850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x130854: 0x90649780  lbu         $a0, -0x6880($v1)
    ctx->pc = 0x130854u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x130858: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x130858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13085c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13085Cu;
    {
        const bool branch_taken_0x13085c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13085c) {
            ctx->pc = 0x130874u;
            goto label_130874;
        }
    }
    ctx->pc = 0x130864u;
    // 0x130864: 0xc0d0b98  jal         func_342E60
    ctx->pc = 0x130864u;
    SET_GPR_U32(ctx, 31, 0x13086Cu);
    ctx->pc = 0x342E60u;
    if (runtime->hasFunction(0x342E60u)) {
        auto targetFn = runtime->lookupFunction(0x342E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13086Cu; }
        if (ctx->pc != 0x13086Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342E60_0x342e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13086Cu; }
        if (ctx->pc != 0x13086Cu) { return; }
    }
    ctx->pc = 0x13086Cu;
label_13086c:
    // 0x13086c: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x13086Cu;
    {
        const bool branch_taken_0x13086c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13086c) {
            ctx->pc = 0x130870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13086Cu;
            // 0x130870: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130978u;
            goto label_130978;
        }
    }
    ctx->pc = 0x130874u;
label_130874:
    // 0x130874: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x130874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x130878: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x130878u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x13087c: 0x9469ec80  lhu         $t1, -0x1380($v1)
    ctx->pc = 0x13087cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962304)));
    // 0x130880: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x130880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x130884: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x130884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x130888: 0x3127001f  andi        $a3, $t1, 0x1F
    ctx->pc = 0x130888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x13088c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x13088cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x130890: 0xa4c75a98  sh          $a3, 0x5A98($a2)
    ctx->pc = 0x130890u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 23192), (uint16_t)GPR_U32(ctx, 7));
    // 0x130894: 0x31293f80  andi        $t1, $t1, 0x3F80
    ctx->pc = 0x130894u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)16256);
    // 0x130898: 0x90689780  lbu         $t0, -0x6880($v1)
    ctx->pc = 0x130898u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x13089c: 0x3126ffff  andi        $a2, $t1, 0xFFFF
    ctx->pc = 0x13089cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1308a0: 0x94a55a98  lhu         $a1, 0x5A98($a1)
    ctx->pc = 0x1308a0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 23192)));
    // 0x1308a4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1308a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1308a8: 0xa63825  or          $a3, $a1, $a2
    ctx->pc = 0x1308a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1308ac: 0x15030006  bne         $t0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1308ACu;
    {
        const bool branch_taken_0x1308ac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x1308B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1308ACu;
            // 0x1308b0: 0xa4875a98  sh          $a3, 0x5A98($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 23192), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308ac) {
            ctx->pc = 0x1308C8u;
            goto label_1308c8;
        }
    }
    ctx->pc = 0x1308B4u;
    // 0x1308b4: 0xc0d0b98  jal         func_342E60
    ctx->pc = 0x1308B4u;
    SET_GPR_U32(ctx, 31, 0x1308BCu);
    ctx->pc = 0x342E60u;
    if (runtime->hasFunction(0x342E60u)) {
        auto targetFn = runtime->lookupFunction(0x342E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1308BCu; }
        if (ctx->pc != 0x1308BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342E60_0x342e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1308BCu; }
        if (ctx->pc != 0x1308BCu) { return; }
    }
    ctx->pc = 0x1308BCu;
label_1308bc:
    // 0x1308bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1308bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1308c0: 0x1043002c  beq         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1308C0u;
    {
        const bool branch_taken_0x1308c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1308c0) {
            ctx->pc = 0x130974u;
            goto label_130974;
        }
    }
    ctx->pc = 0x1308C8u;
label_1308c8:
    // 0x1308c8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1308c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1308cc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1308ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1308d0: 0x94665a98  lhu         $a2, 0x5A98($v1)
    ctx->pc = 0x1308d0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 23192)));
    // 0x1308d4: 0x9487ec80  lhu         $a3, -0x1380($a0)
    ctx->pc = 0x1308d4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294962304)));
    // 0x1308d8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1308d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1308dc: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x1308dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x1308e0: 0x30e70060  andi        $a3, $a3, 0x60
    ctx->pc = 0x1308e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)96);
    // 0x1308e4: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x1308e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1308e8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1308e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1308ec: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x1308ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1308f0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1308f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1308f4: 0x14a3001f  bne         $a1, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1308F4u;
    {
        const bool branch_taken_0x1308f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1308F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1308F4u;
            // 0x1308f8: 0xa4875a98  sh          $a3, 0x5A98($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 23192), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308f4) {
            ctx->pc = 0x130974u;
            goto label_130974;
        }
    }
    ctx->pc = 0x1308FCu;
    // 0x1308fc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x1308fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x130900: 0x8c65bee4  lw          $a1, -0x411C($v1)
    ctx->pc = 0x130900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950628)));
    // 0x130904: 0x30a30200  andi        $v1, $a1, 0x200
    ctx->pc = 0x130904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x130908: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x130908u;
    {
        const bool branch_taken_0x130908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130908) {
            ctx->pc = 0x13090Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130908u;
            // 0x13090c: 0x30a30400  andi        $v1, $a1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x130924u;
            goto label_130924;
        }
    }
    ctx->pc = 0x130910u;
    // 0x130910: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x130910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x130914: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130918: 0x34870080  ori         $a3, $a0, 0x80
    ctx->pc = 0x130918u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x13091c: 0xa4675a98  sh          $a3, 0x5A98($v1)
    ctx->pc = 0x13091cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 23192), (uint16_t)GPR_U32(ctx, 7));
    // 0x130920: 0x30a30400  andi        $v1, $a1, 0x400
    ctx->pc = 0x130920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
label_130924:
    // 0x130924: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x130924u;
    {
        const bool branch_taken_0x130924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130924) {
            ctx->pc = 0x130928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130924u;
            // 0x130928: 0x30a30800  andi        $v1, $a1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x130940u;
            goto label_130940;
        }
    }
    ctx->pc = 0x13092Cu;
    // 0x13092c: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x13092cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x130930: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130934: 0x34870100  ori         $a3, $a0, 0x100
    ctx->pc = 0x130934u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x130938: 0xa4675a98  sh          $a3, 0x5A98($v1)
    ctx->pc = 0x130938u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 23192), (uint16_t)GPR_U32(ctx, 7));
    // 0x13093c: 0x30a30800  andi        $v1, $a1, 0x800
    ctx->pc = 0x13093cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
label_130940:
    // 0x130940: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x130940u;
    {
        const bool branch_taken_0x130940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130940) {
            ctx->pc = 0x130944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130940u;
            // 0x130944: 0x30a31000  andi        $v1, $a1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13095Cu;
            goto label_13095c;
        }
    }
    ctx->pc = 0x130948u;
    // 0x130948: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x130948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x13094c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13094cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x130950: 0x34870400  ori         $a3, $a0, 0x400
    ctx->pc = 0x130950u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
    // 0x130954: 0xa4675a98  sh          $a3, 0x5A98($v1)
    ctx->pc = 0x130954u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 23192), (uint16_t)GPR_U32(ctx, 7));
    // 0x130958: 0x30a31000  andi        $v1, $a1, 0x1000
    ctx->pc = 0x130958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
label_13095c:
    // 0x13095c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13095Cu;
    {
        const bool branch_taken_0x13095c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13095c) {
            ctx->pc = 0x130974u;
            goto label_130974;
        }
    }
    ctx->pc = 0x130964u;
    // 0x130964: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x130964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x130968: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x130968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13096c: 0x34870800  ori         $a3, $a0, 0x800
    ctx->pc = 0x13096cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x130970: 0xa4675a98  sh          $a3, 0x5A98($v1)
    ctx->pc = 0x130970u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 23192), (uint16_t)GPR_U32(ctx, 7));
label_130974:
    // 0x130974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_130978:
    // 0x130978: 0x3e00008  jr          $ra
    ctx->pc = 0x130978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130978u;
            // 0x13097c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130980u;
    ctx->pc = 0x130980u;
}
