#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00350360
// Address: 0x350360 - 0x350530
void sub_00350360_0x350360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350360_0x350360");
#endif

    switch (ctx->pc) {
        case 0x35037cu: goto label_35037c;
        case 0x350398u: goto label_350398;
        case 0x3503a4u: goto label_3503a4;
        case 0x3503acu: goto label_3503ac;
        case 0x3503bcu: goto label_3503bc;
        case 0x3503dcu: goto label_3503dc;
        case 0x3503f0u: goto label_3503f0;
        case 0x350400u: goto label_350400;
        case 0x350448u: goto label_350448;
        case 0x350454u: goto label_350454;
        case 0x35045cu: goto label_35045c;
        case 0x350464u: goto label_350464;
        case 0x350470u: goto label_350470;
        case 0x350484u: goto label_350484;
        case 0x35049cu: goto label_35049c;
        case 0x3504b0u: goto label_3504b0;
        case 0x3504c0u: goto label_3504c0;
        case 0x3504d8u: goto label_3504d8;
        case 0x3504f0u: goto label_3504f0;
        case 0x350524u: goto label_350524;
        default: break;
    }

    ctx->pc = 0x350360u;

label_350360:
    // 0x350360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350364: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x350368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35036c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35036cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x350370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x350370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350374: 0xc055684  jal         func_155A10
    ctx->pc = 0x350374u;
    SET_GPR_U32(ctx, 31, 0x35037Cu);
    ctx->pc = 0x350378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350374u;
            // 0x350378: 0xa0409738  sb          $zero, -0x68C8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35037Cu; }
        if (ctx->pc != 0x35037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35037Cu; }
        if (ctx->pc != 0x35037Cu) { return; }
    }
    ctx->pc = 0x35037Cu;
label_35037c:
    // 0x35037c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35037cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x350380: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x350384: 0xac40beb0  sw          $zero, -0x4150($v0)
    ctx->pc = 0x350384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950576), GPR_U32(ctx, 0));
    // 0x350388: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x350388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35038c: 0xac60beb4  sw          $zero, -0x414C($v1)
    ctx->pc = 0x35038cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950580), GPR_U32(ctx, 0));
    // 0x350390: 0xc0551c0  jal         func_154700
    ctx->pc = 0x350390u;
    SET_GPR_U32(ctx, 31, 0x350398u);
    ctx->pc = 0x350394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350390u;
            // 0x350394: 0xac40beb8  sw          $zero, -0x4148($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154700u;
    if (runtime->hasFunction(0x154700u)) {
        auto targetFn = runtime->lookupFunction(0x154700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350398u; }
        if (ctx->pc != 0x350398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154700_0x154700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350398u; }
        if (ctx->pc != 0x350398u) { return; }
    }
    ctx->pc = 0x350398u;
label_350398:
    // 0x350398: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x350398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x35039c: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x35039Cu;
    SET_GPR_U32(ctx, 31, 0x3503A4u);
    ctx->pc = 0x3503A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35039Cu;
            // 0x3503a0: 0xac40bdc8  sw          $zero, -0x4238($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B00u;
    if (runtime->hasFunction(0x1A4B00u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503A4u; }
        if (ctx->pc != 0x3503A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4B00_0x1a4b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503A4u; }
        if (ctx->pc != 0x3503A4u) { return; }
    }
    ctx->pc = 0x3503A4u;
label_3503a4:
    // 0x3503a4: 0xc0cb1f4  jal         func_32C7D0
    ctx->pc = 0x3503A4u;
    SET_GPR_U32(ctx, 31, 0x3503ACu);
    ctx->pc = 0x32C7D0u;
    if (runtime->hasFunction(0x32C7D0u)) {
        auto targetFn = runtime->lookupFunction(0x32C7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503ACu; }
        if (ctx->pc != 0x3503ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C7D0_0x32c7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503ACu; }
        if (ctx->pc != 0x3503ACu) { return; }
    }
    ctx->pc = 0x3503ACu;
label_3503ac:
    // 0x3503ac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3503acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3503b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3503b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3503b4: 0xc0555e0  jal         func_155780
    ctx->pc = 0x3503B4u;
    SET_GPR_U32(ctx, 31, 0x3503BCu);
    ctx->pc = 0x3503B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3503B4u;
            // 0x3503b8: 0xac40d9c0  sw          $zero, -0x2640($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155780u;
    if (runtime->hasFunction(0x155780u)) {
        auto targetFn = runtime->lookupFunction(0x155780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503BCu; }
        if (ctx->pc != 0x3503BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155780_0x155780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503BCu; }
        if (ctx->pc != 0x3503BCu) { return; }
    }
    ctx->pc = 0x3503BCu;
label_3503bc:
    // 0x3503bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3503bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3503c0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x3503c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x3503c4: 0x9063dae0  lbu         $v1, -0x2520($v1)
    ctx->pc = 0x3503c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957792)));
    // 0x3503c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3503c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3503cc: 0x24840b80  addiu       $a0, $a0, 0xB80
    ctx->pc = 0x3503ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2944));
    // 0x3503d0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3503d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3503d4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3503D4u;
    SET_GPR_U32(ctx, 31, 0x3503DCu);
    ctx->pc = 0x3503D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3503D4u;
            // 0x3503d8: 0xa043dae0  sb          $v1, -0x2520($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957792), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503DCu; }
        if (ctx->pc != 0x3503DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503DCu; }
        if (ctx->pc != 0x3503DCu) { return; }
    }
    ctx->pc = 0x3503DCu;
label_3503dc:
    // 0x3503dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3503dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3503e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3503e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3503e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3503E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3503E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3503E4u;
            // 0x3503e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3503ECu;
    // 0x3503ec: 0x0  nop
    ctx->pc = 0x3503ecu;
    // NOP
label_3503f0:
    // 0x3503f0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3503f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3503f4: 0x80d0d8c  j           func_343630
    ctx->pc = 0x3503F4u;
    ctx->pc = 0x3503F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3503F4u;
            // 0x3503f8: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343630u;
    if (runtime->hasFunction(0x343630u)) {
        auto targetFn = runtime->lookupFunction(0x343630u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00343630_0x343630(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3503FCu;
    // 0x3503fc: 0x0  nop
    ctx->pc = 0x3503fcu;
    // NOP
label_350400:
    // 0x350400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x350404: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x350404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35040c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x35040cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x350410: 0xac40fe48  sw          $zero, -0x1B8($v0)
    ctx->pc = 0x350410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966856), GPR_U32(ctx, 0));
    // 0x350414: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x350414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x350418: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x350418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x35041c: 0xac649478  sw          $a0, -0x6B88($v1)
    ctx->pc = 0x35041cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939768), GPR_U32(ctx, 4));
    // 0x350420: 0x9045dae0  lbu         $a1, -0x2520($v0)
    ctx->pc = 0x350420u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957792)));
    // 0x350424: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x350424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x350428: 0xac60fe40  sw          $zero, -0x1C0($v1)
    ctx->pc = 0x350428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966848), GPR_U32(ctx, 0));
    // 0x35042c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x35042cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x350430: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x350430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x350434: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350438: 0xa0449780  sb          $a0, -0x6880($v0)
    ctx->pc = 0x350438u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 4));
    // 0x35043c: 0x34a20002  ori         $v0, $a1, 0x2
    ctx->pc = 0x35043cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x350440: 0xc0c07f4  jal         func_301FD0
    ctx->pc = 0x350440u;
    SET_GPR_U32(ctx, 31, 0x350448u);
    ctx->pc = 0x350444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350440u;
            // 0x350444: 0xa062dae0  sb          $v0, -0x2520($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294957792), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301FD0u;
    if (runtime->hasFunction(0x301FD0u)) {
        auto targetFn = runtime->lookupFunction(0x301FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350448u; }
        if (ctx->pc != 0x350448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301FD0_0x301fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350448u; }
        if (ctx->pc != 0x350448u) { return; }
    }
    ctx->pc = 0x350448u;
label_350448:
    // 0x350448: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x350448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35044c: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x35044Cu;
    SET_GPR_U32(ctx, 31, 0x350454u);
    ctx->pc = 0x350450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35044Cu;
            // 0x350450: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (runtime->hasFunction(0x301AE0u)) {
        auto targetFn = runtime->lookupFunction(0x301AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350454u; }
        if (ctx->pc != 0x350454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301AE0_0x301ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350454u; }
        if (ctx->pc != 0x350454u) { return; }
    }
    ctx->pc = 0x350454u;
label_350454:
    // 0x350454: 0xc0c0624  jal         func_301890
    ctx->pc = 0x350454u;
    SET_GPR_U32(ctx, 31, 0x35045Cu);
    ctx->pc = 0x301890u;
    if (runtime->hasFunction(0x301890u)) {
        auto targetFn = runtime->lookupFunction(0x301890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35045Cu; }
        if (ctx->pc != 0x35045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301890_0x301890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35045Cu; }
        if (ctx->pc != 0x35045Cu) { return; }
    }
    ctx->pc = 0x35045Cu;
label_35045c:
    // 0x35045c: 0xc0d40d8  jal         func_350360
    ctx->pc = 0x35045Cu;
    SET_GPR_U32(ctx, 31, 0x350464u);
    ctx->pc = 0x350460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35045Cu;
            // 0x350460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350360u;
    goto label_350360;
    ctx->pc = 0x350464u;
label_350464:
    // 0x350464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350468: 0x3e00008  jr          $ra
    ctx->pc = 0x350468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350468u;
            // 0x35046c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350470u;
label_350470:
    // 0x350470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x350474: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x350474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35047c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x35047Cu;
    SET_GPR_U32(ctx, 31, 0x350484u);
    ctx->pc = 0x350480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35047Cu;
            // 0x350480: 0x248452f0  addiu       $a0, $a0, 0x52F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350484u; }
        if (ctx->pc != 0x350484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350484u; }
        if (ctx->pc != 0x350484u) { return; }
    }
    ctx->pc = 0x350484u;
label_350484:
    // 0x350484: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x350484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350488: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x350488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x35048c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350490: 0x248404b0  addiu       $a0, $a0, 0x4B0
    ctx->pc = 0x350490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1200));
    // 0x350494: 0xc082674  jal         func_2099D0
    ctx->pc = 0x350494u;
    SET_GPR_U32(ctx, 31, 0x35049Cu);
    ctx->pc = 0x350498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350494u;
            // 0x350498: 0xac439478  sw          $v1, -0x6B88($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35049Cu; }
        if (ctx->pc != 0x35049Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35049Cu; }
        if (ctx->pc != 0x35049Cu) { return; }
    }
    ctx->pc = 0x35049Cu;
label_35049c:
    // 0x35049c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35049cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3504a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3504A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3504A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3504A0u;
            // 0x3504a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3504A8u;
    // 0x3504a8: 0x0  nop
    ctx->pc = 0x3504a8u;
    // NOP
    // 0x3504ac: 0x0  nop
    ctx->pc = 0x3504acu;
    // NOP
label_3504b0:
    // 0x3504b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3504b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3504b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3504b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3504b8: 0xc0c03cc  jal         func_300F30
    ctx->pc = 0x3504B8u;
    SET_GPR_U32(ctx, 31, 0x3504C0u);
    ctx->pc = 0x300F30u;
    if (runtime->hasFunction(0x300F30u)) {
        auto targetFn = runtime->lookupFunction(0x300F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3504C0u; }
        if (ctx->pc != 0x3504C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00300F30_0x300f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3504C0u; }
        if (ctx->pc != 0x3504C0u) { return; }
    }
    ctx->pc = 0x3504C0u;
label_3504c0:
    // 0x3504c0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3504c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3504c4: 0x240304b0  addiu       $v1, $zero, 0x4B0
    ctx->pc = 0x3504c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x3504c8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3504c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3504cc: 0x248404f0  addiu       $a0, $a0, 0x4F0
    ctx->pc = 0x3504ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1264));
    // 0x3504d0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3504D0u;
    SET_GPR_U32(ctx, 31, 0x3504D8u);
    ctx->pc = 0x3504D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3504D0u;
            // 0x3504d4: 0xa443be96  sh          $v1, -0x416A($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950550), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3504D8u; }
        if (ctx->pc != 0x3504D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3504D8u; }
        if (ctx->pc != 0x3504D8u) { return; }
    }
    ctx->pc = 0x3504D8u;
label_3504d8:
    // 0x3504d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3504d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3504dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3504DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3504E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3504DCu;
            // 0x3504e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3504E4u;
    // 0x3504e4: 0x0  nop
    ctx->pc = 0x3504e4u;
    // NOP
    // 0x3504e8: 0x0  nop
    ctx->pc = 0x3504e8u;
    // NOP
    // 0x3504ec: 0x0  nop
    ctx->pc = 0x3504ecu;
    // NOP
label_3504f0:
    // 0x3504f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3504f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3504f4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3504f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3504f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3504f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3504fc: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x3504fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x350500: 0x9465be96  lhu         $a1, -0x416A($v1)
    ctx->pc = 0x350500u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x350504: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x350504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x350508: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35050c: 0xa485be96  sh          $a1, -0x416A($a0)
    ctx->pc = 0x35050cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294950550), (uint16_t)GPR_U32(ctx, 5));
    // 0x350510: 0x9463be96  lhu         $v1, -0x416A($v1)
    ctx->pc = 0x350510u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294950550)));
    // 0x350514: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x350514u;
    {
        const bool branch_taken_0x350514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x350514) {
            ctx->pc = 0x350518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350514u;
            // 0x350518: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x350528u;
            goto label_350528;
        }
    }
    ctx->pc = 0x35051Cu;
    // 0x35051c: 0xc0d1b18  jal         func_346C60
    ctx->pc = 0x35051Cu;
    SET_GPR_U32(ctx, 31, 0x350524u);
    ctx->pc = 0x350520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35051Cu;
            // 0x350520: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346C60u;
    if (runtime->hasFunction(0x346C60u)) {
        auto targetFn = runtime->lookupFunction(0x346C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350524u; }
        if (ctx->pc != 0x350524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346C60_0x346c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350524u; }
        if (ctx->pc != 0x350524u) { return; }
    }
    ctx->pc = 0x350524u;
label_350524:
    // 0x350524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_350528:
    // 0x350528: 0x3e00008  jr          $ra
    ctx->pc = 0x350528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35052Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350528u;
            // 0x35052c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350530u;
    ctx->pc = 0x350530u;
}
